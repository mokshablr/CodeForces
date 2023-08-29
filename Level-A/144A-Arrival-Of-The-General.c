#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    //Allocating memory to store heights.
    int * a = (int *)malloc(sizeof(int)*n);

    char temp;
    int max=0, min=101, i=0, swaps=0, max_index;

    //Reading a line of integers of heights.
    do{
        scanf("%d%c", &a[i], &temp);

        //Storing the max value and the index of the max element.
        if(max < a[i]){
            max = a[i];
            max_index = i;
        }

        //Storing value of min element.
        if(min > a[i])  min = a[i];
        i++;
    }while(temp != '\n');

    //If the start is not the max value, check swaps to arrange.
    if(a[0] != max){
        for(int j=0; j<i; j++){

            //If the current index value is max, then number of swaps required would be the same as the index it's on.
            if(a[j] == max){
                swaps+= j;
                break;
            }
        }
    }

    //If the end is not the min value, check swaps to arrange.
    if(a[i-1] != min){

        //Traverse backwards to check the closest min element.
        for(int j=i-1; j>=0; j--){
            if(a[j] == min){

                //If the index value is before the middle index (or) if the index of max value is above the index of min value, reduce swap by 1.
                //This is because as the max value is arranged to front, the min value will have moved to the right by 1 space, reducing the number of swaps required by 1.
                // Eg: 10 10 58 31 63 40 76     ->  76 10 10 58 31 63 40    -> 76 10 58 31 63 40 10
                //If we didn't check for the condition, swaps required = 11, but required swaps = 10.
                if((j+1) <= (i/2) || max_index > j){
                    swaps--;
                }

                //Number of swaps would be (last - minimum index).
                swaps+= (i-1)-j;
                break;
            }
        }
    }


    printf("%d", swaps);

}