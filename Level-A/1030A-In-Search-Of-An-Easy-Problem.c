#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int choice;
        scanf("%d", &choice);

        //any integer other than '0' is considered as True.
        if(choice){
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
}