#include<stdio.h>
#define MAX 100

struct stack
{
    char arr[MAX];
    int top;
    
}stack;

void push(char element){
    if(stack.top == MAX-1){
        printf("stack overflow");
        return;
    }
    stack.arr[++stack.top] = element;
}

char pop(){
    if(stack.top == -1){
        printf("Stack underflow");
        return;
    }
    return stack.arr[stack.top--];
}   

char peek(){
    return stack.arr[stack.top];
}

int evaluate(char* input){
    int op1,op2;
    for(int i=0;input[i] != '\0';i++){
        switch (input[i])
        {
        case '+':
            op1 = pop();
            op2 = pop();
            push(op2+op1);
            break;

        case '-':
            op1 = pop();
            op2 = pop();
            push(op2-op1);
            break;
        
        case '*':
            op1 = pop();
            op2 = pop();
            push(op2*op1);
            break;
        
        case '/':
            op1 = pop();
            op2 = pop();
            push(op2/op1);
            break;
        
        
        default:
            push(input[i] - '0');
            break;
        }
    }
    return pop();
}

void main(){
    int input[MAX];
    printf("enter input string : ");
    scanf("%s",input);
    printf("%d",(evaluate(input)));
}