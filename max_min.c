#include <stdio.h>

int main(int argc, char const *argv[]) {

  int tensu,goukei,max,min;
  double avg;

  goukei = 0;
  max = 0;
  min = 999;
  for(int cnt = 1; cnt < 11; cnt++){
    scanf("%d\n", &tensu);
    goukei = goukei + tensu;
    if (max < tensu) {
      max = tensu;
    }
    if (tensu < min ) {
      min = tensu;
    }
  }
  avg = goukei/10;

  printf("合計 = %d 平均 = %2.1f\n", goukei, avg);
  printf("最高点 = %d 最低点 = %d\n", max, min);

  return 0;
}
