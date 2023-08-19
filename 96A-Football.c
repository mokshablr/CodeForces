#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char pos[101];
    scanf("%s", pos);

    //iterate through string
    for(int i=0; i < strlen(pos); i++){
        int ctr=1;

        //iterate from index 'i' onwards
        for(int j=i+1; j<strlen(pos); j++){
            //check if value at index i is the same as j-loop iterates
            if(pos[i] == pos[j]){
                ctr++;
            }
            else{
                //if it fails, we know that there is no cluster of 7 atleast until 'j'
                i = j-1; //IMPT! Since 'i' will increment in for loop, it is important to set it to j-1
                break;
            }
        }

        if(ctr>=7){
            printf("YES");
            return 0;
        }  
    }
    printf("NO");
}