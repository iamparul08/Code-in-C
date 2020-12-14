//call by value

#include<stdio.h>
#include<conio.h>

void swap(int,int);	//prototype
void main()
{
 int a=10,b=20;
 printf("\nValues of a and b before swapping = %d and %d",a,b);
 swap(a,b); 		//calling
 printf("\nValues of a and b after swapping = %d and %d",a,b);
 getch();
}
void swap(int a,int b)      //definition
{
 int c;
 c=a;
 a=b;
 b=c;
 printf("\nValues of a and b inside function definition = %d and %d",a,b);
}