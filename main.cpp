/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    Example::main();

    
    std::cout << "good to go!" << std::endl; 
}
