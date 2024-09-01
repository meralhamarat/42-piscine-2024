#include <unistd.h>
int main()
{
    write(1, "l\n", 2);
    return(0);
}