#include<stdio.h>
#include<ctype.h>

int main(){
    char str[1001]; //since length of the word is 10^3
    scanf("%s", str);
    str[0]= toupper(str[0]);
    printf("%s", str);
}