#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char ch;
  char s[100];
  char sen[100];
  scanf(" %c", &ch);
  scanf(" %[^\n]%*c", s);
  fgets(sen, sizeof(sen), stdin);
  printf("%c \n%s \n%s \n", ch, s, sen);

  return 0;
}