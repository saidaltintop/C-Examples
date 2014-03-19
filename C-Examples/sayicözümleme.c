#include <stdio.h> // Temel giriş-çıkış (printf-scanf) elemanlarını kullanmamızı sağlayan kütüphane
#include <conio.h> // Bu kütüphaneyi getch(); kodu için ekledik

 
void main() // Ana giriş fonksiyonu
{
        int a,b,c,d,binler,yuzler,onlar,birler; // değişkenlerimiz

        printf("Cozumlenecek 4 basamakli sayiyi giriniz:  "); // 4 basamaklı bir sayı girmemiz isteniyor
        scanf("%d", &a); // Girilen değer a değişkeni üzerine yazılıyor
        printf("\nGirilen sayi %d", a); // Girilen sayıyı ekranda gösterir.

        if (a<1000 || a>9999) // a sayısının 4 basamaklı olup olmadığını kontrol eden koşul
        {
                printf("\n4 basamakli bir sayi degil\a");
        }
        
        else // eğer sayı 4 basamaklı ise
        {  
                binler=a/1000; //
                b=a%1000;           //
                yuzler=b/100;  //
                c=b%100;           //  ÇÖZÜMLEME İŞLEMLERİ
                onlar=c/10;    //
                d=c%10;        // 
                birler=d;      //

                printf("\n\nBinler=%d\n", binler); //
                printf("Yuzler=%d\n", yuzler); // ÇÖZÜMLEME İŞLEMLERİNİ EKRANA YAZDIRAN FONKSİYONLAR
                printf("Onlar=%d\n", onlar);   //
                printf("Birler=%d\n", birler); //

        
        
        
        } 
        getch(); // Bazı derleyicilerde ayarlar farklı olduğu için kapanabilme ihtimaline karşı eklenmiştir
}
