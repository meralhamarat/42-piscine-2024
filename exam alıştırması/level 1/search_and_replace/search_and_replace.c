#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    if(argc == 4)
    {
        while(argv[1][i] != '\0' && argv[2][1] == '\0' && argv[3][1] == '\0')
        {
            if(argv[1][i] == argv[2][j])
                argv[1][i] = argv[3][j];  
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}