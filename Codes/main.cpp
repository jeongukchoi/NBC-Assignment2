#include <cstdlib>
#include <ctime>
#include <string>

#include "Zoo.h"
#include "Animal.h"

Animal* createRandomAnimal();
int getInputNum(int max);

int main() {
	Zoo* zoo = new Zoo();

	int numAnimals = getInputNum(kZooCapacity);

	// initialize random seed
	srand(time(0));

	// fill Zoo with random animals
	for (int i = 0; i < numAnimals; i++) {
		Animal* animal = createRandomAnimal();
		zoo->addAnimal(animal);
	}
	cout << numAnimals << " Animals created." << endl;

	// animals make sound
	zoo->performActions();

	delete zoo;
	return 0;
}

// Pick a random number from 0 to 2 and create a different animal for each number
Animal* createRandomAnimal() {
	// Pick a random number from 0 to 2
	int r = rand() % 3;

	// 0 : Dog / 1 : Cat / 2 : Cow
	switch(r % 3) {
	case 0:
		return new Dog();

	case 1:
		return new Cat();

	case 2:
		return new Cow();

	default:
		return new Dog();
	}
}

// Get input that specifies the number of Animals
int getInputNum(int max) {
	bool valid = true;
	string inStr;
	do {
		if (!valid) cout << "INPUT NOT VALID!" << endl;

		// reset the flags
		valid = true;
		cin.clear();

		// Read input into a string
		cout << "How many animals are in the zoo? (0~" << max << ")" << endl;
		getline(cin, inStr);

		// 1. Invalid if input is not received OR any cin error flag is set
		if (inStr.empty() || !cin.good()) {
			valid = false;
			continue;
		}

		// 2. Invalid if input contains something that's not a digit (including minus)
		for (int i = 0; i < inStr.length(); i++) {
			if (!isdigit(inStr[i])) {
				valid = false;
				break;
			}
		}
	} while (!valid);

	int num = stoi(inStr);
	if (num > max) {
		cout << "Maximum capacity at the zoo: " << max << ". Creating " << max << " Animals." << endl;
		num = max;
	}

	return num;
}