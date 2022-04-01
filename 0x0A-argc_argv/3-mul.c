<<<<<<< HEAD
[master 3d26333] 3 commit
 1 file changed, 1 insertion(+)
 create mode 100755 0x0A-argc_argv/3-mul.c
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
>>>>>>> 001940f6c608a048f65e3dd3e84744ed3466bf9c
