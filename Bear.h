#ifndef BEAR_H
#define BEAR_H

#include "Animal.h"
#include <string>

// Bear class representing a bear in the zoo, inherits from Animal base class
class Bear : public Animal {
private:
    // Static counter for generating unique bear IDs
    static int nextId;

public:
    // Constructor initializes a new bear with its basic attributes
    Bear(int age, std::string gender, std::string birthSeason,
         std::string color, double weight, std::string origin);
    
    // Generate ISO 8601 formatted birthday based on age and birth season
    std::string genBirthDay() const override;
    // Generate unique ID in format BExx where xx is a sequential number
    std::string genUniqueID() override;
    // Get formatted description of the bear including all attributes
    std::string getDescription() const override;
};

#endif // BEAR_H
