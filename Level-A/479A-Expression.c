#include<stdio.h>

int main(){
    int num[3];
    for(int i=0; i<3; i++){
        scanf("%d", &num[i]);
    }

    int eqn;
    int group=0;

    for(int i=0; i<3; i++){
        if(i == 0){
            if(num[i] == 1){
                group += num[i]+ num[i+1];
                eqn = 1;
                i++;
            }
            else{
                eqn = num[i];
            }
            continue;
        }

        if(num[i] == 1){
            group += num[i]+ num[i+1];
            i++;
        }
        else{
            eqn = (eqn * num[i]) + group;
            group = 0;
        }
    }
    if(group != 0){
        eqn*=group;
    }

    printf("%d", eqn);
}