1.
#include<stdio.h>
int main()
{
struct student
{
int roll=3;
char name[]="mahi";
};
struct student *s1;
printf("%d ",s1->roll);
printf("%s",s1->name);
return 0;
}

Ans : error compile time
//Intialization of variables is not allowed inside struct.

2.
#include<stdio.h>
int main()
{
struct student
{
int roll;
struct clg
{
char grade;
struct student *p;
};
//line 8
struct clg *q;
};
struct student s;
s.roll = 10;
s.clg.grade = ‘A’;
s.clg.p = NULL;
printf("%d %c ",s.roll, s.clg.grade);
return 0;
}

Ans : Error compile time.
/*In the given question, structure clg is nested within the
student, members of struct clg cannot directly be accessed through the
instance of student, for accessing a member of clg, an instance of clg must
be required. Hence, the compiler will throw an error.
We can overcome this problem by making an instance of clg ("struct clg
c;") at line 8 of a given program.*/

3.
#include<stdio.h>
int main()
{
char q[] = "Hello India",*ptr;
ptr=q;
while(*ptr!=’\0’)
{
++*ptr++; // line 4
}
printf("%s %s",ptr,q);
return 0;
}

Ans : ifmmp!Joejb
/*: We already discussed these kinds of questions, the
expression ++*ptr++ at line 4 gets expanded as ++*ptr; and ptr++; After
the execution of the while loop, each character of a given string will get
incremented by 1. The character ‘H’ becomes ‘I’, ‘e’ becomes ‘f’, blank
space gets converted into ‘!’ and so on as per the ASCII convention*/

4.
#include<stdio.h>
int main()
{
char str[4][20]={"hello", "India", "love", "great"};
int i;
char *temp;
temp=str[2];
str[2]=str[3];
str[3]=temp;
for (i=0;i<4;i++)
printf("%s",str[i]);
return 0;
}

Ans : Error compile time.
/*: We discussed a similar concept in the explanation of
question 57, group 2. 2D array is a collection of 1D arrays, Each string get
stored in the form of a 1D array. The base address of each 1D array cannot
be modified. If we declare given 2D array as *str[4], → char *str[4]=
{"hello", "India", "love", "great"};, the program will give output "hello
India great love"*/

5.
#include<stdio.h>
int main( )
{
int x[2][3][2] = {{{2,4},{7,8},{3,4}},{{2,2},{2,3},
{3,4}}};
printf("%u %u %u %d ",x,*x,**x,***x);
printf("%u %u %u %d \n",x+1,*x+1,**x+1,***x+1);
return 0;
}

Ans : 1000 1000 1000 2 1024 1008 1004 3

6.
#include<stdio.h>
#include<string.h>
int main()
{
int i, len;
char x[] = "India";
len = strlen(x);
*x = x[len];
char *ptr = x;
for(i=0; i<len; ++i)
{
printf("%s ",ptr);
ptr++;
}
return 0;
}

Ans : blank spcae, ndia, dia,ia,a.
  

