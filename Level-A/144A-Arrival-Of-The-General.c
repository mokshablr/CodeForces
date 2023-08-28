#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int * a = (int *)malloc(sizeof(int)*n);

    char temp;
    int max=0, min=101, i=0, swaps=0;
    do{
        scanf("%d%c", &a[i], &temp);
        if(max < a[i])  max = a[i];
        if(min > a[i])  min = a[i];
        i++;
    }while(temp != '\n');

    if(a[0] != max){
        for(int j=0; j<i; j++){
            if(a[j] == max){
                swaps+= j;
                break;
            }
        }
    }

    if(a[i-1] != min){
        if(swaps != 0)   swaps-=1;
        for(int j=i-1; j>=0; j--){
            if(a[j] == min){
                swaps+= (i-1)-j;
                break;
            }
        }
    }


    printf("%d", swaps);

}