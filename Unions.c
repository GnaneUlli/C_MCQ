1.
#include<stdio.h>
union unit{
} obj;
struct student{
} s1;
int main()
{
printf("%d %d",sizeof(obj) , sizeof(s1));
return 0;
}
Ans : 0 0
//The size of empty structure and union is zero.

2.
#include<stdio.h>
union unit {
int i;
char str[10]; //line2
} obj;
int main()
{
obj.i = 0;
printf("%s",obj.str);
obj.str = "hello";//line 5
printf("%s",obj.str);
return 0;
}

Ans : Error compile time 
// Assignment of str is not valid please check onve dumb.

3.
#include<stdio.h>
union {
int i;
char j;
} obj;
int main()
{
obj.j = ‘a’;
printf("%d",sizeof(obj));
return 0;
}

Ans : 4
//Size of any union element will be highest size of an element.So, Here highest will be 4.

4.
#include<stdio.h>
union {
int i;
static char j;
} obj;
int main()
{
obj.i = 65;
printf("%d",sizeof(obj));
return 0;
}

Ans : Error compile time
//Static variables will not be allowed in unions.

5.
#include<stdio.h>
union unit {
int i;
char k;
} ;
int main()
{
union unit obj; obj = {10 , ‘\0’}; //line 1
if(obj.i == 0)
printf("hi");
else
printf("bye");
return 0;
}

Ans : john

