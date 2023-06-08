1
#include<stdio.h>
  
int main()
{
    float a=0.7;
    if(a < 0.7)
        printf("C\n");
    else
        printf("C++\n");
    return 0;
}

Ans : C

/*if(a < 0.7) here a is a float variable and 0.7 is a double constant. 
The float variable a is less than double constant 0.7. Hence the if condition is satisfied and it prints 'C'*/

Ex: #include<stdio.h>
int main()
{
    float a=0.7;
    printf("%.10f %.10f\n",0.7, a);
    return 0;
}
Output:0.7000000000 0.6999999881
  
2.
#include<stdio.h>

int main()
{
    float *p;
    printf("%d\n", sizeof(p));
    return 0;
}

Ans : 2 in 16bit compiler, 4 in 32bit compiler

3.

#include<stdio.h>

#include<math.h>

int main()
{
    printf("%f\n", sqrt(36.0));
    return 0;
}

Ans : 6.000000

4.
