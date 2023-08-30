#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    //Allocating memory to store the input integers.
    int * arr = (int *) malloc(sizeof(int) * n);
    char temp;

    //There will be minimum 1 non-decreasing segment, so ctr=1.
    int i=0, ctr=1, max =0;
    do{
        scanf("%d%c", &arr[i], &temp);

        //Check from 1st index element onwards since 0-1th index element doesn't exist.
        if(i > 0 ){

            //Check if cureent index value >= previous index value. This would mean that the value is non-decreasing.
            if( arr[i] >= arr[i-1]){
                ctr++;
            }

            //If the values are not non-decreasing, then check if the 'ctr' value is greater than 'max'. 
            //If yes, then set 'max' to 'ctr' and reset ctr to 1 to continue checking.
            else{
                if(ctr >= max){
                    max = ctr;
                    ctr = 1;
                }
                else{
                    ctr =1;
                }
            }
        }
        i++;
    }while (temp != '\n');

    //Final check in case the last set is non-decreasing.
    if(ctr >= max){
        max = ctr;
    }

    printf("%d", max);
}