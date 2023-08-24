#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int testcases=0; testcases<t; testcases++){
        int n;
        scanf("%d", &n);
        int * seq = (int *)malloc(sizeof(int)*n);

        int step, sym=1, i=0;
        char temp;
        do{
            scanf("%d%c", &seq[i], &temp);
            i++;
            
        }while(temp != '\n');

        if(seq[0] != n){
            printf("NO");
        }
        else{
            for(int i =1; i<n; i++){
                if((seq[i]-seq[i-1])){
                    printf("NO");
                    sym = 0;
                    break;
                }
            }
            if(sym){
                printf("YES");
            }
        }





    }
}