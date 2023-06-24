1.
  
#include<stdio.h>
int main()
{
char str[] = "India";
const char *ptr;
ptr = str;
ptr++;
//++*ptr;
printf("%s", ptr);
return 0;
}
Ans : ndia

2.
What will be the output if we uncomment the commented line in the
above program?
Ans : Error updating the constant expression is not allowed

3.
#include<stdio.h>
int main()
{
char str[] = "India";
char *const ptr;
ptr = str;
ptr++;
printf("%s", ptr);
return 0;
}
Ans :  Error updating the constant expression is not allowed

4.
#include<stdio.h>
int main()
{
char str[] = "Hello";
const char * const ptr;
ptr = str; //line 3
//ptr++; //line 4
++*ptr; //line 5
printf("%s", ptr);
return 0;
}
Ans : Error at line 3 and 5

5.
What will be the output if we uncomment the commented line in the
above program?
Ans : Error at line 3,4 and 5.

6.
#include<stdio.h>
int main()
{
char str[] = "India";
char *ptr;
ptr = str;
ptr++;
++*ptr;
printf("%s", ptr);
}

Ans : odia

