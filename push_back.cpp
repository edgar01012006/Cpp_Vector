#include "myVector.hpp"

void myVector::push_back(int val)
{
        if (m_size == m_capacity)
        {
                myVector::reserve(m_capacity * 2);
        }
        m_data[m_size] = val;
        ++m_size;
}
