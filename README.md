# C language recursion

This package contains hypothetical exercises involving repetition structures, which make use of recursion.

## Content

<h3>
	<a href="./ex00.c">Exercise 00</a>
</h3>

Convert the following recursive function to an iterative function.

```
int func (int n)
{
	if (n <= 0)
		return (0);
	return (n + func(n-1));
}
```
<h3>
	<a href="./ex01.c">Exercise 01</a>
</h3>

Write the following functions. They all take two integers as params `a, b > 0` and return an integer.
You can only use these arithmetic operators: `-` and `+`.

- **sum_I()** An iterative function that returns `a + b`;
- **sum_R()** An recursive function that returns `a + b`;
- **multi_I()** An iterative function that returns `a * b`;
- **multi_R()** An recursive function that returns `a * b`;

<h3>
	<a href="./ex02.c">Exercise 02</a>
</h3>

Create the following recursive functions:

- **smallest_digit()** returns the smallest digit of an integer;
- **biggest_digit()** returns the biggest digit of an integer;

```
// Exemple:
smallest_digit(1234); // returns 1
biggest_digit(1234); // returns 4
```

> #DataStructures
> #ComputerScience
> #C
