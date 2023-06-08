#include "main.h"

void my_printf(char* format, ...)
{

   va_list args;
   va_start(args, format);

   char ch;
   int i;
   for (i=0; (ch = format[i]) != '\0'; i++){
      if (ch == '%'){
         i++;
         ch = format[i];

         switch (ch){
         case 'd':{
            int value = va_arg(args, int);
                printf("%d", value);
                break;
         }
         case 'f':{
            double value = va_arg(args, double);
                  printf("%f", value);
                  break;
         }
         case 'c':{
            int value = va_arg(args, int);
            putchar(value);
            break;
          }
         case 'n':{
            putchar('\n'); // Output a newline character
            break;
         }
         case 'l':{
             i++;
             ch = format[i];

             if (ch == 'f'){
                double value = va_arg(args, double);
                printf("%lf", value);

             }else {
                 _putchar('%');
                 _putchar('l');
                 _putchar(ch);
             }
             break;
         }
         default:
              _putchar('%'); // Output '%' as it is
              _putchar(ch);
              break;
         }
         }else {
            putchar(ch);
      }
   }
    va_end(args);
}
