#include <stdio.h>
#include <stdlib.h>

// dynamic memory allocation

int main()
{
 int* array = (int*)malloc(5 * sizeof(int));

 if(array != NULL){
 int i = 0;
 while (i < 5){
 array[i] = i;
 printf("%d", array[i]);
 i++;

  }
  printf("\n");

  free(array);
}else {
  printf("Error Memory allocation failed.\n ");
}

  return(0);
}
