#include<stdio.h>
#include<string.h>

int main(){
    char s[101];
    scanf("%s", s);

    char word[] = "hello";
    int j=0;

    for(int i=0; i<strlen(s); i++){
        if(s[i]==word[j]){
            j++;
        }
    }

    if(j==5)    printf("YES");
    else    printf("NO");


}