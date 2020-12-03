#include <stdio.h>

int main() {
  int i, boolean;
  char c;

  i = 10;
  c = ' ';
  boolean = (i >= 0 && line[i] == ' ' || line[i] == '\t' || line[i] == '\n');
  printf("i = %d, c = %c, boolean = %d\n", i, c, boolean);
  
  i = 10;
  c = 'a';
  boolean = (i >= 0 && line[i] == ' ' || line[i] == '\t' || line[i] == '\n');
  printf("i = %d, c = %c, boolean = %d\n", i, c, boolean);


  i = -1;
  c = '\t';
  boolean = (i >= 0 && line[i] == ' ' || line[i] == '\t' || line[i] == '\n');
  printf("i = %d, c = %c, boolean = %d\n", i, c, boolean);

}
