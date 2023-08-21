#include<stdio.h>

int main(){
    int n, rooms=0;;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int p,q;
        scanf("%d %d", &p, &q);

        //If vacancy in room >= 2, room can be used for the 2 friends.
        if((q-p) >= 2)  rooms++;
    }
    printf("%d", rooms);
}