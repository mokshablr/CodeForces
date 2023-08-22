#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    double sum;
    int vol;
    char temp;

    //Calculate sum of total percentages given to find average later.
    do{
        scanf("%d%c", &vol, &temp);
        sum+=vol;
    }while (temp!='\n');

    //Average of all the percentages.
    printf("%f", sum/n);
}