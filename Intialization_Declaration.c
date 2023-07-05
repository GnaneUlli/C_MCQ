1.
#include<stdio.h>
#include<string.h>
int main()
{
int i = 0;
char c[] = "hello";
char d[] = "India";
char b[] = i ? c : d ; //line 3
printf("%s",b);
return 0;
}
Ans : Error compile time 
//Declaration of str is wrong type

2.
#include<stdio.h>
#include<string.h>
int main()
{
int i = 0;
char c[] = "hello";
char d[] = "India";
char *b = i ? c : d ; //line 3
printf("%s",b);
return 0;
}

Ans  : India 
//In this pointer declaration is correct of str type 

3.
#include<stdio.h>
int main()
{
int x = 010 , y = 0x10 , z = 10;
printf("%d %d %d",x,y,z);
return 0;
}

Ans : 8, 16, 10.
//Three variables are in 3 different forms one is octal, second one is hexa and 3rd one is decimal 
// so their conversion is the output

4.
#include<stdio.h>
int x = 2;
#if Y == 2 //line 3
x = 5; //line 4
#else
x = 6; //line 6
#endif
int main()
{
printf("%d",x);
return 0;
}

Ans: Error compile time 
// Syntax is correct but we cannot assign a value inside a function
//we can declare it.

5.
#include<stdio.h>
#define fun1 fun2 //line 2
#if x == 1 //line 3
#define fun2 fun3 //line 4
#else //line 5
#define fun2 fun4 //line 6
#endif
int main()
{
int fun1 = 1 , fun2 = 2 , fun3 = 3 , fun4 = 4; //line 10
fun1 = fun2 + fun1;
printf("%d",fun1);
return 0;
}

Ans : Error compile time 

//Here fun1, fun2 replaced with fun4 so multiple declaration of fun4 causes error.

6.
#include<stdio.h>
#define fun1 fun2
#if x == 1
#define fun2 fun3
#else
#define fun2 fun4
#endif
int main()
{
int fun3 = 3 , fun4 = 4;
fun1 = fun2 + fun1;
printf("%d",fun1);
return 0;
}

Ans : 8
//Normal problem.
