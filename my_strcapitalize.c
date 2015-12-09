char	*my_strdup(char *);

int	my_isaff(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      return (1);
    }
  return (0); 
}

int	 my_isnum(char c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  return (0); 
}

void	 my_strcapitalize(char *str2)
{
  char	*str;
  int	i;
  
  str = my_strdup(str2);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A'  && str[i] <= 'Z')
	{
	  str[i]  = str[i] + 32;
	}
      i = i + 1;
    }
  i = 0;
  if (my_isaff(str[i]))
    {
      str[i]  = str[i] - 32;
    }
  my_putchar(str[i]);
  i = 1;
  while (str[i] != '\0')
    {
      if (my_isaff(str[i]) && !(my_isaff(str[i-1])))
	{
	  str[i] = str[i] - 32;
	}
      my_putchar(str[i]);
      i = i + 1;
    }
}
