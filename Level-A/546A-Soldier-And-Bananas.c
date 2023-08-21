#include<stdio.h>

int main(){
    int k,n,w; //k: cost of banana 1, n: soldier amount, w: number of bananas
    int sum = 0;
    scanf("%d %d %d", &k, &n, &w);

    //to calculate total cost of bananas
    for(int i=1; i<=w; i++){
        sum+= k*i;
    }

    //if (sum-n) is less than 0, the soldier need not borrow any money.
    if((sum-n)<0)   printf("0");
    else    printf("%d", sum-n);
}