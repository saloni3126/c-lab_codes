#include<stdio.h>
int globalvar=10;
void displayglobal();
void displayglobal(){
printf("gloabal variable inside displayglobal():%d\n",globalvar);
}
int main(){
printf("global variable inside the main():%d\n",globalvar);
displayglobal();
return 0;
}
