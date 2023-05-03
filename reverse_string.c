#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_string(char* str);

int main()
{
    char str[] = "c logics";
    reverse_string(str); 
    printf("%s\n",str);
    return (0);

}
void reverse_string(char* str)
{
    int len = strlen(str);
    char* start = str;
    char* end = str + len - 1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}