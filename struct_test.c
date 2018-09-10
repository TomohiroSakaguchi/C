#include <stdio.h>

//構造体
struct person1 {
  /* data */
  char *name;
  char sex;
  int age;
  char *add;
  char *job;
};

//構造体2
typedef struct person {
  /* data */
  char *name;
  char sex;
  char age;
  char *add;
  char *job;
} person2;

//一括代入の関数
person2 init(char *name, char sex, int age, char *add,char *job){
  person2 p2; //実体をここで生成
  p2.name = name;
  p2.sex = sex;
  p2.age = age;
  p2.add = add;
  p2.job = job;
  return p2; //init関数の左辺の変数にp2を指定すればいいということでもある
}

int main(void) {
  /* 構造体の実体を生成 */
  struct person1 tanaka;//ここで実体化
  tanaka.name = "T.Tanaka";
  tanaka.sex = 'm';
  tanaka.age = 30;
  tanaka.add = "Tokyo";
  tanaka.job = "teacher";
  printf("%sは%d歳で，%sで%sをしています．\n", tanaka.name, tanaka.age, tanaka.add, tanaka.job);

  //構造体の実体の生成と一括初期化
  person2 sato /*この時点で実体化*/ = {"S.Sato", 'm', 25, "Osaka", "nurse"};/*右辺で代入*/
  printf("%sは%d歳で，%sで%sをしています．\n", sato.name, sato.age, sato.add, sato.job);

  //関数で一括代入
  sato = init("K.Sato", 'm', 35, "Nagoya", "doctor");
  printf("%sは%d歳で，%sで%sをしています．\n", sato.name, sato.age, sato.add, sato.job);

  return 0;
}
