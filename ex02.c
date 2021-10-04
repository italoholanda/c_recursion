/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:07:29 by igomes-h          #+#    #+#             */
/*   Updated: 2021/10/04 14:13:21 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IMPORTANT: This is not a 42.fr exercise

# include <stdio.h>

// smallest digit

int	smallest_digit(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	if (nbr < 10)
		return (nbr);
	if ((nbr % 10) <= smallest_digit(nbr / 10))
		return (nbr % 10);
	return smallest_digit(nbr / 10);
}

int	biggest_digit(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	if (nbr == 0)
		return (0);
	if ((nbr % 10) >= biggest_digit(nbr / 10))
		return (nbr % 10);
	return biggest_digit(nbr / 10);
}

int	main(void)
{
	// smallest Digit Tests
	printf("smallest Digit");
	printf("\n-------\n");
	// Test 1
	printf("55421:  ");
	printf("%i", smallest_digit(55421));
	printf("\n--\n");
	// Test 2
	printf("99989:  ");
	printf("%i", smallest_digit(99989));
	printf("\n--\n");
	// Test 3
	printf("-8945:  ");
	printf("%i", smallest_digit(-8945));
	printf("\n--\n");
	// Test 4
	printf("char '5' (Ascii index = 35):  ");
	printf("%i", smallest_digit('5')); // Ascii index = 35
	printf("\n--\n");
	// Test 5
	printf("99788 - 259 = 99529:  ");
	printf("%i", smallest_digit(99788 - 259)); // = 99529
	printf("\n\n");

	// biggest Digit Tests
	printf("biggest Digit");
	printf("\n-------\n");
	// Test 1
	printf("55421:  ");
	printf("%i", biggest_digit(55421));
	printf("\n--\n");
	// Test 2
	printf("99989:  ");
	printf("%i", biggest_digit(99989));
	printf("\n--\n");
	// Test 3
	printf("-8945:  ");
	printf("%i", biggest_digit(-8945));
	printf("\n--\n");
	// Test 4
	printf("char '5' (Ascii index = 35):  ");
	printf("%i", biggest_digit('5')); // Ascii index = 35
	printf("\n--\n");
	// Test 5
	printf("99788 - 259 = 99529:  ");
	printf("%i", biggest_digit(99788 - 259)); // = 99529
	printf("\n");
}
// 1234
// 10 % 10 = 0
// 10 / 10 = 1
