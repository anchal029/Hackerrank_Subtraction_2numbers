#include<stdio.h>
int count(int x,int y)
{
if(a%b!=0)
{
return x/y;
}
return(x/y+ count(y,x%y));
}
int main()
{
int x,y,z;
scanf("%d %d",&x,&y);
c=count(x,y);
printf("%d",z);
return 0;
}
