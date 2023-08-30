#include<stdio.h>

int main(){
    int k,l,m,n,d, dragons=0;
    
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);

    //If the current index is a multiple of the above mentioned positions, then increment the dragon counter.
    for(int i=0; i< d; i++){
        if((i+1)%k == 0)    dragons++;
        else if((i+1)%l == 0)    dragons++;
        else if((i+1)%m == 0)    dragons++;
        else if((i+1)%n == 0)    dragons++;
    }
    printf("%d", dragons);   
}