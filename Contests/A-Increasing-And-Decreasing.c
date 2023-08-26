#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int testcases = 0; testcases < t; testcases++){
        int x,y,n;
        scanf("%d %d %d", &x, &y, &n);


        int sum = ((n-1)*((n-1)+1))/2;

        if((sum+x) <= y){
            printf("%d ", x);
            for(int i = (n-2); i>=0; i--){
                int diff = (i*(i+1))/2;
                
                printf("%d ", (y-diff));
            }
        }
        else{
            printf("-1");
        }
        printf("\n");
    }
}