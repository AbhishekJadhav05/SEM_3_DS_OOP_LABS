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

int priority(char element){
    switch (element)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;
    
    case '(': //lowest priority as it will not interfere with other operators.
    case ')':
        return 0;

    default:
        return 3;
    }
}

void main(){
    stack.top = -1;
    char input[MAX];
    char output[MAX];
    int index = 0;
    printf("enter infix string : ");
    scanf("%s",input);
    
    for(int i=0;input[i] != '\0';i++){
        //loop through the input array

        if(priority(input[i]) == 3){
            output[index] = input[i];
            index++;
        }

        else if(input[i] =='('){
            push('(');
        }

        else if (input[i] == ')') {
            // Pop until '(' is found
            while (!isEmpty() && peek() != '(') {
                output[index++] = pop();
            }
            if (!isEmpty()) {
                pop();  // Discard '('
            }
        }

        else {
            // Operator encountered, check precedence
            while (!isEmpty() && (priority(input[i]) <= priority(peek()))) {
                output[index++] = pop();
            }
            push(input[i]);
        }
    }
    while(!isEmpty()){
        output[index] = pop();
        index++;
    }
    output[index] = '\0';
    puts(output);
}
