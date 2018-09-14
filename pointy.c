#include <stdio.h>

int main(){
  unsigned int x = 3000000000;
  int * i = &x;
  char * c = &x;
  printf("%x\n%x\n%x\n%x\n%x\n",*i,*c,*++c,*++c,*++c);
  //printf("%hhx\n",p);
  return 0;
}
