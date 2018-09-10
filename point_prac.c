#include <stdio.h>

void add(int *x,int *y,int a) {
  *x = *x+a;
  *y = *y+a;
}

int main(int argc, char const *argv[]) {
  int x1,x2,a;

  printf("2科目分の点数を入力してください．\n");
  scanf("%d", &x1);
  scanf("%d", &x2);

  printf("加算する点数を入力してください．\n");
  scanf("%d", &a);

  add(&x1,&x2,a);

  printf("%d点加算しましたので\n科目1は%d点，科目2は%d点になりました．\n", a,x1,x2);

  return 0;
}
