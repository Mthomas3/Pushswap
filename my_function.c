/*
** my_function.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:49:17 2014 Thomas Martins
** Last update Fri Dec 12 16:49:17 2014 Thomas Martins
*/

int	my_putstr_two(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      if (str[a] >= 32 && str[a] < 127)
	{
	  my_putchar(str[a]);
	}
      else
	{
	  my_putchar('\\');
	  if ((str[a] >= 0 && str[a] <= 7))
	    {
	      my_putstr("00");
	      my_putnbr_base(str[a], "01234567");
	    }
	  else
	    {
	      my_putchar('0');
	      my_putnbr_base(str[a], "01234567");
	    }
	}
      a++;
    }
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

int	my_putnbr_long(long unsigned int nb)
{
  if (nb >= 10)
    my_putnbr_long(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb == 0)
    return (0);
}

int	my_putnbr_long_long(long long unsigned int nb)
{
  if (nb >= 10)
    my_putnbr_long_long(nb /10);
  my_putchar(48+ (nb %10));
  if (nb == 0)
    return (0);
}
