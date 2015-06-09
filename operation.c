/*
** operation.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:51:25 2014 Thomas Martins
** Last update Fri Dec 12 16:51:25 2014 Thomas Martins
*/

#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

void		my_function_rb(t_list *l_b)
{
  add_list(l_b, l_b->next->value);
  delete_first(l_b);
  my_putstr("rb");
  my_putchar(' ');
}

void		my_function_rr(t_list *l_a, t_list *l_b)
{
  add_list(l_a, l_a->next->value);
  add_list(l_b, l_b->next->value);
  delete_first(l_a);
  delete_first(l_b);
  my_putstr("rr");
  my_putchar(' ');
}

void		my_function_pa(t_list *l_a, t_list *l_b, int lock)
{
  t_list	*tmp;

  tmp = l_b->next;
  l_b->next = l_b->next->next;
  l_b->next->prev = l_b;
  tmp->next = l_a->next;
  tmp->prev = l_a;
  l_a->next->prev = tmp;
  l_a->next = tmp;
  if (lock == 0)
    {
      my_putstr("pa");
      lock++;
    }
  else
    my_putstr(" pa");
}

void		my_function_pb(t_list *l_a, t_list *l_b, int lock)
{
  t_list	*tmp;

  tmp = l_a->next;
  l_a->next = l_a->next->next;
  l_a->next->prev = l_a;
  tmp->next = l_b->next;
  tmp->prev = l_b;
  l_b->next->prev = tmp;
  l_b->next = tmp;
  if (lock == 0)
    {
      my_putstr("pb");
      lock++;
    }
  else
    my_putstr(" pb");
}

void		my_function_sa(t_list *l_a, t_list *l_b, int lock)
{
  t_list	*tmp;

  tmp = l_a->next;
  l_a->next = l_a->next->next;
  l_a->next->prev = l_a;
  tmp->next = l_a->next->next;
  tmp->prev = l_a->next;
  l_a->next->next->prev = tmp;
  l_a->next->next = tmp;
  if (lock == 0)
    {
      my_putstr("sa");
      lock = lock + 1;
    }
  else
    my_putstr(" sa");
}
