#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int isprime=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        isprime++;
      }
    }
  return isprime;
}
void output(int n,int isprime)
{
  if(isprime==2)
  {
    printf("%d is a prime number\n",n);
  }
  if(isprime<2 || isprime>2)
  {
    printf("%d is not a prime number\n",n);
  }
}
int main()
{
  int a,b;
  a=input_number();
  b=is_prime(a);
  output(a,b);
  return 0;
}