#include <unistd.h>

int main(void)
{
    write(1, "b\n", 2);
    return(0);
}