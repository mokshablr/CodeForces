#include <stdio.h>

int main() {
    //Read number of testcases.
    int t;
    scanf("%d", &t);

    //Iterate until t=0. Remember to use post-decrement(t--) to use the value before decrementing.
    while (t--) {

        //using long long to store values of size 10^9.
        long long a, b, moves;
        scanf("%lld %lld", &a, &b);

        long long remainder = a % b;


        if(remainder == 0){
            moves = 0;
        }
        else{
            moves = b - remainder;
        }

        printf("%lld\n", moves);
    }

    return 0;
}
