#ifndef ARRAY_HPP
#define ARRAY_HPP


template <class T>
class Array
{
    private:
        unsigned int n;
        T *array;
    public:
        Array(unsigned int n = 0) : n(n)
        {
            std::cout << "Default Constructor" << std::endl;
            array = new (std::nothrow) T[n];
        }
        Array(Array const &rhs)
        {
            this->array = NULL;
            std::cout << "copy Constructor" << std::endl;
            (*this) = rhs;
        }

        Array& operator = (Array const &rhs)
        {
            std::cout << "assignment Constructor" << std::endl;
            if (this->array)
                delete [] this->array;
            this->n = rhs.n;
            this->array = new (std::nothrow) T[rhs.n];
            if(!this->array || !rhs.array)
                return (*this);
            for (unsigned int i = 0; i < rhs.n ; i++)
            {
                this->array[i] = rhs.array[i];
            }
                        std::cout << "here" << std::endl;
            return (*this);
        }
        T& operator[] (int index)
        {
            if (index >= n || index < 0)
                throw std::exception();
            return array[index];
        }
        unsigned int size() const
        {
            return n;
        }
        ~Array()
        {
            delete [] array;
        }
};




#endif