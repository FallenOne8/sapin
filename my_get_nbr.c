#include <stdio.h>

int	power(int nbr, int pow)
{
  int	i;
  int	nbr2;

  nbr2 = nbr;
  i = 1;
  if (pow == 0)
    {
      return (1);
    }
  else
    {
      while (i < pow)
	{
	  nbr2 = nbr2 * nbr;
	  i = i + 1;
	}
    }
  return (nbr2);
}

int	 my_get_nbr(char *str)
{
  int	i;
  int	nbr;
  int	nbrlen;
  int	neg;

  nbrlen = my_strlen(str);
  nbr = 0;
  i = 0;
  neg = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	{
	  neg = neg + 1;
	}
      i = i + 1;
    }
  neg = power(-1, neg);
  while (i < nbrlen)
    {
      if (!my_isnum(str[i]))
	{
	  return (nbr*neg);
	}
      nbr = nbr * 10;
      nbr = nbr + (str[i] - 48);
      i = i + 1;
    }
  return (nbr*neg);
}
