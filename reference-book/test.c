#include <stdio.h>
int main()
{
  int a[3],temp,i;
  
  for(i = 0;i < 3;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i = 0;i < 2;i++)
  {
    if(a[i] >= a[i+1]){
      temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
  }
  
  printf("%d",a[0]);
  for(i = 1;i < 3;i++)
  {
    printf("->%d",a[i]);
  }
}
