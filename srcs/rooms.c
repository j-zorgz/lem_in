#include <lem_in.h>

int	name_already_exists(const char *name, t_room const *rooms, size_t nbr_rooms)
{
	size_t	i;

	i = 0;
	while (i < nbr_rooms)
	{
		if (ft_strcmp(rooms[i].name, name) == 0)
			return (1);
		i++;
	}
	return (0);
}