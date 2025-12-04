#include<stdio.h>
void modifyvalues(int*a,float*b){
*a+=10;
*b+=1.5f;
}
int main(){
int intvar;
float floatvar;
printf("enter the integer values:");
scanf("%d",&intvar);
printf("enter a float value :");
scanf("%f",&floatvar);
printf("before modification :integer=%d,float=%f\n",intvar,floatvar);
modifyvalues(&intvar,&floatvar);
printf("after modification :integer=%d,float=%f\n",intvar,floatvar);
return 0;
}
