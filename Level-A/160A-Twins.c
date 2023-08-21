#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, sum =0, count=0;
    scanf("%d", &n);

    //if there is only 1 coin, we should take that coin to have a sum > twin.
    if (n == 1)
    {
        count++;
        printf("%d", count);
        return 0;
    }
    
    //allocate 'n' spaces of memory to store coins.
    int *a = (int *)malloc(sizeof(int)*n);

    //read 'n' coins and calculate total sum.
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }

    //sort coins in descending order
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j< n; j++){
            if(a[i]<a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    int mid = n/2;

    //sum from the left end, for us (since it's arranged in descending order, we take the biggest coins first).
    int l_sum=0;

    //sum from right end, for twin.
    int r_sum=sum;

    int i=0;

    //loop  until we and twin have the same aomunt or more!
    while(l_sum<=r_sum){
            l_sum += a[i];
            r_sum = sum -l_sum;
            count++;
            i++;
    }

    printf("%d", count);
}