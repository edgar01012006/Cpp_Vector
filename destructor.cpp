#include "myVector.hpp"

myVector::~myVector()
{
        m_size = 0;
        m_capacity = 0;
        delete[]m_data;
        m_data = nullptr;
}
