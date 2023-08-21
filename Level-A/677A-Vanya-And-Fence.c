#include<stdio.h>

int main(){
    int n, h, a, width=0;
    scanf("%d %d", &n, &h);

    char temp;
    
    //read integers in a line
    do{
        scanf("%d%c", &a, &temp);

        //if height of person > height of fence, add 2 spaces
        if(a > h) width+=2;
        else    width++;
    }while(temp != '\n');

    printf("%d", width);
}