#include<stdio.h>
#include<stdbool.h>

int main(){
    int year;
    scanf("%d", &year);
    year++;

    char copy[5];
    int notFound=1;

    for(int i =0; i<3; i++){
        for(int j=i+1; j<=4; j++){
            sprintf(copy, "%d", year);
            while(copy[i] == copy[j]){
                year++;
                sprintf(copy, "%d", year);
                i=-1;
            }
        }
    }
    printf("%d", year);

}