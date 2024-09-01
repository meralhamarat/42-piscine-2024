#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}
void palindrome(char *str)
{
    int size;
    int i;
    int a;
    
    i = 0;
    a = 0;
    size = ft_strlen(str);
    while(i <= size && str[i] == str[size-1])
    {
        if(str[i] == str[size -1])
        {
            i++;
            size--;
            if(i == size)
            {
                while(str[a] != '\0')
                {
                    write(1, &str[a], 1);
                    a++;
                }
            }
            else if (str[i] != str[size -1])
                break;
        }
    }
}
int main(int argc, char **argv)
{
    if(argc == 2)
        palindrome(argv[1]);
    write(1, "\n", 1);
}