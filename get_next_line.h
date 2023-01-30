#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
int	ft_checknewline(char *buffer);
char	*ft_newline(char *buffer);
char	*new_buffer(char *buffer);
char	*read_line(int fd, char *buffer);
char	*get_next_line(int fd);
#endif