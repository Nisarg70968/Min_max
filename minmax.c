// WAP to Find max. from given 2 no. using ternary operator.

#include <stdio.h>
int main()
{
	int a, b;

	printf("Enter first number:");
	scanf("%d", &a);

	printf("Enter second number:");
	scanf("%d", &b);

	int max = (a > b) ? a : b;

	printf("Max number is :%d", max);

	return 0;
}

/*

Output:

Enter first number:78
Enter second number:45
Max number is :78

*/

// WAP to Find min. from given 3 no. using nested if else.

#include <stdio.h>

int main()
{
	double a, b, c;

	printf("Enter the first number: ");
	scanf("%lf", &a);

	printf("Enter the second number: ");
	scanf("%lf", &b);

	printf("Enter the third number: ");
	scanf("%lf", &c);

	if (a <= b)
	{
		if (a <= c)
		{
			printf("The minimum number is: %lf\n", a);
		}
		else
		{
			printf("The minimum number is: %lf\n", c);
		}
	}
	else
	{
		if (b <= c)
		{
			printf("The minimum number is: %lf\n", b);
		}
		else
		{
			printf("The minimum number is: %lf\n", c);
		}
	}

	return 0;
}

/*

Output:

Enter the first number: 89
Enter the second number: 56
Enter the third number: 78
The minimum number is: 56.000000

*/

// WAP to Find max. from given 4 no. using nested if else.

#include <stdio.h>

int main()
{
	double a, b, c, d;

	printf("Enter the first number: ");
	scanf("%lf", &a);

	printf("Enter the second number: ");
	scanf("%lf", &b);

	printf("Enter the third number: ");
	scanf("%lf", &c);

	printf("Enter the fourth number: ");
	scanf("%lf", &d);

	if (a >= b)
	{
		if (a >= c)
		{
			if (a >= d)
			{
				printf("The maximum number is: %lf\n", a);
			}
			else
			{
				printf("The maximum number is: %lf\n", d);
			}
		}
		else
		{
			if (c >= d)
			{
				printf("The maximum number is: %lf\n", c);
			}
			else
			{
				printf("The maximum number is: %lf\n", d);
			}
		}
	}
	else
	{
		if (b >= c)
		{
			if (b >= d)
			{
				printf("The maximum number is: %lf\n", b);
			}
			else
			{
				printf("The maximum number is: %lf\n", d);
			}
		}
		else
		{
			if (c >= d)
			{
				printf("The maximum number is: %lf\n", c);
			}
			else
			{
				printf("The maximum number is: %lf\n", d);
			}
		}
	}

	return 0;
}

/*

Output:

Enter the first number: 56
Enter the second number: 45
Enter the third number: 34
Enter the fourth number: 89
The minimum number is: 89.000000

*/

// WAP to Find min. from given 5 no. using nested if else.

#include <stdio.h>

int main()
{
	float a, b, c, d, e;

	printf("Enter five numbers: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	if (a <= b)
	{
		if (a <= c)
		{
			if (a <= d)
			{
				if (a <= e)
				{
					printf("The minimum number is: %f\n", a);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
			else
			{
				if (d <= e)
				{
					printf("The minimum number is: %f\n", d);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
		}
		else
		{
			if (c <= d)
			{
				if (c <= e)
				{
					printf("The minimum number is: %f\n", c);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
			else
			{
				if (d <= e)
				{
					printf("The minimum number is: %f\n", d);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
		}
	}
	else
	{
		if (b <= c)
		{
			if (b <= d)
			{
				if (b <= e)
				{
					printf("The minimum number is: %f\n", b);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
			else
			{
				if (d <= e)
				{
					printf("The minimum number is: %f\n", d);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
		}
		else
		{
			if (c <= d)
			{
				if (c <= e)
				{
					printf("The minimum number is: %f\n", c);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
			else
			{
				if (d <= e)
				{
					printf("The minimum number is: %f\n", d);
				}
				else
				{
					printf("The minimum number is: %f\n", e);
				}
			}
		}
	}

	return 0;
}
/*

Output:

Enter five numbers: 98 87 65 54 32
The minimum number is: 32.000000

*/

// WAP to Find max. from 3 no. using ternary operator.

#include <stdio.h>

int main()
{
	int a, b, c, max;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	printf("The maximum number is: %d\n", max);

	return 0;
}

/*

Output:

Enter three numbers: 54 87 98
The maximum number is: 98

*/

// WAP to Find max. from 4 no. using ternary operator.

#include <stdio.h>

int main()
{
	int a, b, c, d;
	int max;

	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));

	printf("The maximum number is: %d\n", max);

	return 0;
}

/*

Output:

Enter four numbers: 21 54 87 98
The maximum number is: 98

*/

// WAP to Find max. from 5 no. using ternary operator.

#include <stdio.h>

int main()
{
	int a, b, c, d, e, max;

	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	max = (a > b)	? (a > c ? (a > d ? (a > e ? a : e) : (d > e ? d : e)) : (c > d ? (c > e ? c : e) : (d > e ? d : e)))
		  : (b > c) ? (b > d ? (b > e ? b : e) : (d > e ? d : e))
					: (c > d ? (c > e ? c : e) : (d > e ? d : e));

	printf("The maximum number is: %d\n", max);

	return 0;
}

/*

Output:

Enter five numbers: 23 65 54 87 98
The maximum number is: 98

*/
