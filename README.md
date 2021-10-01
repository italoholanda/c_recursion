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
You can only use the arithmetic operators `-` and `+`. And Else is banned.

- Sum_I) An iterative function that returns `a + b`;
- Sum_R) An recursive function that returns `a + b`;
- Multi_I) An iterative function that returns `a * b`;
- Multi_R) An recursive function that returns `a * b`;

> #DataStructures
> #ComputerScience
> #C
