#ifndef HYENA_H
#define HYENA_H

#include "Animal.h"
#include <string>

// Hyena class representing a hyena in the zoo, inherits from Animal base class
class Hyena : public Animal {
private:
    // Static counter for generating unique hyena IDs
    static int nextId;

public:
    // Constructor initializes a new hyena with its basic attributes
    Hyena(int age, std::string gender, std::string birthSeason,
          std::string color, double weight, std::string origin);
    
    // Generate ISO 8601 formatted birthday based on age and birth season
    std::string genBirthDay() const override;
    // Generate unique ID in format HYxx where xx is a sequential number
    std::string genUniqueID() override;
    // Get formatted description of the hyena including all attributes
    std::string getDescription() const override;
};

#endif // HYENA_H
