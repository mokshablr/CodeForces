#include<stdio.h>
#include<string.h>

int main(){
    char str[101], alph[27];
    int alp=0, unique=0;
    scanf("%s", str);

    int len = strlen(str);

    for(int i=0; i<len; i++){
        int found = 0;
        for(int j=i+1; j<len; j++){
            if(str[i] == str[j]){
                found++;
                break;
            }
        }
        if(found==0) unique++;
    }

    if(unique%2==0)    printf("CHAT WITH HER!");
    else    printf("IGNORE HIM!");
}