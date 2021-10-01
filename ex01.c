/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:49:39 by igomes-h          #+#    #+#             */
/*   Updated: 2021/10/01 16:25:13 by igomes-h         ###   ########.fr       */
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

// Iterative
int multi_i(int a, int b)
{
	int tmp;

	tmp = 0;
	while (b > 0)
	{
		b--;
		tmp = sum_i(tmp,a);
	}
	return (tmp);
}

// Recursive
int multi_r_aux(int a, int b, int m)
{
	if (a == 0 || b == 0)
		return (m);
	return (multi_r_aux(a, --b, sum_r(m,a)));
}

int multi_r(int a, int b)
{
	if (b < 0)
		return (0);
	return (multi_r_aux(a, b, 0));
}

int main()
{
	// SumI and SumR Tests
	printf("%s", "SumI and SumR");
	printf("%c", '\n');
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

	// MultiI and MultiR Tests
	printf("%s", "SumI and SumR");
	printf("%c", '\n');
	// Test 1
	printf("%i", multi_i(5, 5));
	printf("%c", '\n');
	printf("%i", multi_r(5, 5));
	printf("%s", "\n--\n");
	// Test 2
	printf("%i", multi_i(-5, -5));
	printf("%c", '\n');
	printf("%i", multi_r(-5, -5));
	printf("%s", "\n--\n");
	// Test 3
	printf("%i", multi_i(0, -5));
	printf("%c", '\n');
	printf("%i", multi_r(0, -5));
	printf("%s", "\n--\n");
	// Test 4
	printf("%i", multi_i(28, 45));
	printf("%c", '\n');
	printf("%i", multi_r(28, 45));
	printf("%s", "\n--\n");
	// Test 5
	printf("%i", multi_i(28, 0));
	printf("%c", '\n');
	printf("%i", multi_r(28, 0));
	printf("%s", "\n--\n");
}
