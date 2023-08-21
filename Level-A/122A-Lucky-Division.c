#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
    int n;
    scanf("%d", &n);

    //first lucky number is 4. 
    char denom[4] = "004";

    if(n%(atoi(denom)) == 0){
            printf("YES");
            return 0;
    }

    //Using the approach of making a truth table for 1 bit, 2 bit and 3 bit binary. Taking '4' and '7' like the '0' and '1' of binary.
    //Eg: (0, 1, 00, 01, 10, 11, 000, 001, 010, 100, 101, 110, 111) is how it would look in binary. Set 0 -> 4 and 1 -> 7
    //Loop until lucky number is '777'(maximum lucky number within 1000) and the lucky number is less than or equal to the input number.
    while((strcmp(denom, "777"))!=0 && atoi(denom)<=n){

        //if the first and 2nd digit is 0, check if last digit is 4, then change it to 7. Else make the 2nd digit 4 and the last digit 4.
        if(denom[0] == '0' && denom[1]=='0'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
                denom[1] = '4';
            }
        }

        //if the first and 2nd digit is 0 and 4, check if last digit is 4, then change it to 7. Else make the 2nd digit 7 and the last digit 4.
        else if(denom[0] == '0' && denom[1] == '4'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
                denom[1] = '7';
            }
        }

        //if the first and 2nd digit is 0 and 7, check if last digit is 4, then change it to 7. Else make all the digits 4.
        else if(denom[0] == '0' && denom[1] == '7'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
                denom[1] = '4';
                denom[0] = '4';
            }
        }

        //if the first and 2nd digit is 4, check if last digit is 4, then change it to 7. Else make the 2nd digit 7 and the last digit 4.
        else if(denom[0] == '4' && denom[1] == '4'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
                denom[1] = '7';
            }
        }

        //if the first and 2nd digit is 4 and 7, check if last digit is 4, then change it to 7. Else make the 1st digit 7 and the 2nd and 3rd digit 4.
        else if(denom[0] == '4' && denom[1] == '7'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
                denom[1] = '4';
                denom[0] = '7';
            }
        }

        //if the first and 2nd digit is 7 and 4, check if last digit is 4, then change it to 7. Else make the 2nd digit 7 and the last digit 4.
        else if(denom[0] == '7' && denom[1] == '4'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
                denom[1] = '7';
            }
        }

        //if the first and 2nd digit is 7, check if last digit is 4, then change it to 7. Else make the last digit 4.
        else if(denom[0] == '7' && denom[1] == '7'){
            if(denom[2] == '4'){
                denom[2] = '7';
            }
            else{
                denom[2] = '4';
            }
        }

        //check if the number divided by the current lucky number is 0. 
        if(n%(atoi(denom)) == 0){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}