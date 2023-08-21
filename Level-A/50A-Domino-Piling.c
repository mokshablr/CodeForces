#include<stdio.h>

int main(){
    int m,n, rows,col, tot;

    scanf("%d %d", &m, &n);
    tot=(m*n)/2;    //m*n is total number of squares and each domino occupies 2 squares
    
    printf("%d", tot);
}