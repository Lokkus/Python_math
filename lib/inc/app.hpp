#pragma once

#include "transport_lib.hpp"

// abstract factory
class Logistics {
public:
    virtual std::unique_ptr<Transport> create_transport() const = 0;
    virtual ~Logistics() = default;

    void plan_delivery() const;
};

// concrete factory
class TruckLogistics : public Logistics {
public:
    std::unique_ptr<Transport> create_transport() const override;
};

class ShipLogistics : public Logistics {
public:
    std::unique_ptr<Transport> create_transport() const override;
}; 


