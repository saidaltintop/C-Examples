#include <stdio.h>
#include <conio.h>
 
void ikizasalsayıyaz();
void yazdır();
int main()
{ 
	yazdır();
    ikizasalsayıyaz();
    getch();
    return 0;
}
void ikizasalsayıyaz()
{
    int i,j,asalsayı_sorgu=0,öncekiasal=0,asal=0,enbüyükikiz;
    for(int u=10;u<=99;u++)// Bu for koşulu ile iki basamakl asal sayıları bulmasını sağladık.
	{ 
		asalsayı_sorgu=1;   // Döngü bir sonraki sayının asal olup olmadığını anlamak için tekrar dönecektir. Bu nedenle asalsayı_sorgu'nun değerini döngünün başında tekrar 1 yapıyoruz.

		for(int o=10; o<u; o++) // Sayi 10'dan başlanarak kendisine kadar olan tüm tamsayılara
						       // sırayla bölünecektir. Tam bölen bir sayıya raslandığında
				               // sayının asal sayı olmadığı anlaşılacak ve bir sonraki
					           // sayıyı denemek için döngü kesilecektir. Bu arada, bu sayının
						       // asal olamadığını anlatmak için asalsayı_sorgu'nun değeri 0 yapılıyor.
		{
			if(u%o == 0) // Tam böleni anlatan if koşulu
			{
				asalsayı_sorgu=0;
				break;
			} 
		}
		if(asalsayı_sorgu == 1 ) // Eğer asalsayı_sorgu=1 olursa bulunan sayıları swap yapmamızı söyleyen if koşulu
		{
			öncekiasal=asal;//işlemlerde bulunan asal sayıları yani u yu swap yapan işlemler
			asal=u;     //
		}		
		if(asal-öncekiasal==2)//Bir asal sayı ile birönceki asal sayıyı karşılaştırıp ikiz olup olmadığını kontrol eden if koşulu
		{	
			enbüyükikiz=asal;//İki asal sayılardan en büyüğünü kendine alan işlem
		}
	}
	printf(" %d  %d",enbüyükikiz-2,enbüyükikiz);
}

void yazdır()
{
	printf("Iki basamakli en buyuk ikiz asallar : ");
}
