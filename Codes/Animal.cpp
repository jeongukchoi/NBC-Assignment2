#include "Animal.h"

void Dog::makeSound() {
	cout << "Dog: Woof!\n";
}

Dog::~Dog() {
	// cout << "Dog destructor\n";
}

void Cat::makeSound() {
	cout << "Cat: Meow!\n";
}

Cat::~Cat() {
	// cout << "Cat destructor\n";
}

void Cow::makeSound() {
	cout << "Cow: Moo!\n";
}

Cow::~Cow() {
	// cout << "Cow destructor\n";
}
