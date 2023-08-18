#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[101];
    scanf("%s", str);

    //converting str to lowercase
    for(int i = 0; i< strlen(str); i++){
        str[i] = tolower(str[i]); 
    }

    //check for vowels, else print consonant preceeded by '.'
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' ){
            continue;
        }
        else{
            printf(".%c", str[i]);
        }
    }
}