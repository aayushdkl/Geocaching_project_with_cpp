// #ifndef GEOCACHINGAPP_H
// #define GEOCACHINGAPP_H

// #include <vector>
// #include "Treasure.h"

// class GeocachingApp {
// private:
//     std::vector<Treasure> treasures;

// public:
//     // Constructor
//     GeocachingApp();

//     // Function to hide a treasure
//     void hideTreasure(const std::string& name, double latitude, double longitude, const std::string& description);

//     // Function to find nearby treasures
//     std::vector<Treasure> findNearbyTreasures(double userLatitude, double userLongitude, double radius) const;

//     // Function to mark a treasure as found
//     void markTreasureFound(const std::string& treasureName);

//     // Function to get all treasures
//     const std::vector<Treasure>& getAllTreasures() const;
// };

// #endif
#ifndef GEOCACHINGAPP_H
#define GEOCACHINGAPP_H

#include <vector>
#include "Treasure.h"

class GeocachingApp {
private:
    std::vector<Treasure> treasures;

public:
    GeocachingApp();
    void hideTreasure(const std::string& name, double latitude, double longitude, const std::string& description);
    std::vector<Treasure> findNearbyTreasures(double userLatitude, double userLongitude, double radius) const;
    void markTreasureFound(const std::string& treasureName);
    const std::vector<Treasure>& getAllTreasures() const;
};

#endif
