#include <unistd.h>

void _putchar(char ch)
{
  write(1, &ch, 1);
}
