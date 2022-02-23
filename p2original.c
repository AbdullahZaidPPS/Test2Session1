#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the values\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int istriangle;
  float slope1,slope2,slope3;
  slope1=((y2-y1)/(x2-x1));
  slope2=((y3-y1)/(x3-x1));
  slope3=((y3-y2)/(x3-x2));
  if(slope1==slope2 || slope1==slope3 || slope2==slope3)
  {
    return 2 ;
  }
  if(slope1!=slope2!=slope3)
  {
    return 1;
  }
  return istriangle;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle==2)
  {
    printf("The three points don't form a triangle\n");
  }
  if(istriangle==1)
  {
    printf("The three points may form a triangle\n");
  }
  }
int main()
{
  float x1,y1,x2,y2,x3,y3;
  int a;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
  
  

}