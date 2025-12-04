#include<stdio.h>
int main(){
int N;
int count=0;
int a1,a2,b1,b2;
printf("enter anum:");
scanf("%d",&N);
for(int a=1;a*a*a<N;a++){
for (int b=a+1;b*b*b<N;b++){
if(a*a*a+b*b*b==N){
count++;
if (count==1) {
a1=a;
b1=b;
}
else if (count==2){
a2=a;
b2=b;
}
}
}
}
if(count>=2){
printf("%d is a ramanunjan num.\n",N);
printf("it can be expressed as:\n");
printf("%d^3+%d^3\n",a1,b1);
printf("%d^3+%d^3\n",a2,b2);
}
else {
printf("%d is not a ramanunjan number.\n",N);
}
return 0;
}
