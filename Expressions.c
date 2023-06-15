1.
#include<stdio.h>
    
int main()
{
    int i=-3, j=2, k=0, m;
    m = ++i && ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
    return 0;
}

Ans : -2, 3, 1, 1
/*Step 1: int i=-3, j=2, k=0, m; here variable i, j, k, m are declared as an integer type and variable i, j, k are initialized to -3, 2, 0 respectively.

Step 2: m = ++i && ++j && ++k;
becomes m = -2 && 3 && 1;
becomes m = TRUE && TRUE; Hence this statement becomes TRUE. So it returns '1'(one). Hence m=1.

Step 3: printf("%d, %d, %d, %d\n", i, j, k, m); In the previous step the value of i,j,k are increemented by '1'(one).

Hence the output is "-2, 3, 1, 1". */
  
2.
  
#include<stdio.h>

int main()
{
    printf("%x\n", -2<<2);
    return 0;
}

Ans : fff8

/*The integer value 2 is represented as 00000000 00000010 in binary system.

Negative numbers are represented in 2's complement method.

1's complement of 00000000 00000010 is 11111111 11111101 (Change all 0s to 1 and 1s to 0).

2's complement of 00000000 00000010 is 11111111 11111110 (Add 1 to 1's complement to obtain the 2's complement value).

Therefore, in binary we represent -2 as: 11111111 11111110.

After left shifting it by 2 bits we obtain: 11111111 11111000, and it is equal to "fff8" in hexadecimal system.*/

3.

#include<stdio.h>
int main()
{
    int i=-3, j=2, k=0, m;
    m = ++i || ++j && ++k;
    printf("%d, %d, %d, %d\n", i, j, k, m);
    return 0;
}

Ans : -2, 2, 0, 1
  
/*Step 1: int i=-3, j=2, k=0, m; here variable i, j, k, m are declared as an integer type and variable i, j, k are initialized to -3, 2, 0 respectively.

Step 2: m = ++i || ++j && ++k; here (++j && ++k;) this code will not get executed because ++i has non-zero value.
becomes m = -2 || ++j && ++k;
becomes m = TRUE || ++j && ++k; Hence this statement becomes TRUE. So it returns '1'(one). Hence m=1.

Step 3: printf("%d, %d, %d, %d\n", i, j, k, m); In the previous step the value of variable 'i' only increemented by '1'(one). The variable j,k are not increemented.

Hence the output is "-2, 2, 0, 1". */
  
4.
  
Associativity has no role to play unless the precedence of operator is same.
  
Ans : True

5.

In the expression a=b=5 the order of Assignment is NOT decided by Associativity of operators

Ans : False

6.
#include<stdio.h>
int main()
{
if(sizeof(int) > -5) //line 1
printf("True\n");
else
printf("False");
return 0;
}

Ans : False
/*In C, sizeof() operator returns unsigned integer value. At line
1, the unsigned integer and default integer (signed) value is getting
compared. The relational operators only allow comparison between the
same data type on both the left and right-hand sides. So, the standard C
compiler promotes the signed integer to an unsigned integer. The value of
-5 in an unsigned integer is a very large positive number. This makes the if
condition false, else part will execute, and ‘False’ will get printed.*/    
