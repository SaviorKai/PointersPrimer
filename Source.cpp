/// A project to review Pointers(*) and References(&)

#include <iostream>
#include "Source.h"

/// NOTES ///
/*

=== Pointers ====
When declaring pointers, you need to use the * before the var name. Important to always Initialize a pointer with nullptr if not defined immediately.
When calling a pointer, you need to use the * if you want the value of the address, or exclude the * if you only want the address its pointing to (it's default value).
When setting a pointer address, you need to use a & before the value, to get the address. You however don't need to place a * before the pointer var name. (example: valPtr = &val1;)
When setting a pointer value, you don't need to use & before the value, since we're not setting a address, but we need to ensure we use a * before the var name, to show we're accessing the value. (example: *valPtr = 3;)

=== References ====
When declaring a reference, you need to use the & before the var name, followed by the var it will reference. (Reference cannot be created as a null value and must be initialized).
When calling a reference, you need to use the & infront of the var name, if you want to get the address of the referece, or exclude the & if you want to get the value of the address. (example: varRef, will give you value. $varRef, will give you address). 
A reference cannot be reset, and has to be initialized on creation. 
A reference is similar to a standard var in behaviour, apart from that it can't be null.

=== When to use Pointer or Reference ===

- GOLDEN RULE: Use References, unless you can't. 

- References are newer, and safer (since C++)

- Pointers provide backwards-compatibility

- Pointers are more powerful (and dangerous, because we can change them). 


///===== IMPORTANT NOTE ABOUT POINTERS / REFERENCES ===== //
//NOTE: (Animal lalalal) = create instance. Thus, function(Animal lalalal){return;} = create instance and return.
//NOTE: (Animal* lalalal) = create pointer. Thus, function(Animal* lalalal){return;} = create pointer and return.
//NOTE: (Animal& lalalal) = create reference. Thus, function(Animal& lalalal){return;} = create reference and return.

*/


///Declare Values
int val1 = 1;
int val2 = 2;
int* valPtr = &val1;
int& valRef = val1;

//Declare Functions
void PrintMain();

int main()
{
	std::cout << "===== PRINT MAIN 1: =====" << std::endl;
	PrintMain();
	
	valPtr = &val2;
	std::cout << "===== PRINT MAIN 2: =====" << std::endl;
	PrintMain();

	*valPtr = 3;
	std::cout << "===== PRINT MAIN 3: =====" << std::endl;
	PrintMain();

	valRef = 5;
	std::cout << "===== PRINT MAIN 4: =====" << std::endl;
	PrintMain();

	valPtr = &valRef;
	std::cout << "===== PRINT MAIN 5: =====" << std::endl;
	PrintMain();

	return 0;
}

void PrintMain()
{
	std::cout << "Values: " << std::endl;
	std::cout << "val1: " << val1 << ", val2: " << val2 << ", valPtr: " << *valPtr << ", valRef: " << valRef << std::endl << std::endl;

	std::cout << "Addresses: " << std::endl;
	std::cout << "val1: " << &val1 << ", val2: " << &val2 << ", valPtr: " << valPtr << ", valRef: " << &valRef << std::endl << std::endl << std::endl;
}
