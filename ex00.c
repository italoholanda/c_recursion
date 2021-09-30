/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:06:17 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/30 19:46:01 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IMPORTANT: This is not a 42.fr exercise

#include <stdio.h>

// Recursive
int func1(int n)
{
	if (n <= 0)
		return (0);
	return (n + func1(n-1));
}

// Iterative
int func2(int n)
{
	int tmp = 0;

	while (n > 0)
	{
		tmp += n;
		n--;
	}

	return (tmp);
}

int main()
{
	printf("%i", func1(5));
	printf("%c", '\n');
	printf("%i", func2(5));
	printf("%s", "\n--\n");

	printf("%i", func1(25));
	printf("%c", '\n');
	printf("%i", func2(25));
	printf("%s", "\n--\n");

	printf("%i", func1('a'));
	printf("%c", '\n');
	printf("%i", func2('a'));
	printf("%s", "\n--\n");

	printf("%i", func1(0));
	printf("%c", '\n');
	printf("%i", func2(0));
	printf("%s", "\n--\n");

	printf("%i", func1(0-8));
	printf("%c", '\n');
	printf("%i", func2(0-8));
	printf("%c", '\n');
	return (0);
}
