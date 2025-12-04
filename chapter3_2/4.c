#include<stdio.h>
int main(){
int initial_population=1000;
float growth_rate=0.10;
int years =10;
printf("year/tpopulation\n");
printf("---------------------\n");

for(int year=1; year<=years;year++){
initial_population+=initial_population*growth_rate;
printf("%d\t%d\n",year,initial_population);
}
return 0;
}
