#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
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
