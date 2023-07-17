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

7.
(i) int a[10][10];
(ii) int *b[10];
Which of the following assignment operation is/are invalid?
(a) a[5][6] = 10;
(b) a[5] = 1000;
(c) b[5][6] = 10;
(d) b[5] = 1000;

Ans  : b

8.
#include<stdio.h>
int main()
{
int x=5;
printf("%d %d %d\n",x,x = x<<2,x = x>>2);
return 0;
}

Ans : compiler dependent
//Once check the assignment rule of variable for correct answer.

9.
The main difference between the while(1); declaration and while(1){} you find out.

10.
#include<stdio.h>
int fun1();
int fun2();
int main()
{
int p = fun1() + fun2();
printf("%d",p);
return 0;
}
#include <stdio.h>
int fun1()
{
return printf("hello");
}
int fun2() {
return printf("world");
}

Ans : helloworld10.
//When you return the function you are returning with printf() value , if you print printf inside a printf it gives the elemnts size.

11.
