/*Vowel or consonent*/

#include<stdio.h>
#include<conio.h>

void main() {
 char ch;
 printf("Enter any character: ");
 ch=getchar();

 switch(ch)
 {
 case 'a':printf("Given character is vowel.");
 break;
 case 'e':printf("Given charater is vowel.");
 break;
 case 'i':printf("Given charater is vowel.");
 break;
 case 'o':printf("Given charater is vowel.");
 break;
 case 'u':printf("Given charater is vowel.");
 break;
 default:printf("Given character is consonent.");
 }
 getch();
}