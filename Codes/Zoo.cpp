#include "Zoo.h"

// Add an Animal pointer to the array
void Zoo::addAnimal(Animal* animal) {
    if (animalCount < kZooSize) {
        animals[animalCount++] = animal;
    }
    else {
        cout << "The Zoo is at capacity!" << endl;
    }
}

void Zoo::performActions() {
    // Call makeSound() on each Animal in the array
    for (int i = 0; i < animalCount; i++) {
        animals[i]->makeSound();
    }
}

Zoo::~Zoo() {
    // Call destructor on each animal in the array when Zoo destructor is performed
    for (Animal* a : animals) {
        if (a != nullptr) {
             //cout << "Destructing (from Zoo): " << a << endl;
            delete a;
        }
    }
    // cout << "Zoo destructor\n";
}