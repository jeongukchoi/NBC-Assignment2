#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal() {
		 //cout << "Destructing (Animal): " << this << endl;
	}
};

class Dog : public Animal {
	void makeSound();
	~Dog();
};

class Cat : public Animal {
	void makeSound();
	~Cat();
};

class Cow : public Animal {
	void makeSound();
	~Cow();
};


#endif 
