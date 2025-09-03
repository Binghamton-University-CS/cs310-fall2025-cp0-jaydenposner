#include "AnimalsInZoo.h"
#include<string>
#include<iostream>
AnimalsInZoo::AnimalsInZoo(const Animal &animal){
	numAnimals =1;
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
