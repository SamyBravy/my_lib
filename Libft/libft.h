/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:30:51 by sdell-er          #+#    #+#             */
/*   Updated: 2024/08/01 20:26:50 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct int_list
{
	int				content;
	struct int_list	*next;
}					t_int_list;

struct s_ogg
{
	int		i;
	int		cont;
	int		indice;
	int		opz;
	int		ottenuto;
	int		poss;
	char	*str;
	char	charset;
};

int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_atoi(const char *nptr);
int			ft_lstsize(t_list *lst);
int			ft_strcmp(char *s1, char *s2);

size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

void		ft_bzero(void *s, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(void *));

void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char		**ft_split(char const *str, char charset);

t_list		*ft_lstnew(void *content);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_matrix_to_lst(char **matrix);
t_list		*ft_lstclone(t_list *lst);

t_int_list	*ft_new_intlst(int value);

char		**ft_lst_to_matrix(t_list *lst);
char		*ft_strjoin3(char *s1, char *s2, char *s3);

void		ft_free_mat(char **mat);
void		ft_lstadd_back_int(t_int_list **lst, int content);

int			ft_nbrlen(int n);

double		ft_atof(char *nptr);
double		ft_pow(double n, int pow);
double		ft_abs(double n);

char		*ft_ftoa(double n);

long		ft_llog(long nb, long base);
size_t		ft_stlog(size_t nb, size_t base);
int			ft_ulog(unsigned int nb, unsigned int base);
int			ft_log(int nb, int base);
char		*ft_pend_char(char *str, int n, char c, int append);
int			ft_strlen_int(const char *str);

#endif