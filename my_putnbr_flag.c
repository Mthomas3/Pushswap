/*
** my_putnbr_flag.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:50:26 2014 Thomas Martins
** Last update Fri Dec 12 16:50:26 2014 Thomas Martins
*/

int	my_putnbr_flag(long unsigned int nb)
{
  if (nb >= 10)
    my_putnbr_flag(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb == 0)
    return (0);
}

int	my_function_two(void *ptr)
{
  my_putstr("0x");
  my_putnbr_base(ptr, "0123456789ABCDEF");
}

void            my_putnbrbase_long(long long int nb, char *base)
{
  int           result;
  int           dividor;
  int           size_base;

  size_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  dividor = 1;
  while ((nb / dividor) >= size_base)
    dividor = dividor * size_base;
  while (dividor > 0)
    {
      result = (nb / dividor) % size_base;
      my_putchar(base[result]);
      dividor = dividor / size_base;
    }
}
