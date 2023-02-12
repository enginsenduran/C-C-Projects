#include <string.h>
#include <stdio.h>
 
main()
{
    int sayac = 0;
    char sesli_harf[] = {'a','e','i','o','u'};
    char cumle[100];
    
    printf("Bir cumle giriniz(kucuk harfler ve turkce karaktersiz ): ");
    gets(cumle);
    // bosluklu ifadeleri okumak icin kullanilir.
    if(strlen(cumle) > 100)
    {
        printf("Cok uzun cumle girdiniz!.");
    }
    else
    {
        for (int i = 0; i < strlen(cumle); i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(cumle[i] == sesli_harf[j]){
                    sayac++;
                }
            }
        }
    }
    printf("\n Girilen cumlede %d adet sesli harf vardir", sayac);
}
