#include <unistd.h>
int main()
{
    char i = '9';
    while(i >= '0')
    {
        write(1, &i, 1);
        i--;
    }
    return(0);
}