#include "stdio.h"

int main(void) {
  int n1,n2;
  scanf("%d%d",&n1,&n2);

  int a1,a2,b1,b2,c1,c2,d1,d2;
  int s1,s2;

  a1=n1%10;
  b1=(n1/10)%10;
  c1=(n1/100)%10;
  d1=(n1/1000)%10;
  s1=a1+b1+c1+d1;

  a2=n2%10;
  b2=(n2/10)%10;
  c2=(n2/100)%10;
  d2=(n2/1000)%10;
  s2=a2+b2+c2+d2;

  if (s1>s2)
    printf("%d\n",n2);
  else if (s1==s2)
    if(d1>d2)
      printf("%d\n",n2);
    else
      printf("%d\n",n1);
  else
    printf("%d\n",n1);

}
