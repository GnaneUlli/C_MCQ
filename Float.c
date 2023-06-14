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
#include<stdio.h>
  
#include<math.h>
  
int main()
{
    printf("%d, %d, %d\n", sizeof(3.14f), sizeof(3.14), sizeof(3.14l));
    return 0;
}

Ans : 4,8,12

/*sizeof(3.14f) here '3.14f' specifies the float data type. Hence size of float is 4 bytes.

sizeof(3.14) here '3.14' specifies the double data type. Hence size of float is 8 bytes.

sizeof(3.14l) here '3.14l' specifies the long double data type. Hence size of float is 10 bytes.*/
  
5.
#include<stdio.h>

  int main()
{
    float f=43.20;
    printf("%e, ", f);
    printf("%f, ", f);
    printf("%g", f);
    return 0;
}

Ans : 4.320000e+01, 43.200001, 43.2

/*Explanation:

printf("%e, ", f); Here '%e' specifies the "Scientific Notation" format. So, it prints the 43.20 as 4.320000e+01.

printf("%f, ", f); Here '%f' specifies the "Decimal Floating Point" format. So, it prints the 43.20 as 43.200001.

printf("%g, ", f); Here '%g' "Use the shorter of %e or %f". So, it prints the 43.20 as 43.2.*/
