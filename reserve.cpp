#include "myVector.hpp"

void myVector::reserve(int new_size)
{
        if (!m_data)
        {
                m_data = new int[new_size];
                m_capacity = new_size;
        }
        else if (new_size > m_capacity)
        {
                m_capacity = new_size;
                int* copy_m_data = m_data;
                m_data = new int[new_size];
                for (int i = 0; i < m_size; ++i)
                {
                        m_data[i] = copy_m_data[i];
                }
                delete[]copy_m_data;
                copy_m_data = nullptr;
        }
        else
        {
                std::cout << "new_size is lower or equal to capacity\n";
        }
        return;
}
