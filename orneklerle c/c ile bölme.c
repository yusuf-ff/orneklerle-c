 
#include <stdio.h>
#include <locale.h>
int main()
{
 
     char *locale;
     locale = setlocale(LC_ALL, "");
 
     int x;
     int y;
     float sonuc;
     printf("\n Birinci sayıyı girin: ");
     scanf("%d",&x);
     printf("\n İkinci sayıyı girin: ");
     scanf("%d",&y);
     sonuc = x / y;
     printf("\n Bölme İşlemi Sonucu: %f",sonuc);
     return 0;
 
}
 