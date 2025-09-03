#include "AnimalsInZoo.h"
#include<string>
#include<iostream>
AnimalsInZoo::AnimalsInZoo(Animal animal){
	numAnimals =1;
	animal = animal;
}
AnimalsInZoo::AnimalsInZoo(){
	numAnimals=0;
}
void AnimalsInZoo::display(){
	std::cout<<numAnimals;
	if(numAnimals==1){
	  animal.display();
	}
}
