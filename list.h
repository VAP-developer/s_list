// HEADER LIST

#ifndef LIST_H
# define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sanitizer/asan_interface.h>

typedef struct s_list
{
	int	data;
	struct s_list	*next;
}	t_list;

#endif
