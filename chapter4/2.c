#include<stdio.h>
int globalvar=50;
void displayvariables(){
int localvar=20;
printf("inside the displayvariables():\n");
printf("local variables:%d",localvar);
printf("global variables%d\n",globalvar);
}
int main(){
displayvariables();
printf("inside main():\n");
printf("global variable :%d\n",globalvar);
return 0;
}

