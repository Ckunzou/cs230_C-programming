# include <stdio.h>

int main()
{
	// we will learn more about "const" and "static" in the following weeks!
	static const int MAX_VAL  = 15213;
	static const int MIN_VAL = -15213;

	int tx = MAX_VAL, ty = MAX_VAL, tx_imp = MAX_VAL, ty_imp = MAX_VAL;
	 
	unsigned ux = MIN_VAL, uy = MIN_VAL, ux_imp = MIN_VAL, uy_imp = MIN_VAL;

	printf("Value of tx = %d \n",tx);
	printf("Value of ty = %d \n",ty);
	printf("Value of ux = %u \n",ux);
	printf("Value of uy = %u \n\n",uy);

	printf("Using Explicit Conversion\n\n");
	// Explicit Conversion
	tx = (int)ux;   	// converting unsigned to signed
	uy = (unsigned)ty;  // converting signed to unsigned

	// Implicit conversion
	tx_imp = ux_imp; 	// converting unsigned to signed
	uy_imp = ty_imp;	// converting signed to unsigned

	printf("Value of tx = %d \n",tx);
	printf("Value of ty = %d \n",ty);
	printf("Value of ux = %u \n",ux);
	printf("Value of uy = %u \n\n",uy);

	printf("Using Implicit Conversion\n\n");

	printf("Value of tx_imp = %d \n", tx_imp);
	printf("Value of ty_imp = %d \n", ty_imp);
	printf("Value of ux_imp = %u \n", ux_imp);
	printf("Value of uy_imp = %u \n", uy_imp);

	return 0;
}