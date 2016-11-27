#include <stdio.h>
#include "LinkedList.h"

int main(void)
{
	List my_list;
	int input_data;

	init_list(&my_list);

	while (1)
	{
		printf("input a number : ");
		scanf("%d", &input_data);

		if (input_data <= 0)
			break;

		add_to_list(&my_list, input_data);
	}

	print_list(&my_list);
	delete_list(&my_list);

	return 0;
}