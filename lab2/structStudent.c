#include<stdio.h>
#include<stdlib.h>
struct Student{
    int roll_no;
    char name[20];
    char grade;
};
void read(struct Student* student,int n){
    for(int i=0;i<n;i++){
        printf("enter roll number : ");
        fflush(stdin);
        scanf("%d",&student[i].roll_no); // is scanf("%d",student[n]) and scanf("%d",student[n][0]) same base address ?
        printf("enter name : ");
        scanf("%s",student[i].name);
        fflush(stdin);
        printf("enter grade : ");
        scanf("%c",&student[i].grade);
    }
}
void display(struct Student* student,int n){

        for(int i=0;i<n;i++){
        printf("roll number : %d \n",student[i].roll_no);
        printf("name : %s \n",student[i].name);
        printf("grade : %c \n",student[i].grade);
        printf("--------------------------------- \n");
        }
}

void sort(struct Student* student,int n){
    struct Student temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(student[i].roll_no > student[j].roll_no){
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
}

void main(){
    int n;
    printf("enter the number of students : ");
    scanf("%d",&n);
    struct Student student[n];
    read(student,n);
    sort(student,n);
    display(student,n);
}
