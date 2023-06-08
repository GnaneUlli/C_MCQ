1.

#include<stdio.h>

#define SWAP(a, b, c)(c t; t=a, a=b, b=t)
  
int main()
  
{
    int x=10, y=20;
    SWAP(x, y, int);
    printf("%d %d\n", x, y);
    return 0;
}

Ans: Not compile

//The code won't compile since declaration of t cannot occur within parenthesis.

2.

#include<stdio.h>
#define MAN(x, y) ((x)>(y)) ? (x):(y);

int main()
{
    int i=10, j=5, k=0;
    k = MAN(++i, j++);
    printf("%d, %d, %d\n", i, j, k);
    return 0;
}
Ans : 12, 6, 12
  
/*The macro MAN(x, y) ((x)>(y)) ? (x):(y); returns the biggest number of given two numbers.

Step 1: int i=10, j=5, k=0; The variable i, j, k are declared as an integer type and initialized to value 10, 5, 0 respectively.

Step 2: k = MAN(++i, j++); becomes,

=> k = ((++i)>(j++)) ? (++i):(j++);

=> k = ((11)>(5)) ? (12):(6);

=> k = 12

Step 3: printf("%d, %d, %d\n", i, j, k); It prints the variable i, j, k.

In the above macro step 2 the variable i value is increemented by 2 and variable j value is increemented by 1.

Hence the output of the program is 12, 6, 12 */
