//wap to take an array and print only that value which are repeated
//eg input- 1,2,1,2,5
//output- 1,2
//please help to solve
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n=-1;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=++i;j<5;j++)
		{
		if(a[i]==a[j])
		{
			
			 n=a[j];
		     
		   printf("%d",n);
		 
		 }
		
		}
		
	}
	
	getch();
}
