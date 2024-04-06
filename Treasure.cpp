#include "Treasure.h"

// Constructor
Treasure::Treasure(std::string name, double latitude, double longitude, std::string description)
    : name(name), latitude(latitude), longitude(longitude), description(description), found(false) {}

// Getters
std::string Treasure::getName() const {
    return name;
}

double Treasure::getLatitude() const {
    return latitude;
}

double Treasure::getLongitude() const {
    return longitude;
}

std::string Treasure::getDescription() const {
    return description;
}

bool Treasure::isFound() const {
    return found;
}

// Setter
void Treasure::setFound(bool found) {
    this->found = found;
}
