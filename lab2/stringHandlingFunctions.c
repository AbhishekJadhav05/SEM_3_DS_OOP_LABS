#include<stdio.h>

int length(char* string){
    int length = 0;
    for(int i=0;string[i] != '\0';i++){
        length++;
    }
    return length;
}

int stringCompare(char* str1,char* str2){
    int i=0;
    int flag=0;
    while(flag == 0){
        if(str1[i]<str2[i]){
            flag = -1;
        }
        else if (str1[i]>str2[i])
        {
            flag = 1;
        }
        if(str1[i] == '\0')
            break;
        i++;
    }
    return flag;
}


void copy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}


void main(){
    char string[100];
    //scanf("%s",string);
    printf("%d",stringCompare("aaa","a"));
}
