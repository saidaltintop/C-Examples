#include<stdio.h>
#include<conio.h>
#include<Windows.h>


void ebobekok(int, int);

int main()
{
	int sayi1,sayi2;
	printf("iki sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
	ebobekok(sayi1,sayi2);
	return 0;
}

void ebobekok(int x,int y)
{
	int k;
for(int i=1;  i<(x*y)+1; i++)
	{
		if(i%x==0 && i%y==0)
		{
			printf("okekimiz : %d",i);
			break;
		}
	}
	if (x>y)
	{
		k=x;
	}
	else 
		k=y;
	for(k; k>0; k--)
	{
		if(x%k==0 && y%k==0)
		{
			printf("\nebobumuz : %d \n",k);
			break;
		}
	}
	system("pause");
}
