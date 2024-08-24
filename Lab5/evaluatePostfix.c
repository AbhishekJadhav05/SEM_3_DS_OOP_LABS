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

int isEmpty(){
    if(stack.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int evaluate(char* postfix){
    int op1,op2;
    for(int i=0;postfix[i] != '\0';i++){
        switch (postfix[i])
        {
        case '+':
            op1 = pop();
            op2 = pop();
            push(op1 + op2);
            break;

        case '-':
            op1 = pop();
            op2 = pop();
            push(op1 - op2);
            break;

        case '*':
            op1 = pop();
            op2 = pop();
            push(op1 * op2);
            break;

        case '/':
            op1 = pop();
            op2 = pop();
            push(op1 / op2);
            break;
        
        default:
            push(postfix[i] - '0');
            break;
        }
    }
    return pop();
}
void main(){
    char input[MAX];
    printf("enter the postfix sting : ");
    scanf("%d",input);
    printf("%d",evaluate(input))
}