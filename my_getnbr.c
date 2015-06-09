/*
** my_getnbr.c for  in /home/mart_4/rendu/CPE_2014_Pushswap
** 
** Made by Thomas Martins
** Login   <mart_4@epitech.eu>
** 
** Started on  Fri Dec 12 16:50:16 2014 Thomas Martins
** Last update Fri Dec 12 16:50:16 2014 Thomas Martins
*/

int     my_getnbr(char *str)
{
  int   i;
  int   nb;
  int   c;

  c = 0;
  nb = 0;
  i = 0;
  while (str[i] == 45)
    {
      c = c + 1;
      i = i + 1;
    }
  while (str[i] >= 48 && str[i] <= 57)
    if (nb <= 2147483647)
      {
        nb = nb * 10;
        nb = nb + str[i] - 48;
        i = i + 1;
      }
    else
      return (0);
  if (c % 2 == 1)
    nb = -nb;
  return (nb);
}
