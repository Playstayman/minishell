#include "../hell.h"

void	freeargs(char ***res)
{
	int	j;

	j = 0;
	if (*res)
	{
		while ((*res)[j])
		{
			free ((*res)[j]);
			(*res)[j] = NULL;
			j++;
		}
	}
	free (*res);
	*res = NULL;
}

void	fth(t_hell *hell, t_env **envire)
{
	if (!hell)
		return ;
	if (hell->env != *envire)
		*envire = hell->env;
	if (hell->path)
		free(hell->path);
	if (hell->arguments)
		freeargs(&hell->arguments);
	if (hell->next)
		fth(hell->next, envire);
	free(hell);
}
