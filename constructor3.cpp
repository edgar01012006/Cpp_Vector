#include "myVector.hpp"

myVector::myVector(size_t size, int val)
{
        m_size = size;
        m_capacity = size;
        m_data = new int[size];
        for (int i = 0; i < size; ++i)
        {
                m_data[i] = val;
        }
}
