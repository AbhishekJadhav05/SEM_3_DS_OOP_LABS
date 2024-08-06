#include<stdio.h>
#include<stdlib.h>
struct time{
    int second;
    int minute;
    int hour;
}s[2];
void read(){
    for(int i=0;i<=1;i++){
        printf("enter seconds : ");
        fflush(stdin);
        scanf("%d",time[i].second); // is scanf("%d",time[n]) and scanf("%d",time[n][0]) same base address ?
        printf("enter second: ");
        scanf("%d",time[i].minute);
        fflush(stdin);
        printf("enter hour : ");
        scanf("%d",time[i].hour);
    }
}
void display(struct time* time,int n){

        for(int i=0;i<n;i++){
        printf("second : %d \n",time[i].second);
        printf("minute: %d \n",time[i].minute);
        printf("hour : %d \n",time[i].hour);
        printf("--------------------------------- \n");
        }
}


void main(){
    read(time,n);
    display(time,n);
