int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_printf("Not enough arguments");
		exit(1);
	}
	push_swap(argv);
	return (0);
}
