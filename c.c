#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/*
void parse_args(char * line){
  char * args = strsep(line, " ");
  printf("[%s]\n", strsep( line, " " ));
  printf("%s\n",args);
  return null;
}
*/

int main(){
  char line[100] = "wow-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  //parse_args("wahtever ewahtasdf asdfa");
}
