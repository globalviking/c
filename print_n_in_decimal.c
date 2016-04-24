#include <stdio.h>

/* printd: print n in decimal */
void printd(int n)
{
	if (n < 0) {
		putchar('0');
		n = -n;
	}
	if (n /10)
		printd(n /10);
	putchar(n % 10 + '0');
}
