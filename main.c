#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_program	program;

	start_main(&program, argc, argv);
	init(&program, argc, argv);
	if (is_array_sorted(program.stack_a, program.size_a) == 1)
	{
		free_program(&program);
		return (0);
	}
	find_duplicates(program.stack_a, program.size_a);
	main_support(&program);
	free_program(&program);
	return (0);
}
