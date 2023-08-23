#include<stdio.h>
#include<string.h>

int main(){
    //Store string of length 100 + '\n' at max.
    char seq[101];
    scanf("%s", seq);

    //Check if each character is either H,Q or 9. These are the only characters producing output.
    //The '+' only increments, does not produce output.
    for(int i=0; i< strlen(seq); i++){
        if(seq[i]=='H' || seq[i]=='Q' || seq[i]=='9'){
            printf("YES");
            //End program if any output is generated.
            return 0;
        }
    }
    printf("NO");
}