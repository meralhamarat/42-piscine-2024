#include <unistd.h>
int main(int argc, char *argv[])
{
    int  size = 0;
    while(argv[1][size]!= '\0')
        size++;
    int i = size -1;
    if(argc == 2)
    {
        while(i >= 0 && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
}