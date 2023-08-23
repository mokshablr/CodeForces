#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        //since the value of 'n' starts from 1 and index begins with 0, check for (i+1)
        //If the value of 'n' is even, print "I love", else print "I hate"
        if((i+1)%2 == 0){
            printf("I love ");
        }
        else    printf("I hate ");

        //depending on whether the iteration is om the last step, print 'it' else 'that'
        if((i+1) == n)  printf("it");
        else    printf("that ");
    }
}