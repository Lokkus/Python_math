#include "app.hpp"

void Logistics::plan_delivery() const {
    auto transport = create_transport();
    transport->deliver();
}

std::unique_ptr<Transport> TruckLogistics::create_transport()const {
    return std::make_unique<Truck>();
}

std::unique_ptr<Transport> ShipLogistics::create_transport() const {
    return std::make_unique<Ship>();
}