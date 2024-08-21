#include<stdio.h>;
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
void display(){
    if(stack.top == -1){
        printf("Stack underflow");
        return;
    }
    for(int i=stack.top;i>=0;i--){
        printf("%c",stack.arr[i]);
    }
}

char peep(){
    return stack.arr[stack.top];
}

void main(){
    stack.top = -1;
    char input[MAX];
    char output[MAX];
    int index = 0;
    int temp = 0;
    printf("enter the infix string : ");
    scanf("%s",input);
    for(int i=0;input[i] != '\0';i++){
        if(input[i] == '+' ||input[i] == '-' ||input[i] == '*' ||input[i] == '/' || input[i] == '(' || input[i] == ')' ){
            switch(input[i]){
                case '+':
                    if(stack.top != -1){
                        output[index] = pop();
                        index++;
                        push('+');
                    }
                break;

                case '-':
                    if(stack.top !=-1){
                        output[index] = pop();
                        index++;
                        push('-');
                    }
                break;

                case '*':
                    push('*');
                    break;
                case '/':
                    push('/');
                    break;

                case '(':
                    push('(');
                    break;

                case ')':
                    for(int j = 0;peep() !='(';j++){
                        output[index+j] = pop();
                        temp = j;
                    }
                    index +=temp;
                    pop();
            }
        }else{
        output[index] = input[i];
        index++;
        }
    }
    for(int i=0;stack.top>-1;i++){
        output[index+i] = pop();
        temp = i;
    }


    output[index+temp] = '\0';
    puts(output);

}
