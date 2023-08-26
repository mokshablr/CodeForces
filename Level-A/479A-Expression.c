#include<stdio.h>

int main(){
    int a,b,c, s1,s2,s3,s4;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //Check all possible combiations.
    //Since we want to find maximum value, no need to check with '-' or '/'.
    s1 = a*b*c;
    s2 = a*(b+c);
    s3 = (a+b)*c;
    s4 = a+b+c;

    if(s1>s2&&s1>s3&&s1>s4){
        printf("%d",s1);
    }

    else if(s2>s3&&s2>s4){
        printf("%d",s2);
    }

    else if(s3>s4){
        printf("%d",s3);
    }

    else{
        printf("%d",s4);
    }
}