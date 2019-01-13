#include<stdio.h>
#include<conio.h>
int ptr=0;
 int i,arr[10];
int insert()
{

 if(ptr==9)
 {
  printf("Array is full");
 }
 else
 {
  for(i=0;i<=9;i++)
  {
   printf("Enter number?");
   scanf("%d",&arr[i]);
   ptr++;
  }
 }
}
int display()
{
 for(i=0;i<=ptr;i++)
  printf("%d",arr[i]);
}
void main()
{
 int a,b=1;
 printf("1.Insert");
 printf("2.Display");
 printf("Enter your choose?");
 scanf("%d",&b);
 switch (1)
 {
 case '1' :
  insert(arr[10]);
 break;
 case '2' :
  display(arr[10]);
 break;
}
return 0;
}
