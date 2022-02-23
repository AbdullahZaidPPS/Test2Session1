#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  
  printf("Enter X1 value\n");
  scanf("%f",x1);
  printf("enter Y1 value\n");
  scanf("%f",y1);
  printf("enter the X2 value\n");
  scanf("%f",x2);
  printf("enter the Y2 value\n");
  scanf("%f",y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}
int main()
{
  float x,y,z,w,j;
  input(&x,&y,&z,&w);
  find_distance(x,y,z,w,&j);
  output(x,y,z,w,j);
  return 0;
  
}
