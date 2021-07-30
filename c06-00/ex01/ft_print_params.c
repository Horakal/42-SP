#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;
	int	z;

	count = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			z = 0;
			while (argv[count][z] != '\0')
			{
				write(1, &argv[count][z], 1);
				z++;
			}
			write(1, "\n", 1);
			count++;
		}	
	}
	return (0);
}
