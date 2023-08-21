#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[101];
    scanf("%s", s);

    //uppercase and lowercase counter
    int up=0,low=0; 

    //iterate through string and count number of uppercase and lowercase characters
    for(int i=0; i<strlen(s); i++){

        //'a' is bigger than 'A', so anything greater than 'a' is a lowercase character
        if(s[i]>='a'){
            low++;
        }
        else{
            up++;
        }
    }

    //if number of lowercase chars is more than or equal to uppercase characters, convert string to lowercase
    if(low>=up){
        for(int i = 0; i< strlen(s); i++){
            s[i] = tolower(s[i]);
        }
    }
    else{
        for(int i = 0; i< strlen(s); i++){
            s[i] = toupper(s[i]);
        }
    }

    printf("%s", s);
}