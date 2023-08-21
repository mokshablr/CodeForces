#include<stdio.h>

int main(){
    int n, a_count=0, d_count=0;
    scanf("%d", &n);

    char c;
    for(int i=0; i<=n; i++){
        scanf("%c", &c);
        if(c == 'A')    a_count++;
        else if(c == 'D')   d_count++;
    }

    if(a_count>d_count) printf("Anton");
    else if (a_count<d_count)
    {
        printf("Danik");
    }
    
    else    printf("Friendship");
}