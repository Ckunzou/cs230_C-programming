# include <stdio.h>
int main()
{
	int a;
	short int b;
	unsigned int c;
	char d;
	// size-of displays the size of the data type
	printf("Size of long int= %u bytes\n",sizeof(a));
	printf("Size of short int = %d bytes \n", sizeof(b));
	printf("Size of unsigned int = %u bytes\n",sizeof(c));
	printf("Size of char = %d bytes \n",sizeof(d));
	return 0;
}