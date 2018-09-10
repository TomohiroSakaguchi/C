#include <stdio.h>

int main(int argc, char const *argv[]) {
  int mokuhyou,chokin,goukei,kikan;
  goukei = 0;
  kikan = 0;

  printf("目標金額を入力");
  scanf("%d", &mokuhyou);
  printf("毎月の貯金額を入力");
  scanf("%d", &chokin);


  //printf("%d %d\n", mokuhyou,chokin);
  while (mokuhyou>goukei) {
    goukei = goukei + chokin;
    kikan++;
    //printf("%d\n", kikan);
  }

  printf("%d年 %dヶ月です\n", kikan/12, kikan%12);
  return 0;
}
