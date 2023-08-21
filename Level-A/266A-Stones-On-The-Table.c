#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n, ctr=0;
    scanf("%d", &n);

    //allocating memory to save the sequence. 'n' elements of size 'char'
    char *seq = (char *)malloc(sizeof(char)*n);
    scanf("%s", seq);

    for(int i=0; i<n; i++){
        //if current element is the same as next element, one stone must be removed
        if(seq[i]==seq[i+1]){
            ctr++;
        }
    }

    printf("%d", ctr);
}