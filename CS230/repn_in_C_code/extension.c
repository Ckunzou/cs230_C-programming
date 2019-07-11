
# include <stdio.h>
typedef unsigned char *byte_pointer;

// we will study pointers in the following lectures.
void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i = 0; i <len; i++)
			printf(" %.2x",start[i]);
	printf("\n");
}

int main()
{
	short int sx = -12345;
	unsigned short int usx = sx;
	int x = sx;
	unsigned int ux = usx;

	printf("Size of sx = %lu bytes\n",sizeof(sx));
	printf("Size of usx = %lu bytes \n",sizeof(usx));
	printf("Size of x = %lu bytes\n",sizeof(x));
	printf("Size of ux = %lu bytes \n",sizeof(ux));

	printf("sx = %d:\t",sx);
	show_bytes((byte_pointer)&sx, sizeof(short int));
	printf("usx = %d:\t",usx);
	show_bytes((byte_pointer)&usx, sizeof(unsigned short int));
	printf("x = %d:\t",x);
	show_bytes((byte_pointer)&x, sizeof(int));
	printf("ux = %d:\t",ux);
	show_bytes((byte_pointer)&ux, sizeof(unsigned int));
	
	return 0;
}
//Observe whether the byte-ordering is little-endian or big-endian
