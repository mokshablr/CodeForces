//NOT COMPLETED.




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
            // if(i == 1){
            //     first_step = seq[i-1] - seq[i];
            // }
            
            // else if(seq[i-1] - seq[i] != step){
            //     printf("NO");
            //     break;
            // }
            
        }while(temp != '\n');

        step = seq[1] - seq[0];
        for(int i =2; i<n; i++){
            if((seq[i]-seq[i-1]) != step){
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