#include <stdio.h>
#include <stdlib.h>

void conv(int s);

int main(int argc, char const *argv[]) {
  /* 秒を時間，分，秒に変換するprogram */

  int h,m,s,tmp;

  if(argc != 2){
    printf("Usage: %s <second>\n", argv[0]);
    return 0;
  }

  s = atoi(argv[1]);


  tmp = s;
  m = s/60;
  s = s%60;
  h = m/60;
  m = m%60;

  printf("%d 秒 = %d 時間 %d 分 %d 秒\n", tmp, h, m, s);
  return 0;
}

/*
void conv(int s,int m int h){
  int hou,min;

  m = s/60;
  s = s%60;
  h = m/60;
  m = m%60;

  return s,min,hou;
}
*/
