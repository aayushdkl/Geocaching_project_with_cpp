#include "GeocachingApp.h"
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


// // Constructor
// GeocachingApp::GeocachingApp() {}

// // Function to hide a treasure
// void GeocachingApp::hideTreasure(const std::string& name, double latitude, double longitude, const std::string& description) {
//     treasures.push_back(Treasure(name, latitude, longitude, description));
// }
// #include <cmath>

// // Function to find nearby treasures
// std::vector<Treasure> GeocachingApp::findNearbyTreasures(double userLatitude, double userLongitude, double radius) const {
//     std::vector<Treasure> nearbyTreasures;
//     for (const auto& treasure : treasures) {
//         // Calculate distance between user and treasure using Haversine formula
//         double earthRadius = 6371.0; // Earth radius in kilometers
//         double deltaLatitude = (treasure.getLatitude() - userLatitude) * M_PI / 180.0;
//         double deltaLongitude = (treasure.getLongitude() - userLongitude) * M_PI / 180.0;
//         double a = sin(deltaLatitude / 2) * sin(deltaLatitude / 2) +
//                    cos(userLatitude * M_PI / 180.0) * cos(treasure.getLatitude() * M_PI / 180.0) *
//                    sin(deltaLongitude / 2) * sin(deltaLongitude / 2);
//         double c = 2 * atan2(sqrt(a), sqrt(1 - a));
//         double distance = earthRadius * c;

//         // Check if the treasure is within the specified radius and not already found
//         if (distance <= radius && !treasure.isFound()) {
//             nearbyTreasures.push_back(treasure);
//         }
//     }
//     return nearbyTreasures;
// }


// // Function to mark a treasure as found
// void GeocachingApp::markTreasureFound(const std::string& treasureName) {
//     for (auto& treasure : treasures) {
//         if (treasure.getName() == treasureName) {
//             treasure.setFound(true);
//             return;
//         }
//     }
// }

// // Function to get all treasures
// const std::vector<Treasure>& GeocachingApp::getAllTreasures() const {
//     return treasures;
// }

// // Function to mark a treasure as found
// void GeocachingApp::markTreasureFound(const std::string& treasureName) {
//     for (auto& treasure : treasures) {
//         if (treasure.getName() == treasureName) {
//             treasure.setFound(true);
//             return;
//         }
//     }
// }
// // Function to get all treasures
// const std::vector<Treasure>& GeocachingApp::getAllTreasures() const {
//     return treasures;
// }


// #include "GeocachingApp.h"

// GeocachingApp::GeocachingApp() {}

// void GeocachingApp::hideTreasure(const std::string& name, double latitude, double longitude, const std::string& description) {
//     treasures.push_back(Treasure(name, latitude, longitude, description));
// }

// std::vector<Treasure> GeocachingApp::findNearbyTreasures(double userLatitude, double userLongitude, double radius) const {
//     std::vector<Treasure> nearbyTreasures;
//     for (const auto& treasure : treasures) {
//         // Calculate distance between user and treasure using Haversine formula
//         double earthRadius = 6371.0; // Earth radius in kilometers
//         double deltaLatitude = (treasure.getLatitude() - userLatitude) * M_PI / 180.0;
//         double deltaLongitude = (treasure.getLongitude() - userLongitude) * M_PI / 180.0;
//         double a = sin(deltaLatitude / 2) * sin(deltaLatitude / 2) +
//                    cos(userLatitude * M_PI / 180.0) * cos(treasure.getLatitude() * M_PI / 180.0) *
//                    sin(deltaLongitude / 2) * sin(deltaLongitude / 2);
//         double c = 2 * atan2(sqrt(a), sqrt(1 - a));
//         double distance = earthRadius * c;

//         // Check if the treasure is within the specified radius and not already found
//         if (distance <= radius && !treasure.isFound()) {
//             nearbyTreasures.push_back(treasure);
//         }
//     }
//     return nearbyTreasures;
// }

// // std::vector<Treasure> GeocachingApp::findNearbyTreasures(double userLatitude, double userLongitude, double radius) const {
// //     // Implementation for findNearbyTreasures
// // }

// void GeocachingApp::markTreasureFound(const std::string& treasureName) {
//     // Implementation for markTreasureFound
// }

// const std::vector<Treasure>& GeocachingApp::getAllTreasures() const {
//     // Implementation for getAllTreasures
// }


#include "GeocachingApp.h"

GeocachingApp::GeocachingApp() {}

void GeocachingApp::hideTreasure(const std::string& name, double latitude, double longitude, const std::string& description) {
    treasures.push_back(Treasure(name, latitude, longitude, description));
}

std::vector<Treasure> GeocachingApp::findNearbyTreasures(double userLatitude, double userLongitude, double radius) const {
    std::vector<Treasure> nearbyTreasures;
    for (const auto& treasure : treasures) {
        double earthRadius = 6371.0; // Earth radius in kilometers
        double deltaLatitude = (treasure.getLatitude() - userLatitude) * M_PI / 180.0;
        double deltaLongitude = (treasure.getLongitude() - userLongitude) * M_PI / 180.0;
        double a = sin(deltaLatitude / 2) * sin(deltaLatitude / 2) +
                   cos(userLatitude * M_PI / 180.0) * cos(treasure.getLatitude() * M_PI / 180.0) *
                   sin(deltaLongitude / 2) * sin(deltaLongitude / 2);
        double c = 2 * atan2(sqrt(a), sqrt(1 - a));
        double distance = earthRadius * c;

        if (distance <= radius && !treasure.isFound()) {
            nearbyTreasures.push_back(treasure);
        }
    }
    return nearbyTreasures;
}

void GeocachingApp::markTreasureFound(const std::string& treasureName) {
    for (auto& treasure : treasures) {
        if (treasure.getName() == treasureName) {
            treasure.setFound(true);
            return;
        }
    }
}

const std::vector<Treasure>& GeocachingApp::getAllTreasures() const {
    return treasures;
}
