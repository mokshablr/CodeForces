//Had to take some help in this question since testcase 9 wasn't working.
//Realised the problem was with the datatypes involved. SO here's the working code!
#include<stdio.h>
#include<stdlib.h>

int main(){
    //To store integer of size 10^12.
    unsigned long int n,k, half, num;
    scanf("%lu %lu", &n, &k);

    //To check how many odd numbers before switching to even numbers.
    //If number of elements is divisible by 2, then half is n/2. Else take the next biggest element.
    if(n%2 == 0)    half = n/2;
    else    half = n/2+1;

    //If the index to be found is greater than the half mark, it'll be an even number, else odd number.
    //If odd, use formula ((index*2)-1). Else use formula ((index)-half)*2.
    //We use (index-half) since the numbers are odd upto half, after which it starts from first even number.
    if(k <= half){
        num = ((k*2)-1);
        printf("%lu", num);
    }
    else{
        num = ((k-half)*2);
        printf("%lu", num);
    }

    return 0;
}