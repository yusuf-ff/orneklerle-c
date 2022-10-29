#include <stdio.h>
#include <locale.h>
int main()
{
    //türkçe karakter setinin yüklenmesi
     char *locale;
     locale = setlocale(LC_ALL, "");
 
    /* Girilen Üç sayıdan büyük olanını bulan program*/
      int a,b,c,buyuk;
 
      printf("\n Sayıları girin:");
 
      scanf("%d %d %d", &a , &b , &c);
 
      buyuk = (a > b && a > c ? a : b > c ? b:c) ;
      //if a>b ve  a>c ise buyuk=a, değilse  kontrol et b>c ise
      //evet buyuk=b değilse  buyuk=c
      printf("\n Büyük Sayı %d",buyuk);
 
      return(0);
}