#include <stdio.h>


//argv and argc

int main(int argc , char *argv[])
{

    int i = 0;

    if(argc == 1)
    {
      printf("No arguments at all\n");
    }else if (argc > 1 && argc < 5)
    {
       for (i=argc; argc < 5; i++)
       {
          printf("%s", argv[i]);
       }
       printf("\n");

    }else {

    printf("ERROR!!!");
    }


}
