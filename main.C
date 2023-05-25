#include <stdio.h>

int main(void) {
  int secim;
  printf("Lutfen Ne istiyorsaniz seciniz.\n");
  printf("1(Yazin) - Discord Sunucumuz\n");
  printf("2(Yazin) - YouTube Kanalımız\n");
  printf("3(Yazin) - Geliştirdiklerimiz\n");
  printf("4(Yazin) - Yayındakiler\n");
  printf("5(Yazin) - Hakkımızda\n");
  printf("6(Yazin) - Github\n");
  printf("Lutfen yazi giriniz: ");
  scanf("%d",&secim);
  switch(secim)
  {
    case 1:printf("Discord:gg/CPdNxaAHXD"); break;
    case 2:printf("YouTube: https://www.youtube.com/channel/UCpqHoOFwmSFXsv1Pwyy7ojQ"); break;
    case 3:printf("Geliştirdiklerimiz: Github sayfamizda (6) yazin"); break;
    case 4:printf("Yayindakiler: Github sayfamizda (6) yazin"); break;
    case 5:printf("Hakkımızda: Developer is Rylox(Burak Dinc)"); break;
    case 6:printf("Github: https://github.com/RyloxS"); break;
    default: printf("Hatali deger girdiniz."); 
  }
  return 0;
}