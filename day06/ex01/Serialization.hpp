#ifndef SER
#define SER
#include <iostream>
#include "DataTypes.hpp"


uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif