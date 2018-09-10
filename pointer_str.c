#include <stdio.h>

int main(void) {
  char *str = "Hello";
  str = "Goodbye";

  printf("文字列は%sです\n", str);
  return 0;
}
