#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    //iterate k times
    for(int i=0; i<k; i++){

        //check if last digit is 0. n%10 returns the remainder after division by 10(which is the last digit!).
        if(n%10==0){
            n/=10;
        }
        else{
            n-=1;
        }
    }

    printf("%d", n);
}