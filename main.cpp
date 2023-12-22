 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */


struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    // the definition for the Type that leftFoot and rightFoot are instantiations of
    struct Foot 
    {
        void stepForward() 
        {
            // Implementation of stepForward
        }

        int stepSize() 
        {
            // Implementation of stepSize
            return 0;
        }
    
    };

    Foot leftFoot;
    Foot rightFoot;
    void run(int howFast, bool startWithLeftFoot);

};

void Person::run(int howFast, bool startWithLeftFoot)
{ 
    if (startWithLeftFoot)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += (leftFoot.stepSize() + rightFoot.stepSize()) * howFast;

}





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */

/*
paste your code below
*/
struct AirPlane 
{
    std::string modelName = "Boeing 747";
    int numSeats = 150;
    float maxSpeed = 800.f;
    char fuelType = 'D';

    std::string manufacturer = "Boeing";
    std::string takeOffTime(std::string takeOffTime); 
    std::string landTime(std::string landTime); 
    void cruise();
};
std::string AirPlane::takeOffTime(std::string theTakeOffTime)
{
    return theTakeOffTime;
}
std::string AirPlane::landTime(std::string theLandTime)
{
    return theLandTime;
}
void AirPlane::cruise()
{
}

struct Robot 
{
    std::string modelName = "R2D2";
    double weight = 32.5;
    char batteryType = 'L';
    float powerConsumption = 7.8f;
    int numActuators = 6;

    std::string performTasks(std::string taskName); 
    int move(int x, int y); 
    void processSensorData();
};
std::string Robot::performTasks(std::string robotTaskName)
{
    return robotTaskName;
}
int Robot::move(int xPosition, int yPosition)
{
    return xPosition + yPosition;
}
void Robot::processSensorData()
{
}

struct Amplifier
{
    std::string modelName = "Amplifier";
    float powerInWatts = 5.f;
    int numChannels = 6;
    double distortion = 55;
    float gain = 5.f;

    void turnOn();
    int adjustDistortion(int distLevel); 
    void blowRoofOff();
};
void Amplifier::turnOn()
{
}
int Amplifier::adjustDistortion(int theDistLevel)
{
    return theDistLevel;
}
void Amplifier::blowRoofOff()
{
}

struct ArtificialIntelligence 
{
    std::string algorithmType = "Genetic Algorithm";
    double learningRate = .1;
    int numLayers = 3;
    int numTrainingData = 10000;
    float accuracyOnTestData = .9f;

    std::string predictOutcomes(std::string predictedOutcome); 
    void classifyInputs();
    void learnFromPastInputs();
};
std::string ArtificialIntelligence::predictOutcomes(std::string doPredictedOutcome)
{
    return doPredictedOutcome;
}
void ArtificialIntelligence::classifyInputs()
{
}
void ArtificialIntelligence::learnFromPastInputs()
{
}

struct Airport 
{
    std::string name = "JFK";
    std::string location = "New York, NY";
    int numRunways = 6;
    int numTerminals = 4;
    int numFlightsPerDay = 5000;

    int receiveAirplanes(int planes); 
    int dispatchAirplanes(int planes); 
    void manageAirTraffic();
};
int Airport::receiveAirplanes(int nrOfPlanesReceiving)
{
    return nrOfPlanesReceiving;
}
int Airport::dispatchAirplanes(int nrOfPlanesDispatching)
{
    return nrOfPlanesDispatching;
}
void Airport::manageAirTraffic()
{
}

struct Factory 
{
    std::string name = "Factory";
    std::string location = "New York, NY";
    int numProductsOrdered = 100;
    int numProductsPerDay = 10000;
    double operatingCostPerDay = 10000;

    int manufactureProducts(int amount, std::string typeName); 
    void repairMachinery();
    int shipProducts(int amount); 
};
int Factory::manufactureProducts(int amountOfProducts, std::string productTypeName)
{
    std::cout << "Manufacturing " << amountOfProducts << " of " << productTypeName << std::endl;
    return amountOfProducts;
}
void Factory::repairMachinery()
{
}
int Factory::shipProducts(int amountOfProductsShipped)
{
    return amountOfProductsShipped;
}

struct Concert 
{
    std::string name = "Concert";
    std::string location = "New York, NY";
    int numAttendees = 100000;
    float duration = 60.0f;
    double ticketPrice = 10.0;

    std::string startConcert(std::string startedConcertName); 
    std::string endConcert(std::string endedConcertName); 
    void entertainAttendees();
};
std::string Concert::startConcert(std::string startConcertName)
{
    return startConcertName;
}
std::string Concert::endConcert(std::string endOfConcertName)
{
    return endOfConcertName;
}
void Concert::entertainAttendees()
{
}

struct DataCenter
{
    std::string name = "Data Center";
    std::string location = "New York, NY";
    int numServers = 500;
    double powerConsumptionPerDay = 10.0;
    double dataStorageCapacity = 10.0;

    void processData();
    int storeData(int amount); 
    void transmitData();
};
void DataCenter::processData()
{
}
int DataCenter::storeData(int amountOfDataStored)
{
    return amountOfDataStored;
}
void DataCenter::transmitData()
{
}

struct Vehicle
{
    std::string vehicleType = "Train";
    int numSeats = 500;
    float maxSpeed = 200.0f;
    char fuelType = 'E';

    std::string manufacturer = "Amtrak";
    void startEngine();
    void stopEngine();
    int transportPassengers(int passengers); 
};
void Vehicle::startEngine()
{
}
void Vehicle::stopEngine()
{
}
int Vehicle::transportPassengers(int nrOfPassengers)
{
    return nrOfPassengers;
}

struct City
{
    Airport airport;
    Factory factory;
    Concert concert;
    DataCenter dataCenter;
    Vehicle vehicle;

    int manufactureProduct(int numProductsToOrder, std::string typeOfProduct);
    void transportProductFromFactory(Vehicle vehicleType, std::string timeStamp, bool transportDone);
    void restockDataCenter(int numOfServers, double powerConsumptionPerDay, double dataStorageCapacity);
};

int City::manufactureProduct(int theNumProductsToOrder, std::string nameTypeOfProduct)
{
    std::cout << "City ordered " << theNumProductsToOrder << " of " << nameTypeOfProduct << std::endl;
    return factory.manufactureProducts(theNumProductsToOrder, nameTypeOfProduct);
}

void City::transportProductFromFactory(Vehicle vehicleType, std::string timeStamp, bool transportDone)
{
    std::cout << "Transporting products using " << vehicleType.vehicleType << " at " << timeStamp << std::endl;
    transportDone = true;
}

void City::restockDataCenter(int numOfServers, double powerConsumptionPerDay, double dataStorage)
{
    std::cout << "Restocking Data Center with " << numOfServers << " servers, " << powerConsumptionPerDay << " MWh of power consumption and " << dataStorage << " GB of data storage" << std::endl;
    dataCenter.numServers = numOfServers;
    dataCenter.powerConsumptionPerDay = powerConsumptionPerDay;
    dataCenter.dataStorageCapacity = dataStorage;
}   

int main() 
{ 
        std::cout << "good to go!" << std::endl; 
}
