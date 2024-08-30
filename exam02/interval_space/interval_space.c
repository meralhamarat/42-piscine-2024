#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

void interval_space(char *str)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(&str[i]) -1;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        if(i != len)
        {
            write(1,"   ", 3);
        }
        i++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
        interval_space(argv[1]);
    write(1, "\n",1);
    return(0);
}
