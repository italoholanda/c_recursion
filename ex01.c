/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:49:39 by igomes-h          #+#    #+#             */
/*   Updated: 2021/10/01 15:52:44 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IMPORTANT: This is not a 42.fr exercise

#include <stdio.h>

// Iterative
int sum_i(int a, int b)
{
	while (b > 0)
	{
		b--;
		a++;
	}
	return (a);
}

// Recursive
int sum_r(int a, int b)
{
	if (b < 0)
		return (0);
	if (a == 0)
		return (b);
	if (b == 0)
		return (a);
	return (sum_r(++a, --b));
}

int main()
{
	// Test 1
	printf("%i", sum_i(5, 6));
	printf("%c", '\n');
	printf("%i", sum_r(5, 6));
	printf("%s", "\n--\n");
	// Test 2
	printf("%i", sum_i(5, 0));
	printf("%c", '\n');
	printf("%i", sum_r(5, 0));
	printf("%s", "\n--\n");
	// Test 3
	printf("%i", sum_i(0, 3));
	printf("%c", '\n');
	printf("%i", sum_r(0, 3));
	printf("%s", "\n--\n");
	// Test 4
	printf("%i", sum_i(-1, 0));
	printf("%c", '\n');
	printf("%i", sum_r(-1, 0));
	printf("%s", "\n--\n");
	// Test 5
	printf("%i", sum_i(0, -1));
	printf("%c", '\n');
	printf("%i", sum_r(0, -1));
	printf("%s", "\n--\n");
}
