#include <stdio.h>
#include <stdlib.h>

/*実行するときに"./a.out <引数1> <引数2>"といれる*/

void swap(int *x, int*y);

int main(int argc, char const *argv[]) {

  int a,b;
  if(argc != 3){
    printf("Usage: %s <number1> <number2>\n", argv[0]);
    return 0;
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);

  swap(&a,&b);

  printf("aの値は %d, bの値は %d\n",a,b );

  return 0;
}

void swap(int *x, int *y) {

  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;

}
