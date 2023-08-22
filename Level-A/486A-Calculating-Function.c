//Since the time limit is 1 second, we cannot use brute force.
//When there are even number of elements, number of odd and even elements are equal(n/2).
//When there are odd number of elements, number of odd elements are 1 + number of even elements.

//Formula for sum of 'n' even numbers = n*(n+1)
//Formula for sum of 'n' odd numbers = n^2


#include<stdio.h>

int main(){
    //since max size is 10^15 we use unsigned long long int
    unsigned long long int n;
    scanf("%lld", &n);

    unsigned long long int even_sum, odd_sum;

    if(n%2 == 0){
        even_sum = (n/2)*((n/2)+1);
        odd_sum = -((n/2)*(n/2));
    }
    else{
        even_sum = (n/2)*((n/2)+1);
        odd_sum = -(((n/2)+1)*((n/2)+1));
    }

    printf("%lld", even_sum+odd_sum);
}