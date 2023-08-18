#include<stdio.h>

int  main(){
    int n, x=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        char inp[4]; //3 characters and 1 element for '\n' at the end of string
        scanf("%s", inp);
        if(inp[0]=='+' || inp[2]=='+')  x++;
        else if(inp[0]=='-' || inp[2]=='-') x--;
    }

    printf("%d", x);
}