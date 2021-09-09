/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkramer <dkramer@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:17:11 by dagmarkrame   #+#    #+#                 */
/*   Updated: 2020/11/15 10:47:36 by dkramer       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) ||
	(c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}