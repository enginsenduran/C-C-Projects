#include <stdio.h>

main()
{
char isim[9]="SELAMLAR";

int i,say=0;

for(i=0;i<=7;i++)
{
 if(isim[i]=='A')say++;
}

printf("Bu dizideki A sayisi=%d",say);


}
