#include <iostream>
#include <string>

class Population {
private:
    std::string city;
    int totalPopulation;

public:
    // Member function to get data with arguments
    void getData(const std::string& cityName, int population) {
        city = cityName;
        totalPopulation = population;
    }

    // Getter function to retrieve the total population
    int getTotalPopulation() const {
        return totalPopulation;
    }

    // Getter function to retrieve the city name
    const std::string& getCity() const {
        return city;
    }
};

int main() {
    // Create three objects of the Population class
    Population city1, city2, city3;

    // Get data for each city using the getData() function
    city1.getData("City1", 1000000);
    city2.getData("City2", 1500000);
    city3.getData("City3", 1200000);

    // Find the city with the maximum population
    Population maxPopulationCity = city1;
    if (city2.getTotalPopulation() > maxPopulationCity.getTotalPopulation()) {
        maxPopulationCity = city2;
    }
    if (city3.getTotalPopulation() > maxPopulationCity.getTotalPopulation()) {
        maxPopulationCity = city3;
    }

    // Display the city with the maximum population
    std::cout << "City with Maximum Population:\n";
    std::cout << "City Name: " << maxPopulationCity.getCity() << "\n";
    std::cout << "Total Population: " << maxPopulationCity.getTotalPopulation() << "\n";

    return 0;
}

