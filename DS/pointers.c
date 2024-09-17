#include<stdio.h>

int* function(int* p){
    int b = 10;
    p = (int*)malloc(sizeof(int));
    p = &b;
    return p;

}
void function1(int **ptr){
    int b = 10;
    *ptr = &b;
}

void main(){
    int* h;
    int *z;
    printf("%d\n",*function(h));
    function1(&z);
    printf("%d",*z);
}
