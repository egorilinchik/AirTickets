#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm>

enum classTick {economy = 30, casual = 40, buissines = 60, god = 90};

class Ticket
{
public:
    std::string companyName;    // название компания
    std::string passegerName;   // пассажир
    std::string sellingDate;    // дата продажи билета
    std::string flightNumber;   // номер билета
    std::string placeOUT;       // место вылета
    std::string placeIN;        // место прибытия
    std::string arrival;        // время вылета
    std::string departure;      // время прибытия
    std::string distance;       // расстояние полёта
    std::string duration;       // продолжительность полёта
    classTick clas;             // тип класса
    std::string flightReice;    // номер рейса
    double ticketCost;          // стоимость билета
private:
    Ticket()
    {
        companyName = "-";
        passegerName = "-";
        sellingDate = "-";
        flightNumber = "-";
        placeOUT = "-";
        placeIN = "-";
        arrival = "-";
        departure = "-";
        distance = "-";
        duration = "-";
        classTick clas = economy;
        flightReice = "-";
        ticketCost = 0;
    }
    Ticket(std::string companyName, std::string passegerName, std::string sellingDate, std::string flightNumber, std::string placeOUT, std::string placeIN, std::string arrival, std::string departure,
        std::string distance, std::string duration, classTick clas, std::string flightReice, double ticketCost)
    {
        this->companyName = companyName;
        this->passegerName = passegerName;
        this->sellingDate = sellingDate;
        this->flightNumber = flightNumber;
        this->placeOUT = placeOUT;
        this->placeIN = placeIN;
        this->arrival = arrival;
        this->departure = departure;
        this->distance = distance;
        this->duration = duration;
        this->clas = clas;
        this->flightReice = flightReice;
        this->ticketCost = ticketCost;
    }


};         

int main()
{
    std::vector<std::shared_ptr<Ticket>> person;
}