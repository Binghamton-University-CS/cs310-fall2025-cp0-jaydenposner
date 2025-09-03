#include "Animal.h"
#ifndef ANIMALS_H
#define ANIMALS_H
class AnimalsInZoo{

public:
	AnimalsInZoo(const Animal &animal);
	AnimalsInZoo();
	void display();
private:
	int numAnimals;
	Animal animal;
};
#endif
