#include <stdio.h> //Temel giriş-çıkış fonksiyonlarını kullanmamızı sağlayan kütüphane
#include <stdlib.h> //Dönüşüm sıralama fonksiyonlarını kullanmamızı sağlayan kütüphane
#include <conio.h> //Bu kütüphaneyi getch(); kodu için ekledik.
#include <math.h> // Matematiksel fonksiyonlarını kullanmamızı sağlayan kütüphane
#include <Windows.h> // Bu kütüphaneyi ekrandaki yazıları silmemize yarayan system("CLS"); ve renk katmamızı sağlayan system("color"); kodları için ekledik.

int main() // ana giriş fonksiyonunu int main() olarak tanımladım. Çünkü return 0; fonksiyonunu tanımlamak istedim.
{
   int secim1, secim2,  parola, kullanici, bakiye_111=1000, bakiye_222=1000, havaleedilecekhesap; // Kullanacağımız değişkenler
   int cekme, yatırma, havale; //Yapacağımız işlemlerde kullanacağımız değişkenler
   
    printf("\n\n"); // İki satır alta geçmeyi sağlar.
        system("color 4F"); // Oturum açma menüsüne farklı renk verir
    printf("\t\t\t\t   © TEMELBANK © \n\n");                //
        printf("\t\t\t\t OTURUM ACMA MENUSU\n\n\n\n");  // OTURUM AÇMA MENÜMÜZ
        printf("\t1) Oturum Ac\t\t\t");                 //
        printf("\t\t\t2) Cikis\n\n");                                        //
   
        printf("\n\n\n");
        printf("\t\t\t\tSecim<1-2>: "); // Seçimimiz
        scanf("%d", &secim1); // Yaptığımız seçimi secim1 değişkeni üzerine kaydeden fonksiyon
        system("CLS"); // O anda ekranda ne varsa silen kod
        system("color 4F"); // Oturum açma menüsüne farklı renk verir
        

        if(secim1!=1 && secim1!=2) // Eğer 1 ve 2'den farklı giriş yapıldığında uyarı!!
        {
                printf("Hatalı giriş yaptınız. Lütfen tekrar deneyiniz..\a\n");
                printf("-------------------------------------------------\n\n");
        }
        switch(secim1) //Switch-case koşul kodu. Switch içine yazılan değere göre Caseler (durumlar) belirlenir.
        {
        case 1: // 1 seçilirse yani oturum aç seçeneği seçildiyse
        
                    printf("Lutfen Hesap Bilgilerinizi Giriniz:\n\n"); // Giriş bilgilerimiz istenir
                        printf("Kullanici adi: ");
                        scanf("%d", &kullanici);
                        printf("Parola: ");
                        scanf("%d", &parola);

                        printf("\nBilgiler dogrulaniyor. . .");
                        Sleep(1500); // 1500 milisaniye yazıyı ekranda bekletir 
                        system("CLS"); // O anda ekranda ne varsa silen kod
                        system("color 1A");// Ekranımıza farklı renk verir
                        printf("\n\n"); // İki satır alta geçmeyi sağlar.

                        if((kullanici==111 && parola==12345) || (kullanici==222 && parola==54321)) //2 farklı kullanıcı tanımı için kullanılan koşul
                        {

                                if(kullanici==111) // 100 numaralı kullanıcı seçilirse
                                        printf("\t\t\t\t  HESAP NO: 111\n\n");
                                if(kullanici==222) // 200 numaralı kullanıcı seçilirse
                                        printf("\t\t\t\t  HESAP NO: 222\n\n");

                        printf("\t\t\t\t  ISLEM MENUSU\n\n");  //
                        printf(" 1) Para Yatirma\n\n");                   //
                        printf(" 2) Para Cekme\n\n");                   //
                        printf(" 3) Para Havale\n\n");         //  İŞLEM MENÜMÜZ
                        printf(" 4) Bakiye Goruntuleme\n\n");  //
                        printf(" 5) Oturumu Kapat\n\n");           //
                        printf("\n\n\n\n");                                           //
                        
                
                        printf("\t\t\t\tSecim <1-5> : "); // Seçimimiz
                        scanf("%d", &secim2); // Yaptığımız seçimi secim2 değişkeni üzerine kaydeden fonksiyon
                        }
                        else // Eğer kullanıcı adı ve şifre kombinasyonu yanlış ise programı kapatan koşul
                        {
                                printf("\n\t\tYanlis sifre ve kullanici adi kombinasyonu!!\a ");
                                Sleep(3000);
                                return 0;
                        }
                        if(secim2!=1 && secim2!=2 && secim2!=3 && secim2!=4 && secim2!=5) // 1,2,3,4 ve 5'den farklı seçim yapıldığında uyarı!!
                        {
                                printf("Hatali giris yaptiniz. Lütfen tekrar deneyiniz..\a\n");
                                printf("************************************************\n\n");
                        }

                    


                        
        switch(secim2) //Switch-case koşul kodu. Switch içine yazılan değere göre Caseler (durumlar) belirlenir.
                        {
                        case 1: // para yatırma
                                printf("Yatiracaginiz Para Miktari <TL>: "); 
                                scanf("%d", &yatırma); // Girilen para miktarını yatırma değişkeni üzerine kaydeden fonksiyon
                                        if(kullanici==111) // 111 numaralı kullanıcı seçilirse
                                        {
                                                bakiye_111 = bakiye_111 + yatırma; // Yatırılan para varolan bakiye üzerine aktarılır
                                                printf("\nHesabiniza %d TL yatiriliyor. . .\n", yatırma); // Ne kadar yatıracağımızı ekranda gösterir
                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                printf("\nIsleminiz basariyla gerceklestirildi.\n\n");
                                                printf("Mevcut Bakiye: %d TL.\n\n", bakiye_111); // Yeni bakiyemizi gösterir.
                                        }
                                        if(kullanici==222) // 222 numaralı kullanıcı seçilirse
                                        {
                                                bakiye_222 = bakiye_222 + yatırma; // Yatırılan para varolan bakiye üzerine aktarılır
                                                printf("\nHesabiniza %d TL yatiriliyor. . .\n", yatırma); // Ne kadar yatıracağımızı ekranda gösterir
                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                printf("\nIsleminiz basariyla gerceklestirildi.\n\n");
                                                printf("Mevcut Bakiye: %d TL.\n\n", bakiye_222); // Yeni bakiyemizi gösterir.
                                        }
                                        break;
                        case 2: // para çekme
                                printf("Cekeceginiz Para Miktari <TL>: ");
                                scanf("%d", &cekme); // Girilen para miktarını cekme değişkeni üzerine kaydeden fonksiyon
                                        if(kullanici==111 && cekme<=bakiye_111) // 111 numaralı kullanıcı seçilirse ve çekilecek miktar bakiyenin altında ise
                                        {
                                                bakiye_111=bakiye_111-cekme; // Çekilen para miktarını bakiyeden azaltan fonksiyon
                                                printf("\nHesabinizdan %d TL cekiliyor. . .\n", cekme); // Ne kadar çekeceğimizi ekranda gösterir                                                
                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                printf("\nIsleminiz basariyla gerceklestirildi.\n\n");
                                                printf("Kalan Bakiye: %d TL.\n\n", bakiye_111);  // Yeni bakiyemizi gösterir.
                                                break;
                                        }
                                        if(kullanici==222 && cekme<=bakiye_222)  // 222 numaralı kullanıcı seçilirse ve çekilecek miktar bakiyenin altında ise
                                        {
                                                bakiye_222=bakiye_222-cekme; // Çekilen para miktarını bakiyeden azaltan fonksiyon
                                                printf("\nHesabinizdan %d TL cekiliyor. . .\n", cekme);  // Ne kadar çekeceğimizi ekranda gösterir
                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                printf("\nIsleminiz basariyla gerceklestirildi.\n\n");
                                                printf("Kalan Bakiye: %d TL.\n\n", bakiye_222);  // Yeni bakiyemizi gösterir.
                                                break;
                                        }        
                                        else if(cekme>bakiye_111 || cekme>bakiye_222) // çekmek istenilen miktar mevcut bakiyeden büyükse uyarı!!
                                        {
                                                                printf("\nHesabinizdan %d TL cekiliyor. . .\n", cekme);
                                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                                printf("\n YETERSİZ BAKİYE !!\a\n"); // Yetersiz bakiye olduğunu \a kullanarak sesli olarak uyarır
                                                                printf("Malesef isleminiz gerceklestirilemedi..\n\n");
                                                                Sleep(500);
                                        }
                                break;
                        case 3: // para havale
                                        printf("Hangi Hesaba Para Havale Etmek Istiyorsunuz?:");
                                        scanf("%d", &havaleedilecekhesap); // Parayı havale edeceğimiz hesabı havaleedilecekhesap değişkenine
                                    printf("Havale Edeceginiz Para Miktari <TL>: ");
                                    scanf("%d", &havale);
                                        if(kullanici==111 && havale<=bakiye_111) // 111 numaralı kullanıcı seçilirse ve havale edilecek miktar bakiyenin altında ise
                                        {
                                                bakiye_111=bakiye_111-havale; // Havale edilen para miktarını bakiyeden azaltan fonksiyon
                                                printf("\nHesabinizdan %d TL Havale Ediliyor. . .\n", havale);  // Ne kadar havale edeceğimizi ekranda gösterir
                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                printf("\n%d Nolu Hesaba Havaleniz basariyla gerceklestirildi.\n\n", havaleedilecekhesap);
                                                printf("Kalan Bakiye: %d TL.\n\n", bakiye_111);  // Yeni bakiyemizi gösterir.
                                                break;
                                        }
                                        if(kullanici==222 && havale<=bakiye_222) // 222 numaralı kullanıcı seçilirse ve havale edilecek miktar bakiyenin altında ise
                                        {
                                                bakiye_222=bakiye_222-havale; // Havale edilen para miktarını bakiyeden azaltan fonksiyon
                                                printf("\nHesabinizdan %d TL cekiliyor. . .\n", havale); // Ne kadar havale edeceğimizi ekranda gösterir
                                                Sleep(1500); // Yazıyı ekranda 1500 milisaniye bekletir.
                                                printf("\n%d Nolu Hesaba Havaleniz basariyla gerceklestirildi.\n\n",havaleedilecekhesap);
                                                printf("Kalan Bakiye: %d TL.\n\n", bakiye_222);  // Yeni bakiyemizi gösterir.
                                                break;
                                        }        
                                        else if(havale>bakiye_111 || havale>bakiye_222) // Havale edilmek istenilen miktar mevcut bakiyeden büyükse uyarı!!
                                        {
                                                                printf("\nHesabinizdan %d TL havale ediliyor. . .\n", havale);
                                                                Sleep(1500);
                                                                printf("\n YETERSIZ BAKIYE !!\a\n");
                                                                printf("Malesef isleminiz gerceklestirilemedi..\n\n");
                                                                Sleep(500);
                                        }
                                break;
                        case 4: // bakiye görüntüleme
                                if(kullanici==111) // 111 numaralı kullanıcı seçilirse
                                        printf("Mevcut Bakiyeniz: %d TL.\n\n", bakiye_111);
                                if(kullanici==222) // 222 numaralı kullanıcı seçilirse
                                        printf("Mevcut Bakiyeniz: %d TL.\n\n", bakiye_222);
                                break;
                        case 5: // oturum kapatma
                                printf("Oturumunuz Kapatiliyor. . .");
                                Sleep(2000); // Yazıyı ekranda 2000 milisaniye bekletir.
                                return 0; // Programı kapatmak için kullanılan kod.
                                break;
        }
                        
        case 2: // secim1 değişkeni ile direk çıkış için kullanılan case (eğer if koşulu aradan kaldırılırsa işlem sonunda otomatik kapanır program)
                                if (secim1==2)
                                {
                printf("\n\n\t\t\tGule Gule... Yine bekleriz...");
                Sleep(3000); // Yazıyı ekranda 2000 milisaniye bekletir.
                return 0; // Programı kapatmak için kullanılan kod.
                break;
                                }
                                
        }

        getch(); // Bir tuşa basınca programı kapatan fonksiyon
}
