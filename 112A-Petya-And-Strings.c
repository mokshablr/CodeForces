#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    //strings of length 100 inclusive, +1 for '\n' at the end
    char str[2][101]; 
    
    for(int i=0; i<2; i++){
        char temp[101];
        scanf("%s", temp);

        //converting temp to lowercase, letter by letter
        for(int i = 0; temp[i]; i++){
            temp[i] = tolower(temp[i]); 
        }

        //storing into 2D string array
        strcpy(str[i], temp);   
    }

    //strcmp() returns a number less than 0 when first string is lesser than the second
    if(strcmp(str[0], str[1])<0)
        printf("-1"); 

    //strcmp() returns a number greater than 0 when first string is greater than the second
    else if(strcmp(str[0], str[1])>0)   
        printf("1");  

    //strcmp() returns 0 when the strings are equal
    else                                
        printf("0");
}