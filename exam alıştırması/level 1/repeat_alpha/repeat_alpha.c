#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char a;
    int j = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            j = 0;
            if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
            {
                while((argv[1][i] - 'a' + 1) > j)
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else if (argv[1][i] <= 'Z' && argv[1][i] >= 'A')
            {
                while((argv[1][i] - 'A' + 1) > j)
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}