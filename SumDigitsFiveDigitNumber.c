#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, dezMil, mil, cent, dez, uni, sum = 0;
    scanf("%d", &n);
    
    dezMil = n/10000;
    mil = (n/1000)%10;
    cent = (n/100)%10;
    dez = (n/10)%10;
    uni = (n%10);

    sum = dezMil + mil + cent + dez + uni;

    printf("%d", sum);

    return 0;
}
