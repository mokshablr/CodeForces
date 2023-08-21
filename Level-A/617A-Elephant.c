#include<stdio.h>

int main(){
    int x, steps=0;
    scanf("%d", &x);

    //loop until distance is 0
    while(x>0){
        //since 5 is the biggest step, use those until the disatnce is less than 5.
        if(x>=5){
            steps++;
            x-=5;
        }
        //if distance less than 5, only 1 step would be required to complete the journey.
        else{
            steps++;
            x=0;
        }
    }

    printf("%d", steps);
}