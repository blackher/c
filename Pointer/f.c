void func(void *pv)
{
	/* *pv = 'A' is illegal */
	:wq

	char *pchar = pv;
	*pchar = 'A';
}

int main(void)
{
	char c;
	func(&c);
}
