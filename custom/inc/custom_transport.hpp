#pragma once

#include "transport_lib.hpp"
#include "app.hpp"

class Plane : public Transport {
public:
    void deliver() const override;
};

class Bike : public Transport {
public:
    void deliver() const override;
};

// new factories

class PlaneLogistics : public Logistics {
    std::unique_ptr<Transport> create_transport() const override;
};

class BikeLogistics : public Logistics {
    std::unique_ptr<Transport> create_transport() const override;
};
