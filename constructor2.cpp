#include "myVector.hpp"

myVector::myVector(size_t size)
{
        m_size = 0;
        m_capacity = size;
        m_data = new int[size];
}
