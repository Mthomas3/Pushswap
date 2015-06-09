/*
** main.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:50:08 2014 Thomas Martins
** Last update Tue Jun  9 23:25:16 2015 Thomas Martins
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int		add_before(t_list *elem, int value)
{
  t_list	*new_elem;

  new_elem = malloc(sizeof(new_elem));
  if (new_elem == NULL)
    return (1);
  new_elem->value = value;
  new_elem->prev = elem->prev;
  new_elem->next = elem;
  elem->prev->next = new_elem;
  elem->prev = new_elem;
}

int		add_after(t_list *elem, int value)
{
  t_list	*new_elem;

  new_elem = malloc(sizeof(new_elem));
  if (new_elem == NULL)
    return (1);
  new_elem->value = value;
  new_elem->prev = elem;
  new_elem->next = elem->next;
  elem->next->prev = new_elem;
  elem->next = new_elem;
}

int		main(int argc, char **argv)
{
  int		a;
  t_list	*l_a;
  t_list	*l_b;
  t_list	*l_c;
  int		lock;

  lock = 0;
  a = 1;
  if (!my_function_error(argv))
    return (0);
  l_a = init_root();
  l_b = init_root();
  l_c = init_root();
  while (argc > a)
    {
      add_before(l_a, my_getnbr(argv[a]));
      a++;
    }
  my_function_two_bis(l_a, l_b, lock);
  my_putchar('\n');
  delete_list(l_a);
  delete_list(l_b);
}

