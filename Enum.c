1.
#include<stdio.h>
int main()
{
enum block{one , two = 5 , three , four = 10, five};
printf("%d %d %d ",one , three, five);
return 0;
}
Ans  : 0,6,11
//just normal indexing of enum data type

2.
What is the output of the following program?
#include<stdio.h>
enum block{one = 1 , two , three = 1};
int main()
{
enum block{one = 2, two , three = 2};
printf("%d %d ",one , two);
return 0;
}

Ans : 2,3
//Always remember that local scope has highest priority than global scope.

3.
#include<stdio.h>
enum block{first = 2.5, second , third = 0.5};
int main()
{
printf("%d ",second);
return 0;
}

Ans  : Error compile time
//Enum can only contain integer type only it throws error with floating point types.

4.
#include<stdio.h>
enum block{one = 1 , two , three = 3};
int main()
{
while(two != 2)
{
printf("Hello");
two++; //line 3
}
return 0;
}

Ans : Error compile time.

//once enum gets intialized we canot  change values but in line 3 we are changing values so it throws error.

5.
We cannot pass an enum to the function as its argument, we
can only pass its element.

Ans : true

6.
#include<stdio.h>
enum block{one = 1 , two = ‘b’ , three = "c" };
int main()
{
printf("%d",one);
printf("%c",two); //line 2
printf("%s",three); //line 3
return 0;
}
Ans  : Error cannot contain string at line 3
//The character will be treated as an integer but string invalid intialization.
