/*
Task

Given a positive integer denoting , do the following:

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.

Input Format

The first line contains a single integer denoting .

Constraints

Output Format

If, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

Sample Input

5

Sample Output

five

Sample Input #01

8

Sample Output #01

eight

Sample Input #02

44

Sample Output #02

Greater than 9

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    
    scanf("%d", &n);

    if (n == 1){

        printf("one");

    } else if(n == 2){

        printf("two");

    }else if(n == 3){

        printf("three");
        
    }else if(n == 4){

        printf("four");

    }else if(n == 5){

        printf("five");

    }else if(n == 6){

        printf("six");
        
    }else if(n == 7){

        printf("seven");

    }else if(n == 8){

        printf("eight");
        
    }else if(n == 9){

        printf("nine");

    } else {

        printf("Greater than 9");

    }

    return 0;
}
