#include <cstdlib>
#include <ctime>

#include "Zoo.h"
#include "Animal.h"

Animal* createRandomAnimal();

int main() {
	Zoo* zoo = new Zoo();

	cout << "How many animals are in the zoo? (10 animals max): ";
	int num;
	cin >> num;

	// Clear the buffer and ask again until input is valid
	while (!cin.good() || num < 0 || num > kZooSize) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Please enter a valid number. (0~10)\n";
		cin >> num;
	}
	
	// initialize random seed
	srand(time(NULL));

	// fill Zoo with random animals
	for (int i = 0; i < num; i++) {
		Animal* animal = createRandomAnimal();
		zoo->addAnimal(animal);
	}

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
	}
}