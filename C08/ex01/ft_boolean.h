#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h> // write fonksiyonu için gerekli

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define EVEN(nbr) ((nbr) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif
