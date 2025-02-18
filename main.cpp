#include <iostream>
#include <memory>
#include <map>
#include <string>
#include <functional>
#include "app.hpp"
#include "custom_transport.hpp"

std::unique_ptr<Logistics> getLogisticsFactory(const std::string& transportType){
    static std::map<std::string, std::function<std::unique_ptr<Logistics>()>> factories = {
        {"Truck", [](){return std::make_unique<TruckLogistics>();}},
        {"Ship", [](){return std::make_unique<ShipLogistics>();}},
        {"Plane", [](){return std::make_unique<PlaneLogistics>();}},
        {"Bike", [](){return std::make_unique<BikeLogistics>();}}
    };

    auto it  = factories.find(transportType);
    if(it != factories.end()){
        return it->second();
    }
    return std::make_unique<TruckLogistics>(); //
}

int main(){
    std::string transportType;

    std::cout << "Enter transport type: Bike, Plane, Ship, Truck" << std::endl;
    std::cin >> transportType;
    
    auto logistics = getLogisticsFactory(transportType);
    logistics->plan_delivery();

    return 0;
}