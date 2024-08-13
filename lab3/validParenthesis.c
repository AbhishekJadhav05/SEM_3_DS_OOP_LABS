#include<stdio.h>
#define MAX 100

struct stack{
    int arr[MAX];
    int top;
}stack;

void push(char element){

    if(stack.top==MAX-1)
    {
        printf("Stack overflow");
        return;
    }
    stack.arr[++stack.top]=element;
}

char pop(){
    if(stack.top == -1){
        printf("Stack underflow");
        return;
    }
    return stack.arr[stack.top--];
}

void main(){

    char parenthesis[MAX];
    printf("enter the string of parenthesis : ");
    scanf("%s",parenthesis);
    for(int i=0;parenthesis[i] !='\0';i++){

        if((parenthesis[i] == '(') || (parenthesis[i] == '[' )|| (parenthesis[i] == '{' )){
            push(parenthesis[i]);
           }

        if(stack.top != -1){
            if((parenthesis[i] == ')') &&(pop() != '(')){
            printf("invalid");
            exit(0);
           }
        if((parenthesis[i] == ']') &&(pop() != '[')){
            printf("invalid");
            exit(0);
           }
        if((parenthesis[i] == '}') &&(pop() != '{')){
            printf("invalid");
            exit(0);
           }
        }
        else{
            printf("invalid");
            exit(0);
        }
    }
    if(stack.top != -1){
        printf("invalid");
        exit(0);
    }
        printf("valid");
}


