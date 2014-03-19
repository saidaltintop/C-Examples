#include <stdio.h>
#include <conio.h>
void main()
{
	int a[10];
	int i, j,yedek,s,sayi,adet;
	printf("Kac tane sayi girmek istiyorsunuz? ");
	scanf("%d",&adet);
	for(s=0;s<adet;s++)
	{
		printf("\n\t%d.sayiyi giriniz:",s+1);
		scanf("%d",&a[s]);
	}		
	for (i=0 ; i<adet-1 ; i++)
		for( j = i+1; j<adet ; j++)
			if ( a[i]<a[j] )
			{
				yedek= a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
			printf("Kacinci buyuk sayiyi bulmak istiyorsunuz ?");
			scanf("%d",&sayi);
			for(int p=0 ; p<adet ; p++){
				if(p==(sayi-1))
					printf("\n\n\t\t\t\t%d.buyuk sayi :%d\n\t",sayi, a[p]);
			}

			getch();
}
