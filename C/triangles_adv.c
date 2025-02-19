#include<stdio.h>
int main()
{int x,y,z;
printf("enter valid sides only \n");
printf("enter the sides of a triangle");
scanf("%d%d%d",&x,&y,&z);
if(x==y&&y==z)
{printf("equilateral");
}else if(x==y||y==z||x==z)
{if(x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x)
printf("isosles right angle triangle");
else 
printf("isosles");
}
else
 if(x!=y&&y!=z&&x!=z)
 {
 
if(x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x)
printf("right angle triangle");
else{printf("scalen");

}}
}