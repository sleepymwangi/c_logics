#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

// size of variable using struct

struct Size{
     float floatSize;
     int intSize;
     char  charSize;

};

void MyNum(int num);
void my_printf(char* format, ...);
void _putchar(char ch);

#endif
