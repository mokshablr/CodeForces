#include<stdio.h>

int main(){
    int w;
    scanf("%d", &w);

    if (w>2){
        if (w%2 == 0){  //to check if 'w' is even
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    // Else print no when w<2
    else{
        printf("NO");
    }
}