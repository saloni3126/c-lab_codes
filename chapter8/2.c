#include<stdio.h>
int main(){
int intvar;
float floatvar;
char charvar;
int *intptr=&intvar;
float *floatptr=&floatvar;
char *charptr=&charvar;
printf("initial addresses:\n");
printf("integer pointer:%p\n",(void*)intptr);
printf("float pointer:%p\n",(void*)floatptr);
printf("char pointer:%p\n",(void*)charptr);
intptr++;
floatptr++;
charptr++;
printf("addresses after incrementing:\n");
printf("integer pointer:%p\n",(void*)intptr);
printf("float pointer:%p\n",(void*)floatptr);
printf("char pointer:%p\n",(void*)charptr);
intptr--;
floatptr--;
charptr--;
printf("addresses after decrementing:\n");
printf("integer pointer:%p\n",(void*)intptr);
printf("float pointer:%p\n",(void*)floatptr);
printf("char pointer:%p\n",(void*)charptr);
return 0;
}

