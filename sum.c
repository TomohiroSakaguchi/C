#include <stdio.h>

int main(int argc, char const *argv[]) {

  int tensu,goukei;
  double avg;

  goukei = 0;
  for(int cnt = 0; cnt < 10; cnt++){
    scanf("%d\n", &tensu);
    goukei = goukei + tensu;
  }
  avg = goukei/10;

  printf("合計 = %d 平均 = %2.1f\n", goukei, avg);

  return 0;
}
