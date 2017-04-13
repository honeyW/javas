#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
  int i,j,k;

  for(i=0;i<4;i++)
 {
    for(j=0;j<3-i;j++)
    {
       printf(" ");
     }
      for(k=0;k<=i;k++)
       {
          printf("#");
        }
     printf("\n");
  }
getch();
}
