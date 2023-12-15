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
    //model name(std::string)
    std::string modelName = "Boeing 747";
    //    - number of seats(int)
    int numSeats = 150;
    //    - max speed(float)
    float maxSpeed = 800.f;
    //    - fuel type(char)
    char fuelType = 'D';
    //    - manufacturer(std::string)
    std::string manufacturer = "Boeing";
    //3 things it can do:
    //    - take off
    std::string takeOffTime(std::string takeOffTime); // returns the take off time in hh:mm:ss.
    //    - land
    std::string landTime(std::string landTime); // returns the landing time in hh:mm:ss.
    //    - cruise
    void cruise();
};

struct Robot 
{
    //    - model name(std::string)
    std::string modelName = "R2D2";
    //    - weight(double)
    double weight = 32.5;
    //    - battery type(char)
    char batteryType = 'L';
    //    - power consumption(float)
    float powerConsumption = 7.8f;
    //    - number of actuators(int)
    int numActuators = 6;
    //3 things it can do:
    //    - perform tasks
    std::string performTasks(std::string taskName); // returns the task that the robot is performing.
    //    - move
    int move(int x, int y); // returns the distance moved in x and y directions.
    //    - process sensor data
    void processSensorData();
};

struct Amplifier
{
    //   - model name(std::string)
    std::string modelName = "Amplifier";
    //   - power in watts(float)
    float powerInWatts = 5.f;
    //   - number of channels(int)
    int numChannels = 6;
    //   - distortion(double)
    double distortion = 55;
    //   - gain(float)
    float gain = 5.f;
    //3 things it can do:
    //   - turn on
    void turnOn();
    //   - adjust distortion
    int adjustDistortion(int distLevel); // returns the new distortion level.
    //   - blow the roof off
    void blowRoofOff();
};

struct ArtificialIntelligence 
{
    //    - algorithm type(std::string)
    std::string algorithmType = "Genetic Algorithm";
    //    - learning rate(double)
    double learningRate = .1;
    //    - number of layers in the neural network(int)
    int numLayers = 3;
    //    - amount of training data(int)
    int numTrainingData = 10000;
    //    - accuracy on test data(float)
    float accuracyOnTestData = .9f;
    //3 things it can do:
    //    - predict outcomes
    std::string predictOutcomes(std::string predictedOutcome); // returns the outcome predicted.
    //    - classify inputs
    void classifyInputs();
    //    - learn from past inputs
    void learnFromPastInputs();
};

struct Airport 
{
    //    - name (std::string)
    std::string name = "JFK";
    //    - location (std::string)
    std::string location = "New York, NY";
    //    - numer of runways (int)
    int numRunways = 6;
    //    - number of terminals (int)
    int numTerminals = 4;
    //    - number of flights per day (int)
    int numFlightsPerDay = 5000;
    //3 things it can do:
    //    - receive airplanes
    int receiveAirplanes(int planes); // returns the number of airplanes received.
    //    - dispatch airplanes
    int dispatchAirplanes(int planes); // returns the number of airplanes
    //    - manage air traffic
    void manageAirTraffic();
};

struct Factory 
{
    //    - name (std::string)
    std::string name = "Factory";
    //    - location (std::string)
    std::string location = "New York, NY";
    //    - number of workers (int)
    int numProductsOrdered = 100;
    //    - number of products produced per day (int)
    int numProductsPerDay = 10000;
    //    - operating cost per day (double)
    double operatingCostPerDay = 10000;
    //3 things it can do:
    //    - manufacture products
    int manufactureProducts(int amount, std::string typeName); // returns the number of products manufactured and name.
    //    - repair machinery
    void repairMachinery();
    //    - ship products
    int shipProducts(int amount); // returns the number of products shipped.
};

struct Concert 
{
    //    - name (std::string)
    std::string name = "Concert";
    //    - location (std::string)
    std::string location = "New York, NY";
    //    - number of attendees (int)
    int numAttendees = 100000;
    //    - duration (float)
    float duration = 60.0f;
    //    - ticket price (double)
    double ticketPrice = 10.0;
    //3 things it can do:
    //    - start concert
    std::string startConcert(std::string startedConcertName); // returns the name of the concert.
    //    - end concert
    std::string endConcert(std::string endedConcertName); // returns the name of the concert.)
    //    - entertain attendees
    void entertainAttendees();
};

struct DataCenter
{
    //    - name (std::string)
    std::string name = "Data Center";
    //    - location (std::string)
    std::string location = "New York, NY";
    //    - number of servers (int)
    int numServers = 500;
    //    - power consumption per day (double)
    double powerConsumptionPerDay = 10.0;
    //    - data storage capacity (double)
    double dataStorageCapacity = 10.0;
    //3 things it can do:
    //    - process data
    void processData();
    //    - store data
    int storeData(int amount); // returns the number of data stored.
    //    - transmit data
    void transmitData();
};

struct Vehicle
{
    //    type (std::string)
    std::string vehicleType = "Train";
    //    number of seats (int)
    int numSeats = 500;
    //    max speed (float)
    float maxSpeed = 200.0f;
    //    fuel type (char)
    char fuelType = 'E';
    //    manufacturer (std::string)
    std::string manufacturer = "Amtrak";
    //3 things it can do:
    //    start engine
    void startEngine();
    //    stop engine
    void stopEngine();
    //    transport passengers
    int transportPassengers(int passengers); // returns the number of passengers transported.
};

struct City
{
    Airport airport;    //a member variabledeclaration of an instance of UDT 5
    Factory factory;    //a member variabledeclaration of an instance of UDT 6
    Concert concert;    //a member variabledeclaration of an instance of UDT 7
    DataCenter dataCenter;    //a member variabledeclaration of an instance of UDT 8
    Vehicle vehicle;    //a member variabledeclaration of an instance of UDT 9

    int manufactureProduct(int numProductsToOrder, std::string typeOfProduct); // orders products from Factory and returns the number of products manufactured.
    void transportProductFromFactory(Vehicle vehicleType, std::string timeSTamp, bool                                             transportDone); // transports products from Factory to City. Return timeStamp as true when done.   
    void restockDataCenter(int numOfServers, double powerConsumptionPerDay, double                                     dataStorageCapacity);
    

};

int main() { std::cout << "good to go!" << std::endl; }
