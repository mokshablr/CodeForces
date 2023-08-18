#include<stdio.h>
#include<stdlib.h>

int main(){
    int matrix[5][5];
    int mi,mj; //row and column value of the element 1

    for(int i=0; i<5; i++){
        char temp;
        int j=0;

        //to read a line of integers
        do { 
            scanf("%d%c", &matrix[i][j], &temp); 
            if(matrix[i][j]==1){
                mi = i;
                mj = j;
            }
            j++; 
        } while(temp != '\n'); 
    }

    int step_i = abs(mi - 2); //number of steps in rows
    int step_j = abs(mj - 2); //number of steps in columns

    int total = step_i + step_j; 

    printf("%d", total);
}