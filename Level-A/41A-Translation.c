#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    //taking array size of 101 for max 100 elements and 1 '\n' at the end
    char s[101], t[101];
    int j=0;

    scanf("%s", s);
    scanf("%s", t);

    //reversing string 't'
    for (int left = 0, right = strlen(t) - 1; left < right; left++, right--)
    {
        // Swap the characters at the left and right positions
        char temp = t[left];
        t[left] = t[right];
        t[right] = temp;
    }

    //compare if strings are equal, strcmp returns 0(also considered as False) when strings are equal
    if(strcmp(s, t))  printf("NO");
    else    printf("YES");
}