#include<stdio.h>
int main(){
int a=10;
printf("in main block :a=%d\n",a);
{
int b=20;
printf("inside the first block a=%d,b=%d\n",a,b);
{
int c=30;
printf("inside second inner block:a=%d,b=%d,c=%d\n",a,b,c);
}
//printf("%d",c);
}
//printf("%d",b);
//printf("%d",c);
printf("back in main:a=%d\n",a);
return 0;
}

