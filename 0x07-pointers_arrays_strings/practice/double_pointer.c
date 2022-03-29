#include <stdio.h>

int main()
{
	int num = 123;

	//nomal pointer
	int *ptr;

	//doubly ponter
	int **ptr2;

	//assigning addresses
	ptr = &num;
	ptr2 = &ptr;

	/* Possible ways to find value of variable num*/
	printf("\n Value of num is: %d", num);  ///gues: 123
	printf("\n Value of num using ptr is: %d", *ptr); //gues 123
	printf("\n Value of num using ptr2 is: %d", **ptr2); //gues 123

	/*Possible ways to find address of num*/
	printf("\n Address of num is: %p", &num); //gues XX771230
	printf("\n Address of num using ptr is: %p", ptr);  //gues XX771230
	printf("\n Address of num using ptr2 is: %p", *ptr2); // gues XX771230

	/*Find value of pointer*/
	printf("\n Value of Pointer ptr is: %p", ptr);   //gues XX771230
	printf("\n Value of Pointer ptr using ptr2 is: %p", *ptr2);  //XX771230

	/*Ways to find address of pointer*/
	printf("\n Address of Pointer ptr is:%p",&ptr);   //gues XX7712308
	printf("\n Address of Pointer ptr using ptr2 is:%p",ptr2); // gues XX7712308

	/*Double pointer value and address*/
	printf("\n Value of Pointer ptr2 is:%p",ptr2);   //gues XX7712308
	printf("\n Address of Pointer ptr2 is:%p",&ptr2); ///gues XX77123089

	printf("\n");
}
