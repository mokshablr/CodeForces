#include<stdio.h>
#include<string.h>

int main(){
    //Char array to store 100 elements + '\n' at most.
    char a[101],b[101];
    char num[101];

    scanf("%s", a);
    scanf("%s", b);

    //check each element of the given numbers
    int i=0;
    while(i<strlen(a)){

        //if numbers don't change, output 0, else output 1.
        if(a[i] == b[i]) printf("0");
        else    printf("1");

        i++;
    }
}