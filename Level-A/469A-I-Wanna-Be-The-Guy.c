#include<stdio.h>
#include<stdlib.h>

int * mergeArr(int *a, int *b, int len_a, int len_b);
int * sortArr(int *a, int len_a, int len_b);

int main(){
    int n, len_a, len_b, start_found = 0, end_found=0;
    int *a;
    int *b;
    scanf("%d", &n);

    char temp;
    int j=0;

    scanf("%d%c", &len_a, &temp);
    if(len_a >0){
        a = (int*) malloc(sizeof(int)*len_a);
        do{
            scanf("%d%c", &a[j], &temp);
            if(a[j] == n)   end_found=1;
            if(a[j] == 1)   start_found=1;
            j++;
        }while(temp != '\n');
    }
    

    j=0;
    scanf("%d%c", &len_b, &temp);

    if(len_b > 0){
        b = (int*) malloc(sizeof(int)*len_b);
        do{
            scanf("%d%c", &b[j], &temp);
            if(b[j] == n)   end_found=1;
            if(b[j] == 1)   start_found=1;

            j++;
        }while(temp != '\n');
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