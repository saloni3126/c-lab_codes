#include<stdio.h>
void StaticVariable(){
static int count=0;
count++;
printf("function called %d times\n",count);
}
int main(){
StaticVariable();
StaticVariable();
StaticVariable();
return 0;
}
