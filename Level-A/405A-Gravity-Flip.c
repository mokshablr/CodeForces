#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i=0;
    scanf("%d", &n);

    //Allocating memory for array of int of size 'n' elements.
    int * arr = (int *)malloc(sizeof(int)*n);
    char temp;

    //To read integers in a line.
    do{
        scanf("%d%c", &arr[i], &temp);
        i++;
    }while(temp != '\n');

    //Basic bubble sorting algorithm. When gravity changes, the blocks are arranged in ascending order.
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    //Print final arrangement.
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}