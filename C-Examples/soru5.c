#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void main()
{
	char cümle[100];
	char kısaltma[10];
	int k=1;
	int x;
	for(;;)
	{
		printf("\n\nCumleyi giriniz : ");
		gets_s(cümle);
		kısaltma[0]=toupper(cümle[0]);
		x=strlen(cümle);
		for (int i = 1; i < x; i++)
		{
			if (cümle[i]==' ')
			{   
				kısaltma[k]=toupper(cümle[i+1]);
				k++;
			}
		}
		for (int i = 0; i < k; i++)
		{
			if (kısaltma[i] != ' ')
			{
				printf("%c",kısaltma[i]);
			}

		}
		for (int i = 0; i < 10; i++)
		{
			kısaltma[i]=' ';
		}
		Sleep(1500);
	}
	_getch();
}
