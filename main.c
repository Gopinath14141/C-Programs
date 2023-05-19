#include <stdio.h>

enum week{Mon=100,Tues,Wed=200,Thurs,Fri,Sat,Sun};
int main()
{
  enum week w1,w2,w3,w4,w5,w6,w7;
  w1=Mon;
  w2=Tues;
  w3=Wed;
  w4=Thurs;
  w5=Fri;
  w6=Sat;
  w7=Sun;
  printf("%d %d %d %d %d %d %d", w1,w2,w3,w4,w5,w6,w7);

  return 0;
}

/*#include<stdio.h>

enum booleanvalue{pass,fail};
enum result{f,p};
int main()
{
enum booleanvalue b1,b2;
b1=pass;
b2=fail;
printf("%d %d", b1,b2);

return 0;
}*/


