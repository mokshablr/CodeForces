#include<stdio.h>

int main(){
    int n, petya, vasya, tonya, ctr=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if((petya+vasya+tonya) >= 2)  ctr++;
    }

    printf("%d", ctr);
}