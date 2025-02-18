#include "custom_transport.hpp"

void Plane::deliver() const {
    std::cout << "Plane delivers goods" << std::endl;
}

void Bike::deliver() const {
    std::cout << "Bike delivers goods" << std::endl;
}

std::unique_ptr<Transport> PlaneLogistics::create_transport() const {
    return std::make_unique<Plane>();
}

std::unique_ptr<Transport> BikeLogistics::create_transport() const {
    return std::make_unique<Bike>();
}

