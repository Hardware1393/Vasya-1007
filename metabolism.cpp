#include <string>

float energy = 100.0;

void processFood(std::string food) {
    if (food == "Кофе") energy += 50.0;
    else energy -= 10.0;
}