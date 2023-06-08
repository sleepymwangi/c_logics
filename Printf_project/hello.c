#include <stdio.h>
#include "main.h"

void myHello(char string[])
{

   printf("%s\n", string);

}
void MyNum(int num)
{
  printf("%d\n", num);
}
int sum(int x, int y)
{
  int z = x + y;
  int result = z;
  printf("%d\n",result);
  return(result);
}
int main() {

  char message[] = "Hello world";
  char message2[] = "I love coding";
  int Num = 2;
  int Num2 = 4;

  myHello(message);
  myHello(message2);

  MyNum(Num);
  MyNum(Num2);

  sum(Num , Num2);

  struct Size sizes;

  printf("Size of float: %zu bytes\n", sizeof(sizes.floatSize));
  printf("size of int: %zu bytes\n", sizeof(sizes.intSize));
  printf("size of char: %zu bytes\n", sizeof(sizes.charSize));

  return(0);
}
