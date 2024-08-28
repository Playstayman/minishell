#include "../hell.h"

t_hell	*init_hell(t_env *env)
{
	t_hell	*ret;

	ret = ft_calloc(sizeof(t_hell), 1);
	if (!ret)
		return (NULL);
	ret->arguments = NULL;
	ret->outfile = 0;
	ret->infile = 0;
	ret->exit = 0;
	ret->run = 1;
	ret->pipe = 0;
	ret->env = env;
	ret->next = NULL;
	ret->path = NULL;
	return (ret);
}
