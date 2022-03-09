/*Weite a program to enter two 3*3 matrix & print multiplication of it.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for element b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	clrscr();
	printf("Matrix a is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix b is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplication  of two matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
