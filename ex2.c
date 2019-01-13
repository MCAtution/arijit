#include<stdio.h>
#include<conio.h>
struct struct
{
  int top;
  int item[10];
}stack;
int isEmpty;
int isFull;
int push;
int pop;
int display();
void main()
{
 stack ss;
 int x;
 ss.top=-1;
 do
 {
  printf("1.PUSH\n");
  printf("2.pop\n");
  printf("3.Dispaly\n");
  printf("4.Exit");
  printf("Enter number?\n");
  scanf("%d",&x);
  switch(x)
  {
  case '1':
               {
                  if(isFull)
                  {

                  }
               }
  }
 }
}
