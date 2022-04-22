#include <unistd.h>

int main(int argc, char *argv[])
{
	int	line;
	int	str;

	line = 1;
	while (line < argc)
	{
		str = 0;
		while (argv[line][str] != '\0')
		{
			write (1, &argv[line][str], 1);
			str ++;
		}
		write(1, "\n", 1);
		line ++;
	}
	return (0);
}
