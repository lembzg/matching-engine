#ifndef ORDER_HPP
#define ORDER_HPP
#include <cstdint>

enum class Side{
    Buy,
    Sell
};

// forward declaration
struct Limit;

struct Order{
    uint64_t id;
    Side side;
    uint64_t price;
    uint64_t time;
    uint64_t quantity;
    Order* next;
    Order* prev;
    Limit* parentLimit;
};


#endif

