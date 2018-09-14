#include <stdio.h>

int main(){
  unsigned int x = 3000000000;
  char * p = x;
  printf("%x\n",p);
  for(int i = 0;i < 4;i++){
    printf("%hhx\n",p+i);
  }
  return 0;
}
