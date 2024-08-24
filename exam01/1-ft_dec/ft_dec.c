#include <unistd.h>
void ft_dec(char *ptr)
{
    int tmp;
    tmp = *ptr;
    *ptr = tmp - 1;
}

