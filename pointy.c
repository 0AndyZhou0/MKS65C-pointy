#include <stdio.h>

int main(){
  unsigned int x = 3000000000;
  //int * i = &x;
  char * c = &x;
  printf("%x  \n",x);
  /* for(int i = 0;i < 4;i++){ */
  /*   printf("%hhx  \n",*c); */
  /*   c++; */
  /* } */
  for(int i = 0;i < 4;i++){
    printf("%hhx  \n",*c);
    c += 16;
  }
  return 0;
}
