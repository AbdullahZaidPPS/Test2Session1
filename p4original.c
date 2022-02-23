#include<stdio.h>
int input()
{
  int n;
  printf("Enter the index of the term you desire for\n");
  scanf("%d",&n);
  return n;
}
int fibo_n(int n)
{
  int a1=0,a2=1,fibo;
  for(int i=1;i<=n-2;i++)
    {
      fibo=a1+a2;
      a1=a2;
      a2=fibo;
    }
    return fibo;
}
void output(int n,int fibo)
{
  if(n==0 || n==1)
  {
    printf("The %d rd/th element is %d",n,n);
  }
  else
  {
    printf("The %d rd/th term of fibonacci series is %d",n,fibo);
}
  }
int main()
  {
    int g,h;
    g=input();
    h=fibo_n(g);
    output(g,h);
    return 0;
  }