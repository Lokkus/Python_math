# pragma once

#include <iostream>
#include <memory>

// Abstract class for transport
class Transport {
public:
    virtual void deliver() const = 0;
    virtual ~Transport() = default;
};

// Concrete class for transport
class Truck : public Transport {
public:
    void deliver() const override;
};

// Concrete class for transport
class Ship : public Transport {
public:
    void deliver() const override;
};  
