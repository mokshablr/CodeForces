#include <stdio.h>
#include<math.h>

int main(){
    int n, m, a;
    double num_n, num_m;
    
    scanf("%d %d %d", &n, &m, &a);

    num_n= (double)n/(double)a; //typecast to double not float since the testcases get pretty big.
    num_m = (double)m/(double)a;

    printf("%.0f", (ceil(num_m) * ceil(num_n))); //%.0f to have no decimal value printed 
    //ceil() to round to the next biggest integer
}