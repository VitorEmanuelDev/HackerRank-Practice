#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    
int aa = *a, bb = *b;
*a = aa + bb;
*b = abs(bb - aa);

}

int main() {
    
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
    
}
