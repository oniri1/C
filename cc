#include <stdio.h>

void test(int num1, int num2);

int main(void)
{
 int a = 3, b = 5;

 printf("void형은 수식 사용하면 오류발생\n\n\n[main () 함수 영역]\n\n문> 두 수의 합을 구하는 함수 호출 \n");

 test(a, b);

 
 return 0;
}

void test(int num1, int num2) {
 int sum = 0;
 sum = num1 + num2;
 printf("\n\n[test () 함수 영역]\n\n");
 printf("\n\n[main () 함수 영역]\n\n답> 두 수의 합 : %d\n", sum);
 

}
