#include <stdio.h>
main(){

  int a;
  printf("자신의 점수를 입력하세요");
  scanf("%d", &a);
  
  if(a>=90)
    printf("A학점 입니다!");
  else if(a>=80)
    printf("B학점 입니다!");
  else if(a>=70)
    printf("C학점 입니다!");
  else if(a>=60)
    printf("D학점 입니다!");
  else if(a<60)
    printf("F학점 입니다!");

  printf("성적 출력 끝");
}