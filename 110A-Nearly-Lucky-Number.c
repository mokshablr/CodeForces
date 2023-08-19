#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int ctr=0;
    //since the range of the input can be till 10^18, we use unsigned long long int
    unsigned long long int num;

    //%llu to read unsigned long long int
    scanf("%llu",&num);

    //converting the integer to a string using sprintf
    char n[20];
    sprintf(n, "%llu", num);

    //check if character at each index is a lucky number
    for(int i=0; i<strlen(n); i++){
        if(n[i] == '4' || n[i] == '7'){
            ctr++;
        }
    }

    //check if the number of lucky numbers is a lucky number
    if(ctr == 4 || ctr == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}