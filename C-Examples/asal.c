#include <stdio.h>
#include <conio.h>
 
void asalsayıyaz(int,int);
int main()
{ 
    int bas,son;
    printf("Baslangic Degeri:");
    scanf("%d", &bas);
    printf("Bitis Degeri:");
    scanf("%d", &son);
    if(bas>son)
        printf("\nBaslangic Degeri Bitis Degerinden Buyuk Olamaz");
    else
    {
    printf("\n\nAsal Sayilar:\n");
    asalsayıyaz(bas,son);
    }
    getch();
    return 0;
}
void asalsayıyaz(int x,int y)
{
    int i,j,asalsayı_sorgu=0,k=0;
    for(i=x;i<=y;i++)
    {
		asalsayı_sorgu=0;
        for(j=1;j<i;j++)
        {
            if(i % j == 0)
                asalsayı_sorgu++;
        }                   
        if(asalsayı_sorgu==1)
		{
            printf("%d\n",i);
			k++;
		}
        
    }
    printf("-------------------------------");
	printf("\n\nAralikta %d tane sayi var",k);
}
