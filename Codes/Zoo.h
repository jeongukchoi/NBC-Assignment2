#ifndef ZOO_H_
#define ZOO_H_

#include "Animal.h"

const int kZooCapacity = 100;

class Zoo {
private:
    Animal* animals[kZooCapacity] = { nullptr }; // pointer array to save the Animal objects
    int animalCount = 0; // current number of Animals in the array
public:
    // Add an Animal pointer to the array
    void addAnimal(Animal* animal);

    // call makeSound() on each Animal in the array
    void performActions();

    ~Zoo();
};


#endif