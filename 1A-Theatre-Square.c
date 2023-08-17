#include <stdio.h>
#include<math.h>

int main(){
    int n, m, a;
    double num_n, num_m;
    
    scanf("%d %d %d", &n, &m, &a);

    num_n= (double)n/(double)a;
    num_m = (double)m/(double)a;

    printf("%.0f", (ceil(num_m) * ceil(num_n)));
}