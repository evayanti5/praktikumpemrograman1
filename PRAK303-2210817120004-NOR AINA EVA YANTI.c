#include <stdio.h>

int main ()
{
      int angka;
      scanf("%d", &angka);
      if (angka > 0)
      {
            printf("positif");
      }
      else if (angka < 0)
      {
            printf("negatif");
      }
      else if (angka == 0)
      {
            printf("nol");
      }
      main();
}
