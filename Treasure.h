#ifndef TREASURE_H
#define TREASURE_H

#include <string>

class Treasure {
private:
    std::string name;
    double latitude;
    double longitude;
    std::string description;
    bool found;

public:
    // Constructor
    Treasure(std::string name, double latitude, double longitude, std::string description);

    // Getters
    std::string getName() const;
    double getLatitude() const;
    double getLongitude() const;
    std::string getDescription() const;
    bool isFound() const;

    // Setter
    void setFound(bool found);
};

#endif
