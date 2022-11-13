#include "Serialization.hpp"

int main()
{
    Data data;

    Data *ptr = &data;

    Data   *comp = deserialize(serialize(&data));
    std::cout << ptr->p <<" "<< ptr->c<<" "<< ptr->y<< " " << ptr->t << "\n"; 
    std::cout << comp->p <<" "<< comp->c<<" "<< comp->y<< " " << comp->t << "\n"; 

}