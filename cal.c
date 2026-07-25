#include<stdio.h>
int main(){
    int num1,num2,num3,result;
    char op;
    printf("enter your operator:\n");
    scanf("%c",&op);
    printf("enter first number:\n");
    scanf("%d",&num1);
    printf("enter the second number:\n");
    scanf("%d",&num2);
    if(op== '+'){
        result=num1+num2;
        printf("sum=%d",result) ;   
    }
    else if(op=='-'){
        result=num1-num2;
        printf("result=%d",result);
    }
    else if(op=='*'){
        result=num1*num2;
        printf("result=%d",result);
    }
    else if(op=='/'){
        if(num2==0){
            printf("the value can't devide by zero");

        }
        else{
            result=num1/num2;
            printf("result= %d", result);
        }
    }
    else{
        printf("please check your operator ");
    }
return 0;
}