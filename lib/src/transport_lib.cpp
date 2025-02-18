#include "transport_lib.hpp"

void Truck::deliver() const {
    std::cout << "Truck delivers the goods by land." << std::endl;
}

void Ship::deliver() const {
    std::cout << "Ship delivers the goods by sea." << std::endl;
}