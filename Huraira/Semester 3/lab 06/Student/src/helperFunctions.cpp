#include "helperFunctions.h"

char *Functions::deepCopy(const char *src)
{
    int length = strLength(src);
    char *dest = new char[length]{'\0'};
    for (int i = 0; i < length; i++)
    {
        dest[i] = src[i];
    }
    dest[length] = '\0';
    return dest;
}
int Functions::strLength(const char *src)
{
    int count = 0;
    for (int i = 0; src[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
