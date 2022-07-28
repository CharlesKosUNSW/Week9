//Charles Kos (z5160675)
//27.07.2022

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_LEN 32

//Creating our own data types now
//typedef is used much like how int num defines the data type of num to be int
//So is Pet an int? a double? What is a 'struct pet'?
typedef struct pet Pet;

//The data type of Pet cannot just be struct, since there is no one true struct
//Structs can come in many shapes and sizes so we need to be specific about what particular struct we are saying
//that pet is defined by
//In this case the data type of Pet is defined by 'struct pet'
struct pet {
	char name[MAX_LEN];
	char breed[MAX_LEN];
	int age;
};

//So how does this look in memory? Each byte is stored side-by-side.
//So sizeof(struct pet) is 32*1 + 32*1 + 1*4 = 68 bytes on my machine (remember sizeof(int) varies)
// [name[0]]  [name[1]] [name[2]]...[name[31]] [breed[0]] [breed[1]] ... [breed[31]] [age]


void q1(void) {

	//Lets make use of this new data type. Before we can do anything with it, we must create it
	Pet myPet;

	//Lets give it a name. How could we 'get into' myPet to change name? Use the . operator
	//myPet.name 'retrieves' name from myPet. So when we give myPet.name to strcpy(), we're really just providing char name[]
	strcpy(myPet.name, "Boris");
	strcpy(myPet.breed, "dog");
	myPet.age = 7;

}