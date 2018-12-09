#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  /* needs _GNU_SOURCE */
  char * foo = strdupa("hello world");
  printf("test test %s\n", foo);
  return 0;
}

