#include stdio.h>
#include <string.h>
 int main(void)
{
    char buffer[10];
    memset(buffer, 'c', sizeof(char) * 5);
    memset(buffer, 'd', sizeof(char) * 5);
    for (int i = 0; i < 10; i++)
      buffer[i] = 'a';

    for (int i = 0; i < 10; i++)
      printf("%c", buffer[i]);
     printf("\n" );
  }
