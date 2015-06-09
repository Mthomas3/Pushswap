/*
** list.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:50:01 2014 Thomas Martins
** Last update Fri Dec 12 16:50:01 2014 Thomas Martins
*/

#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

t_list		*init_root()
{
  t_list	*root;

  if ((root = malloc(sizeof(*root))) == NULL)
    return (NULL);
  root->prev = root;
  root->next = root;
  return (root);
}

void		printf_list(t_list *root)
{
  t_list	*tmp;

  tmp = root;
  while (tmp->next != root)
    {
     my_printf("%d\n", tmp->next->value);
      tmp = tmp->next;
    }
}

void		delete_list(t_list *root)
{
  t_list	*tmp;

  tmp = root;
  while (tmp->next != root)
    {
      delete_first(tmp);
      tmp = tmp->next;
    }
  root = NULL;
  free(root);
}

void		add_list_before(t_list *root, int value)
{
  add_after(root, value);
}

void		add_list(t_list *root, int value)
{
  add_before(root, value);
}
