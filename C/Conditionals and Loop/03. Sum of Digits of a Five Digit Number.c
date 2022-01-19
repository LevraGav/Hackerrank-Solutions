#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int i, sum = 0;
    for(i = 0; i < 5; i++){
        sum = sum + (n%10); // Taking last digit and add it to sum
        n = n / 10; // removing the last digit from original input 
    }
    printf("%d", sum);
    return 0;
}