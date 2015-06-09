/*
** list_three.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:50:43 2014 Thomas Martins
** Last update Fri Dec 12 16:50:43 2014 Thomas Martins
*/

#include "struct.h"
#include <stdlib.h>

int		my_function_one(t_list *root, int lock)
{
  t_list	*tmp;
  int		value;

  tmp = root->next;
  value = root->next->value;
  while (tmp != root)
    {
      if (tmp->value < value)
	{
	  lock++;
	  return (1);
	}
      tmp = tmp->next;
    }
  return (0);
}

void		my_function_ra(t_list *l_a, t_list *l_b, int lock)
{
  add_list(l_a, l_a->next->value);
  delete_first(l_a);
  if (lock == 0)
    {
      my_putstr("ra");
      lock++;
    }
  else
    my_putstr(" ra");
}

int		my_function_two_bis(t_list *l_a, t_list *l_b, int lock)
{
  while (l_a->next != l_a)
    {
      while (my_function_one(l_a, lock))
	{
	  my_function_ra(l_a, l_b, lock);
	  lock++;
	}
      lock++;
      my_function_pb(l_a, l_b, lock);
    }
  while (l_b->next != l_b)
    {
      my_function_pa(l_a, l_b, lock);
      lock++;
    }
  return (0);
}

void		my_function_sb(t_list *l_a, t_list *l_b, int lock)
{
  t_list        *tmp;

  tmp = l_b->next;
  l_b->next = l_b->next->next;
  l_b->next->prev = l_b;
  tmp->next = l_b->next->next;
  tmp->prev = l_b->next;
  l_b->next->next->prev = tmp;
  l_b->next->next = tmp;
  if (lock == 0)
    {
      my_putstr("sb");
      lock = lock + 1;
    }
  else
    my_putstr(" sa");
}

void		my_function_ss(t_list *l_a, t_list *l_b, int lock)
{
  my_function_sa(l_a, l_b, lock);
  my_function_sb(l_a, l_b, lock);
  if (lock == 0)
    {
      my_putstr("ss");
      lock++;
    }
  else
    my_putstr(" ss");
}
