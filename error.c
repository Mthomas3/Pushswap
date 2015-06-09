/*
** error.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Sun Dec 14 02:11:27 2014 Thomas Martins
** Last update Sun Dec 14 02:11:27 2014 Thomas Martins
*/

#include "struct.h"

int	check_number(char *number)
{
  int	a;

  a = 0;
  if (number[a] == '-')
    a++;
  while (number[a] != '\0')
    {
      if (!my_function_number(number[a]))
	return (0);
      a++;
    }
  return (1);
}

int	my_function_number(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	my_function_error(char **argv)
{
  int	a;
  int	b;

  a = 1;
  while (argv[a])
    {
      if (!check_number(argv[a]))
	{
	  my_putstr("arguments error");
	  my_putchar('\n');
	  return (0);
	}
      a++;
    }
  return (1);
}
