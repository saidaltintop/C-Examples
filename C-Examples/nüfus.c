#include<stdio.h>
#include<conio.h>
#include <Windows.h>

void nüfus();

int main()
{
	nüfus();
	return 0;
}

void nüfus()
{
	double A_ülkesininüfusu,B_ülkesininnüfusu,sene;
	A_ülkesininüfusu=10000000;
	B_ülkesininnüfusu=40000000;
	sene=0;
		for(;;)// Sonsuz for döngüsü
	{
		if (A_ülkesininüfusu>B_ülkesininnüfusu)// A ülkesinin nüfusunun B ülkesinin nüfusunu geçme koşulu,koşul sağlarsa döngüden çık.
		{
			break;
		} 
		else
		{
			A_ülkesininüfusu=A_ülkesininüfusu*1.25;//döngüde her A_ülkesininüfusu değişkenine %25 ini ekliyor
	    	B_ülkesininnüfusu=B_ülkesininnüfusu*1.12;//döngüde her B_ülkesininüfusu değişkenine %12 ini ekliyor
			sene++;//her bir döngü işleminde sene sayacını artırıyor.
		}
	}

	printf("\n\n\n\t\t\t\t%d yilda gecer.\n\n\n",sene);

	system("pause");
	
}
