/*
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and
returns the greatest of them.

Input Format

Input will contain four integers -  , one in each line.

Output Format

Print the greatest of the four integers. 

PS: I/O will be automatically handled.

Sample Input
3
4
6
5

Sample Output

6 
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){

    int maior = 0;

    if(a > b && a > c && a > d){

        maior = a;

    } else if (b > a && b > c && b > d){

        maior = b;

    } else if (c > a && c > b && c > d){

        maior = c;

    } else if (d > a && d > b && d > c){

        maior = d;

    } else if ( a == b && b == c && c == d){

        maior = a;

    }

    return maior;

}

 int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
