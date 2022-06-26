#include <stdio.h>
#include <stdlib.h>

void score_fun();
void grade_fun(int in);
void jumsu_err();
void alpa_err(char b);
void end_fun();
int c;
char a;

int main(void) {
 while (1){

 
  printf("시작하려면 Y 종료하려면 N을 입력하세요.\n대소문자 구별은 없습니다.\n");
 

  printf("");

  int SORE;
  

  scanf_s("%s", &a, 10);

  SORE = ((a == 'N') || (a == 'n'));

  if (SORE == 1) { end_fun(); goto ended; }

  SORE = ((a == 'Y') || (a == 'y'));

  if (SORE == 1) { score_fun(); }
 
  if (SORE == 0) { alpa_err(a);}
  

 }

 ended:
 return 0;
}


void score_fun() {
 int jungan, gimal;
 printf("중간 기말 점수를 차례로 입력하세요.");

jumsure:

 scanf_s("%d%d", &jungan, &gimal);

 c = (((jungan > 100) || (jungan < 0)) || ((gimal > 100) || (gimal < 0)));
 if (c == 1) {
  jumsu_err(); jungan = 101; gimal = 101;
    goto jumsure;
 }


 int hap;
 hap = (jungan + gimal) / 2;

 grade_fun(hap);


}

void grade_fun(int in) {
 


 if (in > 95) {printf("등급 : A+"); }
 else if (in >= 90) { printf("등급 : A"); }
 else if (in >= 85) { printf("등급 : B+"); }
 else if (in >= 80) { printf("등급 : B"); }
 else if (in >= 75) { printf("등급 : C+"); }
 else if (in >= 70) { printf("등급 : C"); }
 else if (in >= 65) { printf("등급 : D+"); }
 else if (in >= 60) { printf("등급 : D"); }
 else { printf("등급 : F"); }

 printf("\n\n");

}
void jumsu_err() {
 printf("잘못된 입력 값 입니다.\n 점수를 다시 입력하세요.\n");
}
void alpa_err(char b) {
 printf("%c는 잘못 된 알파벳 입니다.\n", b);
}
void end_fun() {
 printf("%c를 입력받았습니다.\n 프로그램을 종료합니다.", a);

 
}

 