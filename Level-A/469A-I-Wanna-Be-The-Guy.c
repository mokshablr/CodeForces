#include<stdio.h>
#include<stdlib.h>

//Function to read the levels that can be solved by a person, takes number of levels the person can solve as a parameter.
int * readLevels(int total);

//Function to merge together the levels both the players can complete.
int * mergeArr(int *a, int *b, int len_a, int len_b);

//Function to sort a given array in ascending order.
int * sortArr(int *a, int len_a, int len_b);

//Global variables to store the total number of levels, boolean to check if the starting level(1) is found and if the ending level(n) is found.
int n, start_found = 0, end_found=0;

int main(){
    int len_a, len_b;
    int *a;
    int *b;

    //Read total number of levels in the game.
    scanf("%d", &n);

    //Dummy var to store the spaces inbetween a line of input integers and to check end of line with '\n'.
    char temp;

    //Read number of levels 'A' can do.
    scanf("%d%c", &len_a, &temp);

    //If 'A' can do more than 0 levels, read the levels they can do.
    if(len_a >0){
        a = readLevels(len_a);
    }

    //Read number of levels 'B' can do.
    scanf("%d%c", &len_b, &temp);

    //If 'B' can do more than 0 levels, read the levels they can do.
    if(len_b > 0){
        b = readLevels(len_b);
    }

    //If the start and end Levels are found, merge both A and B arrays and sort them in ascending order.
    if(start_found && end_found){
        int * mergedArr = mergeArr(a, b, len_a, len_b);
        int * sortedArr = sortArr(mergedArr, len_a, len_b);

        //To check if all the levels required to complete the game are in the merged/sorted array.
        for(int i=0; i<(len_a+len_b)-1; i++){

            //If the current variable and the next one are the same, continue checking 
            if(sortedArr[i] == sortedArr[i+1]){
                continue;
            }

            //Check if the next element is not (1+(current element)), 
            //This would mean that a level required to complete the game is missing. NOTE: The elements are sorted in ascending order.
            else if(((sortedArr[i]+1) != (sortedArr[i+1]))){
                printf("Oh, my keyboard!");

                //If a level is missing, end the program after printing the required statement.
                return 0;
            }
        }

        //If the program didnt terminate upto this point, all the levels are completed and the game can be completed.
        printf("I become the guy.");
    }

    //If the start and the end levels are not found, print the required statement.
    else{
        printf("Oh, my keyboard!");
    }
}


int * readLevels(int total){

    //allocating memory of given total size.
    int * arr = (int*) malloc(sizeof(int)*total);
    char temp;
    int j=0;
    do{
        //Read levels in a line.
        scanf("%d%c", &arr[j], &temp);

        //Check if start and end levels are found.
        if(arr[j] == n)   end_found=1;
        if(arr[j] == 1)   start_found=1;
        j++;
    }while(temp != '\n');

    return arr;
}

int * mergeArr(int *a, int *b, int len_a, int len_b){

    //Allocating memory of total size equal to size of both 'A' and 'B'.
    int * merged = (int *)malloc(sizeof(int)*(len_a+len_b));

    //Iterable to store current index of merged.
    int j=0;

    //Store levels of A in the beginning into the new array.
    for(int i=0; i<(len_a); i++){
            merged[j] = a[i];
            j++;
    }

    //Store levels of B after reading A.
    for(int i=0; i<len_b; i++){
        merged[j] = b[i];
        j++;
    }

    return merged;
}

int * sortArr(int *a,int len_a, int len_b){

    //Basic bubble sorting algorithm.
    for(int i=0; i<(len_a+len_b)-1; i++){
        for(int j=i; j<(len_a+len_b); j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}