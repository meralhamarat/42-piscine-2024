#include <stdlib.h>
char    *ft_strdup(char *src)
{
    int i = 0;
    char *dest;
    while(src[i])
        i++;
    int srclen = i - 1;
    dest = (char *)malloc(sizeof(char) * (srclen + 1));
    if(!dest)
        return(0);
    int j = 0;
    while(src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    return(dest);
}

#include <stdio.h>
int main()
{
    char *arr = "meral";
    printf("%s", ft_strdup(arr));
    free(arr);
}