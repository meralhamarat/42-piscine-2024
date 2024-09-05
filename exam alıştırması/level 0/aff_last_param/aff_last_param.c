#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int a = argc -1;
    if(argc >= 2)
    {
        while(argv[a][i])
        {
            write(1, &argv[a][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}