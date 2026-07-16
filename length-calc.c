#include<stdio.h>
int main(){
char str[50];
int length = 0;
char *ptr;
printf("Enter a string = ");
scanf("%s", str);
ptr = str;
while(*ptr != '\0'){
    length++;
    ptr++;
}
printf("Length of string = %d", length);





    return 0;
}