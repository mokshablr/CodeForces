#include<stdio.h>
#include<stdlib.h>

int * mergeArr(int *a, int *b, int len_a, int len_b);
int * sortArr(int *a, int len_a, int len_b);

int main(){
    int n,levels, len_a, len_b, found=0;
    int *a;
    int *b;
    scanf("%d", &n);


    char temp;
    int j=0;
    scanf("%d%c", &len_a, &temp);
    a = (int*) malloc(sizeof(int)*len_a);
    do{
        scanf("%d%c", &a[j], &temp);
        if(a[j] == n)   found=1;
        j++;
    }while(temp != '\n');

    for(int i=0; i<len_a; i++){
        printf("%d-", a[i]);
    }

    int bla;
    // scanf("%d%c", &bla, &temp);
    // scanf("%d%c", &bla, &temp);
    // printf("%d out!", bla);

    j=0;
    scanf("%d%c", &len_b, &temp);
    printf("hey");
    scanf("%d%c", &bla, &temp);
    printf("%d out!", len_b);
    b = (int*) malloc(sizeof(int)*len_b);
    do{
        scanf("%d%c", &b[j], &temp);
        if(b[j] == n)   found=1;
        j++;
    }while(temp != '\n');


    int * mergedArr = mergeArr(a, b, len_a, len_b);
    int * sortedArr = sortArr(mergedArr, len_a, len_b);

    for(int i=0; i<(len_a+len_b)-1; i++){
        if(sortedArr[i] != (sortedArr[i+1]-1)){
            printf("Oh, my keyboard!");
            return 0;
        }
    }

    printf("I become the guy.");

}

int * mergeArr(int *a, int *b, int len_a, int len_b){
    printf("merging!");
    int * merged = (int *)malloc(sizeof(int)*(len_a+len_b));
    int j=0;
    for(int i=0; i<((len_a+len_b)); i++){
        if(i<len_a){
            merged[j] = a[i];
            j++;
        }
        else{
            merged[j] = b[i-j];
            j++;
        }
    }

    return merged;
}

int * sortArr(int *a,int len_a, int len_b){
    printf("sorting!");
    for(int i=0; i<(len_a+len_b)-1; i++){
        for(int j=i; i<(len_a+len_b); j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
    
}