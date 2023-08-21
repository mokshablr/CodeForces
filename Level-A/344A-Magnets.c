#include<stdio.h>
#include<stdlib.h>

int main(){
    //1 group minimum
    int n, groups=1;
    scanf("%d", &n);

    //Allocating memory to store value of magnets.
    int * mags = (int *)malloc(sizeof(int)*n);

    //Read value of magnets.
    for(int i=0; i<n; i++){
        scanf("%d", &mags[i]);
    }

    //If value of magnet[i] is the same as magnet[i+1], then they are of different orientations and thus forms a different group.
    //Eg: "10" and "10" are same orientation so they attract(0 attracts 1). "10" and "01" are different orientations and thus repel/create new group. (0 repels 0)
    for(int i=0; i<n-1; i++){
        if(mags[i] != mags[i+1]){
            groups++;
        }
    }
    
    printf("%d", groups);
}