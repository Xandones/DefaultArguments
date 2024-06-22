#include <iostream>

void Coordinates(int X, int Y = 99, int Z = 99);
/*
* It's possible to set default arguments to simplify using functions (use
* default values). You doesn't need to set all the parameters of the function, 
* but you need to set the first argument on the right. If you have (like in this 
* example) 3 parameters you need to set the third and the second but you cannot 
* set only the first and the second). It's also possible to set only the third 
* parameter in this case.
*/

int main()
{
	Coordinates(4);
}

void Coordinates(int X, int Y, int Z)
{
	X *= 10;
	Y *= 10;
	Z *= 10;
	printf("(%d - %d - %d)\n", X, Y, Z);
}
