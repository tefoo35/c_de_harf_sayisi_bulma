#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
typedef struct
{
 int harf;

 int adet;
} struct_harf;
int main()
{
setlocale(LC_ALL,"Turkish");
   FILE *dosya;
 dosya=fopen("dosya1.txt","r");
struct_harf dizi[35];
char s1;
int j=0;
char s2;
int sayi=0;
int i;
int deger=97;
int sayac=0;

for(i=0;i<29;i++){
        if(deger==123)break;
        if(deger==113||deger==119||deger==120){deger++;i--;continue;}
    dizi[i].harf=deger;
    dizi[i].adet=0;
    deger++;

}
dizi[23].harf=252;//�
dizi[23].adet=0;

dizi[24].harf=253;//�
dizi[24].adet=0;

dizi[25].harf=240;//�
dizi[25].adet=0;

dizi[26].harf=231;//�
dizi[26].adet=0;

dizi[27].harf=246;//�
dizi[27].adet=0;

dizi[28].harf=254;//�
dizi[28].adet=0;





dizi[29].harf=208;//�
dizi[30].harf=222;//�
dizi[31].harf=221;//�
dizi[32].harf=220;//�
dizi[33].harf=214;//�
dizi[34].harf=199;//�



for(;;){
        s1=fgetc(dosya);
for(i=0;i<29;i++){
    if(s1=='�'||s1=='�')
            dizi[23].adet++;
        if(s1=='�'||s1=='�')
            dizi[26].adet++;
    else if(s1=='�'||s1=='�')
        dizi[28].adet++;
   else if(s1=='�'||s1=='�')
    dizi[27].adet++;
   else if(s1=='i'||s1=='�')
   dizi[8].adet++;
   else if(s1=='�'||s1=='I')
    dizi[24].adet++;
    else if(s1=='�'||s1=='�')
    dizi[25].adet++;

  else if(s1==dizi[i].harf || s1==toupper(dizi[i].harf)) dizi[i].adet ++;

}
if(feof(dosya)) break;}

if(dizi[23].adet)dizi[23].adet/=29;
if(dizi[24].adet)dizi[24].adet/=29;
if(dizi[25].adet)dizi[25].adet/=29;
if(dizi[26].adet)dizi[26].adet/=29;
if(dizi[27].adet)dizi[27].adet/=29;
if(dizi[28].adet)dizi[28].adet/=29;
if(dizi[8].adet)dizi[8].adet/=29;

for(i=0;i<29;i++)
         sayac+=dizi[i].adet;
        toplam(sayac);
//s�ralama
int q,enKucuk,temp,temp1;
 for (q=0; q<29; q++)
     {
         enKucuk = q;
         for (j=q+1; j<29; j++)
         {
             if (dizi[j].adet >dizi[enKucuk].adet)
             enKucuk = j;

         }

         temp = dizi[q].adet;
         temp1=dizi[q].harf;
         dizi[q].harf=dizi[enKucuk].harf;
         dizi[q].adet = dizi[enKucuk].adet;
         dizi[enKucuk].harf=temp1;
         dizi[enKucuk].adet = temp;
        printf("\n%c 'den/dan  %d tane vardir.",dizi[q].harf,dizi[q].adet);
    }
  return 0;
}






int toplam(int sayac){
printf("toplam harf sayisi %d",sayac);}
