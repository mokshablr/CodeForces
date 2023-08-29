#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d", &n);

    char * str = (char *)malloc(sizeof(char)*(n+1));
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    if(n >= 26){
        int ascii_vals= 'a';
        for(int i=0; i< n; i++){
            for(int j = 0; j<n; j++){
                if(str[j] == (char)ascii_vals){
                    ascii_vals++;
                    break;
                }    
            }
        }
        if(ascii_vals == (int)'z'+1)    printf("YES");
        else    printf("NO");
    }
    else    printf("NO");
}