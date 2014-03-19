#include<stdio.h>
#include<conio.h>
int toplama(int);

void main()
{
	int toplam,n;
	printf("bir sayi giriniz : ");
	scanf("%d",&n);	
	toplam=toplama(n);
	printf("Sonuc = %d",toplam);
	getch();
}

int toplama(int x)
{
	int toplam1=0;
	for (int i = 1; i <= x; i++)
	{
		toplam1=toplam1+i;
	}
	return toplam1;
}
