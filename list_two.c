/*
** list_two.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:49:08 2014 Thomas Martins
** Last update Fri Dec 12 16:49:08 2014 Thomas Martins
*/

#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

void		delete_elem(t_list *elem)
{
  elem->prev->next = elem->next;
  elem->next->prev = elem->prev;
  free(elem);
}

void		delete_first(t_list *root)
{
  if (root->next != root)
    delete_elem(root->next);
}

void		delete_last(t_list *root)
{
  if (root->prev != root)
    delete_elem(root->prev);
}

void		*first_elem(t_list *root)
{
  if (root->next != root)
    return (root->next);
  else
    return (NULL);
}

void		*last_elem(t_list *root)
{
  if (root->prev != root)
    return (root->prev);
  else
    return (NULL);
}
