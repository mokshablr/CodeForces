#include<stdio.h>

int main(){
    int n, a, b, passengers=0, max =0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);

        //passengers inside the train exit before new passengers enter. 
        passengers -= a;

        //passengers getting in
        passengers += b;

        //check maximum number of passengers to be on the tram.
        if(passengers > max)    max = passengers;
    }

    printf("%d", max);

}