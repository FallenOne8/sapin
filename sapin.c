void	ligne(int x, char c)
{
  int	i;

  i = 0;
  while (i < x)
    {
      my_putchar(c);
      i = i + 1;
    }
}

void	tronc(int size, int bas)
{
  int	i;

  i = 0;
  while (i < size)
    {
      ligne(bas/2 - size/2, ' ');
      ligne(size, '|');
      my_putchar('\n');
      i = i + 1;
    }
}

int	cbas(int x)
{
  int	n;
  int	e;
  int	f;
  int	t;
  int	z;
  int	i;

  n = ((3+x)*(4+x))/2-6;
  e = -1;
  f = 4;
  t = 4;
  z = 1;
  i = 1;
  while (i < n+1)
    {
      e = e + 2;
      if (i - 1 == t)
	{
	  e = e - 4;
	  if (z > 2)
	    {
	      e = e - 2;
	    }
	  f = f + 1;
	  t = t + f;
	  z = z + 1;
	}
      i = i + 1;
    }
  return (e);
  
}

void	sapin(int size)
{
  int	bas;
  int	etage;
  int	i;
  int	pallier;
  int	total;
  int	nbetages;

  if(size < 1)
    {
      my_putchar('\n');
      return;
    }
  i = 0;
  pallier = 4;
  total = 4;
  nbetages = ((size+3)*(size+3+1))/2-6;
  etage = 1;
  bas = cbas(size);
  while (i < nbetages)
    {
      ligne(bas/2 - etage/2, ' ');
      ligne(etage, '*');
      my_putchar('\n');
      if (i+1 == total)
	{
	  etage = etage - 4;
	  if(pallier-3 > 2)
	    {
	      etage = etage - 2;
	    }
	  pallier = pallier + 1;
	  total = total + pallier;
	}
      i = i + 1;
      etage = etage + 2;
    }
  tronc(size, bas);
}
