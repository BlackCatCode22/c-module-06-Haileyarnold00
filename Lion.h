#ifndef LION_H
#define LION_H

#include "Animal.h"
#include <string>

// Lion class representing a lion in the zoo, inherits from Animal base class
class Lion : public Animal {
private:
    // Static counter for generating unique lion IDs
    static int nextId;

public:
    // Constructor initializes a new lion with its basic attributes
    Lion(int age, std::string gender, std::string birthSeason,
         std::string color, double weight, std::string origin);
    
    // Generate ISO 8601 formatted birthday based on age and birth season
    std::string genBirthDay() const override;
    // Generate unique ID in format LIxx where xx is a sequential number
    std::string genUniqueID() override;
    // Get formatted description of the lion including all attributes
    std::string getDescription() const override;
};

#endif // LION_H
