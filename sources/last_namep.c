/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_namep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 22:26:14 by mmouhssi          #+#    #+#             */
/*   Updated: 2016/09/19 13:40:41 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*last_namep(char *path)
{
	int i;

	i = 0;
	while (path[i] != '\0')
		i++;
	while (i > 0 && path[i] != '/')
		i--;
	path[i] == '/' ? i++ : 0;
	return (&path[i]);
}
