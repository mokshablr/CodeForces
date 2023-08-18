#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int eqn[101];
    int sum=0, j=0;
    char temp;
    
    do { 
        scanf("%d%c", &eqn[j], &temp);
        j++; 
    } while(temp != '\n');

    //'j' now has the number of elements entered

    //sorting elements in the array
    for(int i=0; i<j-1; i++){
        for(int k=i+1; k<j; k++){

            if(eqn[k]<eqn[i]){
                int swap = eqn[i];
                eqn[i] = eqn[k];
                eqn[k] = swap;
            }
        }
    }

    //to print sorted elements with '+' inbetween and end without a '+'
    for(int i=0; i<j; i++){
        if(i==(j-1)){
            printf("%d", eqn[i]);
            break;
        }
        printf("%d+", eqn[i]);
    }
}