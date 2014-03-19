#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
	FILE *dosya;
	int sayac1=0,sayac2=0,sayac3=0;
	char cumle[100];
	char b[20],d[20];
	char a,c;

	printf("\n\nTxt dosyasinin icerigini giriniz: ");
	gets(cumle);
	dosya = fopen("deneme.txt","w");
	fprintf(dosya,"%s",cumle);
	fclose(dosya);

	dosya = fopen("deneme.txt","r+");
	while(fscanf(dosya,"%c",&a) != EOF)
	{
	sayac1++;
	}
	fclose(dosya);

	dosya = fopen("deneme.txt","r+");
	while(fscanf(dosya,"%s ",&b) != EOF)
	{
	sayac2++;
	}
	fclose(dosya);

	dosya = fopen("deneme.txt","r+");
	while(fscanf(dosya,"%s",&d) != EOF)
	{
	for(int i=0 ; i <20 ; i++)
	{
	if(d[i]=='.')
	sayac3++;
	}
	}
	fclose(dosya);
	printf("\n\n Karakter sayisi : %d",sayac1);
	printf("\n\n Kelime sayisi : %d",sayac2);
	printf("\n\n Cumle sayisi : %d",sayac3);
	getch();
}
