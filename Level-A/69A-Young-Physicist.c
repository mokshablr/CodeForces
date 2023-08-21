#include<stdio.h>

void calc(int j, int val);


int sum_x=0,sum_y=0,sum_z=0;
int main(){
    int n;
    scanf("%d", &n);

    int vals[3];

    for(int i=0; i<n; i++){
        int j=0;
        char temp;
        do{
            scanf("%d%c", &vals[j], &temp);
            calc(j, vals[j]);
            j++;
        } while(temp!='\n');
    }

    if(sum_x || sum_y || sum_z){
        printf("NO");
    }
    else{
        printf("YES");
    }
}

void calc(int j, int val){
    if(j==0){
        sum_x+=val;
    }
    else if(j==1){
        sum_y+=val;

    }
    else{
        sum_z+=val;
    }
}