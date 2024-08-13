#include<stdio.h>;
#define MAX 100

struct queue{
    int arr[MAX];
    int f,r;
}q;

void enque(int element){
    if(q.r == MAX-1){
        printf("queue overflow");
        return;
    }
    q.arr[++q.r] = element;
}
void deque(){
    if(q.f == q.r){
        printf("queue underflow");
        return;
    }
    q.f++;
}
void display(){
    if(q.f == q.r){
        printf("queue underflow");
        return;
    }
    for(int i=q.f+1;i<=q.r;i++){
        printf("%d",q.arr[i]);
    }
}

void main(){
    q.f = -1;
    q.r = -1;
    //call functions
}
