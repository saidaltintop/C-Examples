#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
        float vki,boy,kilo;
        char cinsiyet;

        printf("\t\t\t\tHosgeldiniz!!\n");
        printf("\nCinsiyetiniz:");
        scanf("%c",&cinsiyet);
        getchar();
        printf("\nMetre cinsinden boyunuz:");
        scanf("%f",&boy);
        printf("\nKilonuz:");
        scanf("%f",&kilo);
        vki=kilo/pow(boy,2);

        switch (cinsiyet)
        {
        case 'e':
                {
                        if (vki<20.7)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (20.7<vki && vki<26.4)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (26.5<vki && vki<31.1)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vki>31.2)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;

                }
        case 'E':
                {
                        if (vki<20.7)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (20.7<vki && vki<26.4)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (26.5<vki && vki<31.1)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vki>31.2)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;
                }
        case 'k':
                {
                        if (vki<19.1)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (19.1<vki && vki<25.8)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (25.9<vki && vki<32.2)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vki>32.3)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;
                }
        case 'K':
                {

                        if (vki<19.1)
                        {
                                printf("\nZayifsiniz.Saglik riski!");
                        }
                        else if (19.1<vki && vki<25.8)
                        {
                                printf("\nNormalsiniz risk yok!!");
                        }
                        else if (25.9<vki && vki<32.2)
                        {
                                printf("\nSismanlik sinirinda yada sismansiniz. Riskli!!");
                        }
                        else if (vki>32.3)
                        {
                                printf("\nObezite!! Ciddi derecede riskli\a");
                        } 
                        break;
                }
        default:
                {
                break; 
                



                }
        }

        getch();



}
