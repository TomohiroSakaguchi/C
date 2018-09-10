#include <stdio.h>

void swap(int *pX,int *pY);

int main(int argc, char const *argv[]) {
  int num1 = 5;
  int num2 = 10;

  printf("num1の値は%dです．\n", num1);
  printf("num2の値は%dです．\n", num2);
  printf("num1とnum2の値を交換します．\n");

  swap(&num1,&num2);

  printf("num1の値は%dです．\n", num1);
  printf("num2の値は%dです．\n", num2);

  return 0;
}

void swap(int *pX,int *pY) {
  int tmp;

  tmp = *pX;
  *pX = *pY;
  *pY = tmp;
}
