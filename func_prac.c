#include <stdio.h>

int square(int x);

int main(int argc, char const *argv[]) {
  int num1,ans;

  printf("整数を入力してください．\n");
  scanf("%d", &num1);

  ans = square(num1);

  printf("%dの2乗は%dです\n", num1,ans);

  return 0;
}

int square(int x){
  return x*x;
}
