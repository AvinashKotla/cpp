#include <iostream>
using namespace std;







/*
conversion to int from smaller integer type or to double from float is called promotion
1. If a negative integer value is converted to an unsigned type, the resulting value corresponds to its 2's complement bitwise representation 
   (i.e., -1 becomes the largest value representable by the type, -2 the second largest, ...).
2. The conversions from/to bool consider false equivalent to zero (for numeric types) and to null pointer (for pointer types); 
   true is equivalent to all other values and is converted to the equivalent of 1.
3. If the conversion is from a floating-point type to an integer type, the value is truncated (the decimal part is removed). 
   If the result lies outside the range of representable values by the type, the conversion causes undefined behavior.
4. If the conversion is between numeric types of the same kind (integer-to-integer or floating-to-floating), 
   the conversion is valid, but the value is implementation-specific (and may not be portable).

1. Null pointers can be converted to pointers of any type
2. Pointers to any type can be converted to void pointers.
3. Pointer upcast: pointers to a derived class can be converted to a pointer of an accessible and unambiguous base class, 
   without modifying its const or volatile qualification.


*/









int main()
{
	short a = 10;
	int b;
	b = a; // this statement does implicit type conversion (standard conversion), from short to int (how? check once)

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}