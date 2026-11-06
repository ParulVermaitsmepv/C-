#include <iostream>
#include <memory>
#include <string>
#include <mariadb/conncpp.hpp>

using namespace std;

shared_ptr<sql::Connection> conn;

void init_database() {
    try {
        sql::Driver* driver = sql::mariadb::get_driver_instance();
        sql::SQLString url("jdbc:mariadb://127.0.0.1:3306");
        sql::Properties properties({
            {"user", "root"},
            {"password", ""} 
        });

        conn = shared_ptr<sql::Connection>(driver->connect(url, properties));
        
        shared_ptr<sql::Statement> stmt(conn->createStatement());
        stmt->execute("CREATE DATABASE IF NOT EXISTS bank_db");
        
        conn->setSchema("bank_db");

        stmt->execute(
            "CREATE TABLE IF NOT EXISTS accounts ("
            "account_no INT PRIMARY KEY, "
            "name VARCHAR(50) NOT NULL, "
            "balance DOUBLE NOT NULL)"
        );

    } catch (exception& e) {
        cerr << "Database Setup Error: " << e.what() << endl;
        exit(1);
    }
}

void create_account() {
    int acc_no;
    string name;
    double initial_deposit;

    cout << "\n--- Create New Account ---" << endl;
    cout << "Enter Account Number: ";
    cin >> acc_no;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Initial Deposit Amount: ";
    cin >> initial_deposit;

    try {
        shared_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("INSERT INTO accounts (account_no, name, balance) VALUES (?, ?, ?)"));
        pstmt->setInt(1, acc_no);
        pstmt->setString(2, name);
        pstmt->setDouble(3, initial_deposit);
        pstmt->execute();

        cout << "Success: Account created successfully!" << endl;
    } catch (exception& e) {
        cout << "Error: Could not create account (Account number might already exist)." << endl;
    }
}

void check_balance() {
    int acc_no;
    cout << "\n--- Balance Inquiry ---" << endl;
    cout << "Enter Account Number: ";
    cin >> acc_no;

    try {
        shared_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("SELECT name, balance FROM accounts WHERE account_no = ?"));
        pstmt->setInt(1, acc_no);
        shared_ptr<sql::ResultSet> res(pstmt->executeQuery());

        if (res->next()) {
            cout << "Account Holder: " << res->getString("name") << endl;
            cout << "Current Balance: $" << res->getDouble("balance") << endl;
        } else {
            cout << "Error: Account number not found." << endl;
        }
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void deposit_money() {
    int acc_no;
    double amount;
    cout << "\n--- Deposit Money ---" << endl;
    cout << "Enter Account Number: ";
    cin >> acc_no;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Error: Invalid amount!" << endl;
        return;
    }

    try {
        shared_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("UPDATE accounts SET balance = balance + ? WHERE account_no = ?"));
        pstmt->setDouble(1, amount);
        pstmt->setInt(2, acc_no);
        int rows = pstmt->executeUpdate();

        if (rows > 0) {
            cout << "Success: Money deposited successfully!" << endl;
        } else {
            cout << "Error: Account number not found." << endl;
        }
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

int main() {
    init_database();
    int choice;

    while (true) {
        cout << "\n===============================" << endl;
        cout << "    ATM / BANKING SYSTEM       " << endl;
        cout << "===============================" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                create_account();
                break;
            case 2:
                check_balance();
                break;
            case 3:
                deposit_money();
                break;
            case 4:
                cout << "\nThank you for using the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Error: Invalid choice! Try again." << endl;
        }
    }
    return 0;
}
