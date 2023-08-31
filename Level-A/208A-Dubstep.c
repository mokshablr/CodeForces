#include<stdio.h>
#include<string.h>

int main(){
    char str[201];
    scanf("%s", str);

    char temp;
    int ini =0, i=0, ctr=0;
    
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i+=2;

            for(int j= i+1; j < strlen(str); j++){
                if(str[j] == 'W' && str[j+1] == 'U' && str[j+2] == 'B'){
                    j+=2;
                    i+=3;
                    continue;
                }
                else{
                    break;
                }
            }
            if(ini != 0){
                printf(" ");
            }
            else{
                ini = 1;
            }
        }
        else{
            printf("%c", str[i]);
            if(ini == 0){
                ini = 1;
            }
        }
    }
}