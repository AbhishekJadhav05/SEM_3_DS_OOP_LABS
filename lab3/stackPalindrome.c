#include<stdio.h>
#define MAX 100
#include<string.h>

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
    stack.top = -1;
    char string[MAX];
    printf("enter the string : ");
    scanf("%s",string);

    //pushing half the array in stack;
    for(int i=0;string[i] != '\0';i++){
        push(string[i]);
    }
    //palindrome check
    for(int i=0;string[i] != '\0';i++){
            if(pop() != string[i]){
                printf("not palindrome");
                exit(0);
            }
    }
    printf("palindrome");
    return;
}
