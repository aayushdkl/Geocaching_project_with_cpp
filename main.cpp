#include <iostream>
#include "GeocachingApp.h"

int main() {
    GeocachingApp app;

    while (true) {
        // Display menu
        std::cout << "Geocaching Application\n";
        std::cout << "1. Hide a treasure\n";
        std::cout << "2. Find nearby treasures\n";
        std::cout << "3. Mark treasure as found\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, description;
                double latitude, longitude;
                std::cout << "Enter treasure name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter latitude: ";
                std::cin >> latitude;
                std::cout << "Enter longitude: ";
                std::cin >> longitude;
                std::cout << "Enter description: ";
                std::cin.ignore();
                std::getline(std::cin, description);
                app.hideTreasure(name, latitude, longitude, description);
                std::cout << "Treasure hidden successfully!\n";
                break;
            }
            case 2: {
                double userLatitude, userLongitude, radius;
                std::cout << "Enter your current latitude: ";
                std::cin >> userLatitude;
                std::cout << "Enter your current longitude: ";
                std::cin >> userLongitude;
                std::cout << "Enter search radius (in kilometers): ";
                std::cin >> radius;
                auto nearbyTreasures = app.findNearbyTreasures(userLatitude, userLongitude, radius);
                std::cout << "Nearby treasures:\n";
                for (const auto& treasure : nearbyTreasures) {
                    std::cout << "Name: " << treasure.getName() << "\n";
                    std::cout << "Description: " << treasure.getDescription() << "\n\n";
                }
                break;
            }
            case 3: {
                std::string name;
                std::cout << "Enter the name of the treasure you found: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                app.markTreasureFound(name);
                std::cout << "Treasure marked as found!\n";
                break;
            }
            case 4:
                std::cout << "Exiting application.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    }

    return 0;
}
