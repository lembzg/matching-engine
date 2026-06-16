#ifndef LIMIT_HPP
#define LIMIT_HPP
#include <cstdint>

struct Order;

struct Limit{
    uint64_t totalPrice;
    uint64_t totalVolume;
    uint64_t total;
    Order* head;
    Order* tail;
};


#endif