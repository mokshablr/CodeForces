#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    char temp;
    scanf("%d", &t);

    for(int testcases=0; testcases<t; testcases++){
        int n;
        scanf("%d", &n);

        int* b = (int *)malloc(sizeof(int) * n);

        int i=0;
        do{
            scanf("%d%c", &b[i], &temp);
            i++;
        }while(temp != '\n');

        int * seq = (int *)malloc(sizeof(int)*n*2);

        seq[0] = b[0];
        i=1;

        for(int j=1; j< n; j++){
            seq[i] = b[j]-1;
            i++;
            seq[i] = b[j];
            i++;
        }
        printf("%d\n", i);
        for(int j=0; j<i; j++){
            printf("%d ", seq[j]);
        }
        printf("\n");
    }
}