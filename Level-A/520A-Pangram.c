//May not be the most ideal, but it works. i have not checked other solutions for this either.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d", &n);

    char * str = (char *)malloc(sizeof(char)*(n+1));
    scanf("%s", str);

    //convert the string to lowercase.
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    //Base requirement would be that the size of the string should atleast be 26, total number of letters in the alphabet.
    if(n >= 26){

        //Store ascii value of first alphabet.
        int ascii_vals= 'a';

        //Iterate through and check if every character in the alphabet is met.
        for(int i=0; i< n; i++){
            for(int j = 0; j<n; j++){
                if(str[j] == (char)ascii_vals){
                    ascii_vals++;
                    break;
                }    
            }
            if(ascii_vals == (int)'z'+1){
                printf("YES");
                return 0;
            }
        }
        if(ascii_vals == (int)'z'+1)    printf("YES");
        else    printf("NO");
        
    }
    else    printf("NO");
}