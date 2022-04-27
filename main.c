#include "sbi.h"

void Putchar(char ch)
{
	SBI_PUTCHAR(ch);
}

void Puts(char *s)
{
	while (*s)
		Putchar(*s++);
}

void main()
{
	Puts("羊羊爱轩轩！\n");
	while(1);
}
