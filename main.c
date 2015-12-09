int	main(int argc, char **argv)
{
  if(argc > 1)
    {
      sapin(my_get_nbr(argv[1]));
    }
  else
    {
      my_putstr("Usage : ./sapin size");
    }
}
