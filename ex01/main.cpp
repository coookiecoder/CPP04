#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
    const int ARR_SIZE = 100;
    Animal* animals[ARR_SIZE];

    for (int i = 0; i < ARR_SIZE / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = ARR_SIZE / 2; i < ARR_SIZE; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < ARR_SIZE; ++i) {
        delete animals[i];
    }

    return 0;
}