/*
** struct.h for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:48:42 2014 Thomas Martins
** Last update Fri Dec 12 16:48:42 2014 Thomas Martins
*/

#ifndef STRUCT_H_
# define STRUCT_H_
#include <stdarg.h>

typedef struct s_list
{
  int		value;
  struct s_list *prev;
  struct s_list *next;
}		 t_list;

void		my_putchar(char c);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_put_nbr(int nb);
int		my_putnbr_unsigned(unsigned int nb);
void		delete_elem(t_list *elem);
void		delete_first(t_list *root);
void		delete_last(t_list *root);
void		*first_elem(t_list *root);
void		*last_elem(t_list *root);
int		my_putstr_two(char *str);
char		*my_strcpy(char *dest, char *src);
int		my_putnbr_long(long unsigned int nb);
int		my_putnbr_long_long(long long unsigned int nb);
void		my_putnbr_base(int nb, char *base);
int		my_put_nbr_long(long int nb);
int		my_put_nbr_long_long(long long int nb);
int		my_put_nbr_two(int nb, int a);
void		my_putnbr_base_long(long int nb, char *base);
int		my_flag_two(va_list ap, const char *ftm, int i);
int		my_flag_last(va_list ap, const char *ftm, int i);
int		my_put_ld(va_list ap, const char *ftm, int i);
int		my_condition_flag(va_list ap, const char *ftm, int i);
t_list		*init_root();
void		printf_list(t_list *root);
void		delete_list(t_list *root);
void		add_list_before(t_list *root, int value);
void		add_list(t_list *root, int value);
int		add_before(t_list *elem, int value);
int		add_after(t_list *elem, int value);
int		my_getnbr(char *str);
int		my_putnbr_flag(long unsigned int nb);
int		my_function_two(void *ptr);
void		my_putnbrbase_long(long long int nb, char *base);
int		my_function_one(t_list *root, int lock);
void		my_function_ra(t_list *l_a, t_list *l_b, int lock);
int		my_function_two_bis(t_list *l_a, t_list *l_b, int lock);
int		my_function(void *ptr);
int		my_condition(va_list ap, const char *ftm, int i);
int		my_printf(const char *ftm, ...);
void		my_function_rb(t_list *l_b);
void		my_function_rr(t_list *l_a, t_list *l_b);
void		my_function_pa(t_list *l_a, t_list *l_b, int lock);
void		my_function_pb(t_list *l_a, t_list *l_b, int lock);
void		my_function_sa(t_list *l_a, t_list *l_b, int lock);
void		delete_elem(t_list *elem);
void		delete_first(t_list *root);
void		delete_last(t_list *root);
void		*first_elem(t_list *root);
void		*last_elem(t_list *root);
void		my_function_sb(t_list *l_a, t_list *l_b, int lock);
void		my_function_ss(t_list *l_a, t_list *l_b, int lock);
int		check_number(char *number);
int		my_function_number(char a);
int		my_function_error(char **argv);

#endif
