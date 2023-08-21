#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,t;
    scanf("%d %d", &n, &t);

    //allocating memory for string of number of students
    char * seq = (char *)malloc(sizeof(char)*n);
    scanf("%s", seq);

    //loop for number of seconds
    for(int i=0; i<t; i++){
        
        //loop to check sequence of students at each second
        for(int j =0; j<n; j++){

            //if current index is a boy with the next index as a girl, swap them.
            if(seq[j]=='B' && seq[j+1]=='G'){
                char temp = seq[j];
                seq[j] = seq[j+1];
                seq[j+1] = temp;

                //since the boy only moves behinid 1 girl in 1 second, we can skip the next index since it will be a boy again.
                j++;
            }
        }
    }
    printf("%s", seq);
}