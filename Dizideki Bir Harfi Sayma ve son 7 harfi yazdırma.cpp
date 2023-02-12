
#include <string.h>
#include <stdio.h>



main()

{
char harf [31]="ABCXZFGHJREWQASDZXCVBFADSWERTY";
int i, sayac=0;


for (i=0;i<=29;i++){

if (harf[i] == 'A')sayac++;

}

printf("bu dizideki A sayisi= %d\n",sayac);
printf("%c", harf[23]);
printf("%c", harf[24]);
printf("%c", harf[25]);
printf("%c", harf[26]);
printf("%c", harf[27]);
printf("%c", harf[28]);
printf("%c", harf[29]);

}

