#include"proc.h"
void proc()
{
  int i=0;
  char bar[101];
  while(i<100)
  {
    //printf("[%-100s][%d%%][%c]\r",bar,i,lab[i%4]);
    //fflush(stdout);
    sleep(1);
    bar[i++]='#';
    bar[i]='\0';
    printf("[%-100s][%d%]\r",bar,i);
    fflush(stdout);
  }
  printf("\n");
}
