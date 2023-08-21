#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i=0;
    scanf("%d", &n);

    //Allocating integer memory of size 'n'.
    int * fren = (int *)malloc(sizeof(int)*n);

    char temp;

    //To read values in one line.
    do{
        scanf("%d%c", &fren[i],&temp);
        i++;
    }while(i<n);

    //To store final sequence of who got gifted by whom.
    int * seq = (int *)malloc(sizeof(int)*n);

    //In fren, "Index of Element" friend gifts to "Element" friend. 
    //Note: Element -> fren[i] and Index of Element -> i

    //Friends are numbered from 1, so index+1 and element-1;
    for(int i =0; i< n; i++){
        seq[fren[i]-1] = i+1;
    }

    //Print final sequence.
    for(int i=0; i<n; i++){
        printf("%d ", seq[i]);  

    }
}