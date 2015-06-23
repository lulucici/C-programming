/*trans d to b*/
#include "stdio.h"
int main(void)
{
  int ri,repeat;
  int i,n;
  void dectobin(int n);

  scanf("%d",&repeat);
  for(ri=1;ri<=repeat;ri++){
    scanf("%d",&n);
    dectobin(n);
    printf("\n");
  }
}

void dectobin(int n)
{

    if( n >1)
    {
      dectobin(n/2);/*递归*/
    }

    printf("%d",n%2);

}