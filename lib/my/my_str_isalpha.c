/*
** my_str_isalpha.c for ialpha in /u/all/pidoux_q/cu/rendu/piscine/Jour_07
** 
** Made by quentin pidoux
** Login   <pidoux_q@epitech.net>
** 
** Started on  Wed Oct 13 21:43:20 2010 quentin pidoux
** Last update Wed Oct 13 21:43:22 2010 quentin pidoux
*/

int		my_str_isalpha(char *str)
{
  int		i;
  int		is_num;

  i = 0;
  is_num = 1;
  if (str == 0 || str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (!(str[i] >= 'A' && str[i] <= 'z'))
        is_num = 0;
      i++;
    }
  return (is_num);
}