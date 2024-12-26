#include "Animal.h"

void Dog::makeSound() {
	cout << "Dog: Woof!\n";
}

Dog::~Dog() {
	 //cout << "Destructing: " << this << endl;
}

void Cat::makeSound() {
	cout << "Cat: Meow!\n";
}

Cat::~Cat() {
	 //cout << "Destructing: " << this << endl;
}

void Cow::makeSound() {
	cout << "Cow: Moo!\n";
}

Cow::~Cow() {
	 //cout << "Destructing: " << this << endl;
}
