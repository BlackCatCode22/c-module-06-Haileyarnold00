#ifndef TIGER_H
#define TIGER_H

#include "Animal.h"
#include <string>

// Tiger class representing a tiger in the zoo, inherits from Animal base class
class Tiger : public Animal {
private:
    // Static counter for generating unique tiger IDs
    static int nextId;

public:
    // Constructor initializes a new tiger with its basic attributes
    Tiger(int age, std::string gender, std::string birthSeason,
          std::string color, double weight, std::string origin);
    
    // Generate ISO 8601 formatted birthday based on age and birth season
    std::string genBirthDay() const override;
    // Generate unique ID in format TIxx where xx is a sequential number
    std::string genUniqueID() override;
    // Get formatted description of the tiger including all attributes
    std::string getDescription() const override;
};

#endif // TIGER_H
