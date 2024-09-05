#include <unistd.h>
int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        int j = 0;
        while(argv[1][j])
            j++;
        int size = j - 1;
        int i = 0;
        while(argv[1][i]!= '\0')
        {
            if(argv[1][i] <= 'z' && argv[1][i] >= 'a')
            {
                argv[1][i] = 'z' - (argv[1][i] -'a');
                write(1, &argv[1][i], 1);
            }
            else if(argv[1][i] <= 'z' && argv[1][i] >= 'a')
            {
                argv[1][i] = 'z' - (argv[1][i] -'a');
                write(1, &argv[1][i], 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n",1);
    return 0;
}