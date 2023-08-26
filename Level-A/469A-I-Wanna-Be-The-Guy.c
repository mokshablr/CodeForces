#include<stdio.h>
#include<stdlib.h>


int * readLevels(int total);
int * mergeArr(int *a, int *b, int len_a, int len_b);
int * sortArr(int *a, int len_a, int len_b);

int n, start_found = 0, end_found=0;

int main(){
    int len_a, len_b;
    int *a;
    int *b;
    scanf("%d", &n);

    char temp;

    scanf("%d%c", &len_a, &temp);
    if(len_a >0){
        a = readLevels(len_a);
    }

    scanf("%d%c", &len_b, &temp);

    if(len_b > 0){
        b = readLevels(len_b);
    }


    if(start_found && end_found){
        int * mergedArr = mergeArr(a, b, len_a, len_b);
        int * sortedArr = sortArr(mergedArr, len_a, len_b);
        for(int i=0; i<(len_a+len_b)-1; i++){
            if(sortedArr[i] == sortedArr[i+1]){
                continue;
            }
            else if(((sortedArr[i]+1) != (sortedArr[i+1]))){
                printf("Oh, my keyboard!");
                return 0;
            }
        }
        printf("I become the guy.");
    }
    else{
        printf("Oh, my keyboard!");
    }
}


int * readLevels(int total){
    int * arr = (int*) malloc(sizeof(int)*total);
    char temp;
    int j=0;
    do{
        scanf("%d%c", &arr[j], &temp);
        if(arr[j] == n)   end_found=1;
        if(arr[j] == 1)   start_found=1;
        j++;
    }while(temp != '\n');

    return arr;
}

int * mergeArr(int *a, int *b, int len_a, int len_b){
    int * merged = (int *)malloc(sizeof(int)*(len_a+len_b));
    int j=0;
    for(int i=0; i<(len_a); i++){
            merged[j] = a[i];
            j++;
    }
    for(int i=0; i<len_b; i++){
        merged[j] = b[i];
        j++;
    }

    return merged;
}

int * sortArr(int *a,int len_a, int len_b){
    for(int i=0; i<(len_a+len_b)-1; i++){
        for(int j=i; j<(len_a+len_b); j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}