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
struct a
{
char ch[7];
char *str;
};
struct b
{
char *c;
struct a ssl;
};
struct b s2 = {"Raipur", "Kanpur", "Jaipur"};
printf("%s %s ", s2.c, s2.ssl.str);
printf("%s %s ", ++s2.c, ++s2.ssl.str);
return 0;
}

Ans : Raipur,Jaipur,aipur,aipur

4.
#include<stdio.h>
int main()
{
struct s1
{
char *z;
int i;
struct s1 *p;
};
struct s1 a[] = {{"Nagpur", 1, a+1}, {"Raipur", 2, a+2},
{"Kanpur", 3, a}};
struct s1 *ptr = a;
printf("%s %s %s %s", a[0].z, (*ptr).z, ptr->z, a[2].p-
>z);
return 0;
}

Ans : Nagpur,Nagpur,Nagpur,Nagpur

5.
#include<stdio.h>
int main()
{
struct s1
{
char *z;
int i;
struct s1 *p;
};
struct s1 a[] = {{"Nagpur", 1, a+1}, {"Raipur", 2, a+2},
{"Kanpur", 3, a}};
struct s1 *ptr = a;
printf("%s ", ++(ptr->z));
printf("%s ", a[(++ptr)->i].z);
printf("%s ", a[--(ptr->p->i)].z);
printf("%d ",--a[2].i);
return 0;
}

Ans  :  agpur Kanpur Kanpur 1

6.
Most important questions will be found in tanuj kumar group 7 - 31 to 60 all 30 bits are important about structures 
  

