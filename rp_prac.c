#include <stdio.h>

int main(int argc, char const *argv[]) {
  double x,y,ans;
  int fg = 1;
  char sw,dummy;
  scanf("%lf%c%lf", &ans,&sw,&x);
  while (fg) {
    //scanf("%lf", &x);
    switch (sw) {
      case '+':
      ans +=x;
      printf("%lf\n", ans);
      break;

      case '-':
      ans -=x;
      printf("%lf\n", ans);
      break;

      case '*':
      ans *=x;
      printf("%lf\n", ans);
      break;

      case '/':
      if (x == 0) {
        printf("error!\n");
        ans = 0;
        break;
      }
      else{
        ans /=x;
        printf("%lf\n", ans);
      }
      //default:
      //printf("%lf\n", ans);
    }
    //printf("%lf\n", ans);
    printf("continue?(1/0)\n");
    scanf("%d", &fg);
    if (fg == 0) {
      continue;
    }else{
        scanf("%c%c%lf",&dummy,&sw,&x);
    }
  }

  return 0;
}
