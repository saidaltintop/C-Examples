#include<stdio.h>
#include<conio.h>

void fibonacci(int);

void main()
{
	int k;
	printf("Bir sayi giriniz : ");
	scanf("%d",&k);
	fibonacci(k);
	getch();
}

void fibonacci(int x)
{
	int a,b,c;
	a=1;
	b=1;

	for (int i = 0; i < x; i++)
	{
		if(i==0 || i==1)
		{
			printf("\n%d\n\n",a);
		}
		else
		{
			c=a+b;
			a=b;
			b=c;
			printf("\n%d\n\n",c);
		}

	}

}
