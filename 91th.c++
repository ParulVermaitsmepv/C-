
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <sstream>
#include <cstdlib>

using namespace std;

// ============================================================
//                    UTILITY FUNCTIONS
// ============================================================

string lowerCase(string text)
{
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

bool contains(string text, string word)
{
    return lowerCase(text).find(lowerCase(word)) != string::npos;
}

// ============================================================
//                    CHATBOT CLASS
// ============================================================

class ChatBot
{
private:

    string userName;
    vector<string> history;
    map<string, string> memory;

public:

    // --------------------------------------------------------
    // Constructor
    // --------------------------------------------------------

    ChatBot()
    {
        userName = "User";
    }

    // --------------------------------------------------------
    // Set user name
    // --------------------------------------------------------

    void setName(string name)
    {
        userName = name;
        memory["name"] = name;
    }

    // --------------------------------------------------------
    // Get user name
    // --------------------------------------------------------

    string getName()
    {
        return userName;
    }

    // --------------------------------------------------------
    // Add conversation to history
    // --------------------------------------------------------

    void addHistory(string text)
    {
        history.push_back(text);
    }

    // ========================================================
    //                         HELP
    // ========================================================

    void help()
    {
        cout << "\n";
        cout << "================ CHATBOT COMMANDS ================\n";
        cout << "/help       - Show commands\n";
        cout << "/time       - Show current time\n";
        cout << "/date       - Show current date\n";
        cout << "/calc       - Calculator\n";
        cout << "/joke       - Tell a joke\n";
        cout << "/history    - Show conversation history\n";
        cout << "/memory     - Show saved memory\n";
        cout << "/save       - Save memory to file\n";
        cout << "/load       - Load memory from file\n";
        cout << "/clear      - Clear screen\n";
        cout << "/about      - About this chatbot\n";
        cout << "/exit       - Exit chatbot\n";
        cout << "==================================================\n";
    }

    // ========================================================
    //                         TIME
    // ========================================================

    void showTime()
    {
        time_t now = time(0);
        tm *localTime = localtime(&now);

        cout << "\nBot: Current time is "
             << localTime->tm_hour << ":"
             << localTime->tm_min << ":"
             << localTime->tm_sec << "\n";
    }

    // ========================================================
    //                         DATE
    // ========================================================

    void showDate()
    {
        time_t now = time(0);
        tm *localTime = localtime(&now);

        cout << "\nBot: Today's date is "
             << localTime->tm_mday << "/"
             << localTime->tm_mon + 1 << "/"
             << localTime->tm_year + 1900 << "\n";
    }

    // ========================================================
    //                       CALCULATOR
    // ========================================================

    void calculator()
    {
        double a, b;
        char operation;

        cout << "\n================ CALCULATOR ================\n";

        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter operator (+ - * /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> b;

        cin.ignore();

        switch(operation)
        {
            case '+':
                cout << "Bot: Answer = " << a + b << "\n";
                break;

            case '-':
                cout << "Bot: Answer = " << a - b << "\n";
                break;

            case '*':
                cout << "Bot: Answer = " << a * b << "\n";
                break;

            case '/':
                if(b == 0)
                    cout << "Bot: Cannot divide by zero!\n";
                else
                    cout << "Bot: Answer = " << a / b << "\n";
                break;

            default:
                cout << "Bot: Invalid operator!\n";
        }
    }

    // ========================================================
    //                          JOKE
    // ========================================================

    void joke()
    {
        vector<string> jokes =
        {
            "Why do programmers prefer dark mode? Because light attracts bugs! 😂",

            "Why was the computer cold? It left its Windows open! 😂",

            "Programmer: I have a problem. Programmer: I will use recursion. 😂",

            "Why did the programmer quit his job? He didn't get arrays! 😂"
        };

        int randomNumber = rand() % jokes.size();

        cout << "\nBot: " << jokes[randomNumber] << "\n";
    }

    // ========================================================
    //                     SHOW HISTORY
    // ========================================================

    void showHistory()
    {
        cout << "\n================ CHAT HISTORY ================\n";

        if(history.empty())
        {
            cout << "No conversation history.\n";
            return;
        }

        for(int i = 0; i < history.size(); i++)
        {
            cout << history[i] << endl;
        }

        cout << "===============================================\n";
    }

    // ========================================================
    //                       MEMORY
    // ========================================================

    void showMemory()
    {
        cout << "\n================ MEMORY ================\n";

        if(memory.empty())
        {
            cout << "Bot: I don't remember anything yet.\n";
        }
        else
        {
            for(auto item : memory)
            {
                cout << item.first << " = "
                     << item.second << endl;
            }
        }

        cout << "========================================\n";
    }

    // ========================================================
    //                     SAVE MEMORY
    // ========================================================

    void saveMemory()
    {
        ofstream file("bot_memory.txt");

        if(!file)
        {
            cout << "Bot: Could not save memory.\n";
            return;
        }

        for(auto item : memory)
        {
            file << item.first << "="
                 << item.second << endl;
        }

        file.close();

        cout << "Bot: Memory saved successfully. 💾\n";
    }

    // ========================================================
    //                     LOAD MEMORY
    // ========================================================

    void loadMemory()
    {
        ifstream file("bot_memory.txt");

        if(!file)
        {
            cout << "Bot: No memory file found.\n";
            return;
        }

        string line;

        while(getline(file, line))
        {
            size_t position = line.find("=");

            if(position != string::npos)
            {
                string key = line.substr(0, position);
                string value = line.substr(position + 1);

                memory[key] = value;
            }
        }

        file.close();

        if(memory.find("name") != memory.end())
        {
            userName = memory["name"];
        }

        cout << "Bot: Memory loaded successfully. 🧠\n";
    }

    // ========================================================
    //                         ABOUT
    // ========================================================

    void about()
    {
        cout << "\n";
        cout << "=================================================\n";
        cout << "              ADVANCED C++ CHATBOT\n";
        cout << "=================================================\n";
        cout << "Language       : C++\n";
        cout << "Programming    : Object-Oriented Programming\n";
        cout << "Memory         : File Handling\n";
        cout << "Features       : Chat, Calculator, Memory,\n";
        cout << "                 History, Date, Time and Jokes\n";
        cout << "=================================================\n";
    }

    // ========================================================
    //                    CLEAR SCREEN
    // ========================================================

    void clearScreen()
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }

    // ========================================================
    //                   MAIN RESPONSE SYSTEM
    // ========================================================

    void respond(string input)
    {
        string text = lowerCase(input);

        // Greeting
        if(contains(text, "hello") ||
           contains(text, "hi") ||
           contains(text, "hey"))
        {
            cout << "Bot: Hello " << userName
                 << "! 😊 How can I help you?\n";
        }

        // How are you
        else if(contains(text, "how are you"))
        {
            cout << "Bot: I'm doing great! "
                 << "Thanks for asking. 🤖\n";
        }

        // Name
        else if(contains(text, "what is my name") ||
                contains(text, "who am i"))
        {
            cout << "Bot: Your name is "
                 << userName << ".\n";
        }

        // Bot name
        else if(contains(text, "your name"))
        {
            cout << "Bot: My name is Advanced C++ Chatbot. 🤖\n";
        }

        // C++
        else if(contains(text, "c++"))
        {
            cout << "Bot: C++ is a powerful programming language "
                 << "used for software, games, operating systems "
                 << "and many other applications.\n";
        }

        // Programming
        else if(contains(text, "programming"))
        {
            cout << "Bot: Programming means giving instructions "
                 << "to a computer to perform a task.\n";
        }

        // Study
        else if(contains(text, "study") ||
                contains(text, "exam"))
        {
            cout << "Bot: Make a study plan, practice regularly, "
                 << "and take short breaks. You can do it! 📚\n";
        }

        // Thanks
        else if(contains(text, "thank"))
        {
            cout << "Bot: You're welcome! 😊\n";
        }

        // Good morning
        else if(contains(text, "good morning"))
        {
            cout << "Bot: Good morning, " << userName
                 << "! ☀️\n";
        }

        // Good night
        else if(contains(text, "good night"))
        {
            cout << "Bot: Good night, " << userName
                 << "! Sleep well. 🌙\n";
        }

        // Love
        else if(contains(text, "love"))
        {
            cout << "Bot: Love is complicated, but definitely "
                 << "one of the most interesting human emotions. ❤️\n";
        }

        // Default
        else
        {
            cout << "Bot: I don't fully understand that yet. 🤔\n";
            cout << "Bot: Try asking something else or type /help.\n";
        }
    }

    // ========================================================
    //                   COMMAND PROCESSOR
    // ========================================================

    bool processCommand(string input)
    {
        string command = lowerCase(input);

        if(command == "/help")
        {
            help();
        }

        else if(command == "/time")
        {
            showTime();
        }

        else if(command == "/date")
        {
            showDate();
        }

        else if(command == "/calc")
        {
            calculator();
        }

        else if(command == "/joke")
        {
            joke();
        }

        else if(command == "/history")
        {
            showHistory();
        }

        else if(command == "/memory")
        {
            showMemory();
        }

        else if(command == "/save")
        {
            saveMemory();
        }

        else if(command == "/load")
        {
            loadMemory();
        }

        else if(command == "/clear")
        {
            clearScreen();
        }

        else if(command == "/about")
        {
            about();
        }

        else if(command == "/exit")
        {
            cout << "\nBot: Goodbye "
                 << userName
                 << "! 👋\n";

            return false;
        }

        else
        {
            respond(input);
        }

        return true;
    }
};


// ============================================================
//                         MAIN FUNCTION
// ============================================================

int main()
{
    srand(time(0));

    ChatBot bot;

    string name;
    string input;

    cout << "\n";
    cout << "=================================================\n";
    cout << "          🤖 ADVANCED C++ CHATBOT 🤖\n";
    cout << "=================================================\n";

    cout << "\nBot: Hello! What is your name? ";
    getline(cin, name);

    bot.setName(name);

    cout << "\nBot: Nice to meet you, " << name << "! 😄\n";

    cout << "Bot: I am an advanced C++ chatbot.\n";
    cout << "Bot: Type /help to see what I can do.\n";

    cout << "\n-------------------------------------------------\n";

    while(true)
    {
        cout << "\n" << name << ": ";
        getline(cin, input);

        bot.addHistory(name + ": " + input);

        if(!bot.processCommand(input))
        {
            break;
        }
    }

    return 0;
}