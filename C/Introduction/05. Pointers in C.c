#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function   
    int sum, diff;
    sum = *a+*b;
    diff = abs(*a-*b);
    printf("%d\n%d", sum, diff);

}

int main() {
    int a, b;
    int *va = &a, *vb = &b;
    
    scanf("%d %d", &a, &b);
    update(va, vb);

    return 0;
}