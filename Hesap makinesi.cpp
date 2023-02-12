#include <stdio.h>
#include <stdlib.h>

main()
{
char islem;
float sayi1,sayi2,sonuc;

tekrar:
printf("islem gir=");scanf("%c,",&islem);fflush(stdin);
if (islem=='c')exit(0);

printf("Sayi1 gir:");scanf("%f",&sayi1);fflush(stdin);
printf("Sayi2 gir:");scanf("%f",&sayi2);fflush(stdin);

if (islem=='+')sonuc=sayi1+sayi2;
if (islem=='-')sonuc=sayi1-sayi2;
if (islem=='*')sonuc=sayi1*sayi2;
if (islem=='/')sonuc=sayi1/sayi2;
printf("sonuc=%.2f",sonuc);
goto tekrar;




}
