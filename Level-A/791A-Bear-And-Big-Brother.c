#include<stdio.h>

int main(){
    int a,b,years=0;
    scanf("%d %d", &a, &b);

    while(a<=b){ //loop through until b > a. Increment years until then.
        years++;
        a*=3;
        b*=2;
    }
    printf("%d", years);

}