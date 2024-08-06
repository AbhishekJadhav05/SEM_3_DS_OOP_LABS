#include<stdio.h>
#define MAX 100
#include<string.h>

//ACCOUNT FOR HEXADECIMAL AND OCTAL
struct stack{
    int arr[MAX];
    int top;
}stack;

void push(int element){

    if(stack.top==MAX-1)
    {
        printf("Stack overflow");
        return;
    }
    stack.arr[++stack.top]=element;
}
int pop(){
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
        printf("%d",stack.arr[i]);
    }
}

void main(){
    stack.top = -1;
    int number;
    int n;
    printf("enter a number : ");
    scanf("%d",&number);
    printf("enter a base : ");
    scanf("%d",&n);

    while(number >= 1){
        push(number%n);
        number = number/n;
    }
    display();
}
