#include "libft.h"

void	*ft_try_malloc(size_t size, char *f, int l)
{
	void	*alloc;
	
	if (!(alloc = ftft_memalloc(size)))
	{
		ft_putstr_fd("error: malloc can't allocate region in: \033[31;01m", 2);
		ft_putstr_fd(f, 2);
		ft_putstr_fd("\033[0m - (line:\033[35;01", 2);
		ft_putnbr_fd(l, 2);
		ft_putstr_fd("\033[0m)\n", 2);
		exit(1);
	}
	return (alloc);
}
