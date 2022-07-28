//Charles Kos (z5160675)
//27.07.2022

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_LEN 32

//Wait why do we even bother with this 'typedef' word?
//We could write the following 
//	struct date {
//
//	};
//
//	void q2(void) {
//		struct date Date;
//	}
//
//Sweet that looks fine, except its kind of annoying having to write struct every time you create something of type struct date
//Using typedef means we don't have to write 'struct' all the time

typedef struct date Date;

//Hectic, regular old struct with some variables in it
struct date {
	int day;
	int month;
	int year;
};

typedef struct pet Pet;

//How good is this? You can do struct-ception
struct pet {
	char name[MAX_LEN];
	char breed[MAX_LEN];
	int age;
	Date dateOfBirth;

};


void q2(void) {

	Pet myPet;

	strcpy(myPet.name, "Boris");
	strcpy(myPet.breed, "dog");
	myPet.age = 7;

	//You can access structs inside of structs, just daisy chain the . operator
	myPet.dateOfBirth.day = 1;
	myPet.dateOfBirth.month = 4;
	myPet.dateOfBirth.year = 1988;

}