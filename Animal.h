#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <chrono>

class Animal {
protected:
    int age;
    std::string gender;
    std::string birthSeason;
    std::string color;
    double weight;
    std::string origin;
    std::string species;
    std::string name;
    std::string id;
    std::string arrivalDate;

public:
    Animal(int age, std::string gender, std::string birthSeason, 
           std::string color, double weight, std::string origin, std::string species);
    
    virtual ~Animal() = default;

    // Method to generate birthday in ISO 8601 format
    virtual std::string genBirthDay() const = 0;
    // Method to generate unique ID for each animal
    virtual std::string genUniqueID() = 0;
    // Method to get full description of the animal
    virtual std::string getDescription() const = 0;

    // Get the animal's assigned name
    std::string getName() const { return name; }
    // Get the animal's unique identifier
    std::string getId() const { return id; }
    // Get the animal's species
    std::string getSpecies() const { return species; }
    // Set the animal's name
    void setName(const std::string& newName) { name = newName; }
};

#endif // ANIMAL_H
