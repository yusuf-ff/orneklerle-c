#include <stdio.h>
#include <locale.h>
int main()
{
    //türkçe karakter setinin yüklenmesi
     char *locale;
     locale = setlocale(LC_ALL, "");
 
    /* tek çift sayı programı */
     int num;
 
     printf("Bir sayı girin: ");
     scanf("%d",&num);  //taking input from user
 
     if (num%2==0) //tek çift kontrolü
      printf("%d Sayısı Çift",num);
     else
      printf("%d Sayısı Tek",num);
 
     return(0);
}