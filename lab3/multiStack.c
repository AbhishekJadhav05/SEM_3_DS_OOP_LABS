#include<stdio.h>;
#define MAX 20

struct multiStack{
    int arr[MAX];
    int top[MAX/2];
    int boundary[MAX/2];
}multiStack;

 void push(int element,int stkNo){
    if(multiStack.top[stkNo] == multiStack.boundary[stkNo+1]){
        printf("stack overflow");
        return;
    }
    multiStack.arr[++multiStack.top[stkNo]] = element;
}
int pop(int stkNo){
    if(multiStack.top[stkNo] == multiStack.boundary[stkNo]){
        printf("stack underflow");
        return;
    }
    return multiStack.arr[multiStack.top[stkNo]--];

}
void display(int stkNo){
    if(multiStack.top[stkNo] == multiStack.boundary[stkNo]){
        printf("stack underflow");
        return;
    }
    for(int i = multiStack.top[stkNo];i>multiStack.boundary[stkNo];i--){
        printf("%d",multiStack.arr[i]);
    }
}

void main(){

    int n = 0;
    printf("enter number of stacks : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        multiStack.top[i] = multiStack.boundary[i] = ((MAX/n)*i)-1;

    }
    //call functions
}


