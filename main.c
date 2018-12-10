#include "get_next_line.h"

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <strings.h>

int			*ft_memalloc_zero()
{
	int		*lc;
	if ((lc = (int *)malloc(sizeof(int) * 512)))
	{
		bzero(lc, 512);
		return (lc);
	}
	return (NULL);
}

int			get_next_line(const int fd, char **line)
{
	static char *buf[FD_MAX];
	int i;
	char *line;

	i = 0;
:

	linecount++;
	return (1);
}

int			main(void)
{
	char src[100];
	char *cp = src;
	int fd = open("file", O_RDONLY);
	while (read(fd, cp, BUFF_SIZE))
		cp += BUFF_SIZE;
	printf("%s", src);
}
