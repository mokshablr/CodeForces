#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    int unique=0; //to count number of unique chars
    scanf("%s", str);

    int len = strlen(str);

    for(int i=0; i<len; i++){
        int found = 0;

        //as the loop iterates, the LAST OCCURENCES of the character will be unique.
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