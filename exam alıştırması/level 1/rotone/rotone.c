#include <unistd.h>
char *rotone(char *str)
{
    int i = 0;
        while(str[i])
    {
        if((str[i]>= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
            str[i] += 1;
        else if(str[i] == 'Z' || str[i] == 'z')
            str[i] -= 13;
        write(1, &str[i], 1);
        i++;
    }
    return(str);
}
int main(int argc, char **argv)
{
    if(argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
}