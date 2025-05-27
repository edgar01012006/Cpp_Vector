#include "myVector.hpp"

void myVector::reserve()
{
        if (!m_data)
        {
                m_data = new int[1];
                m_capacity = 1;
        }
        else if (m_size == m_capacity)
        {
                m_capacity *= 2;
                int* copy_m_data = m_data;
                m_data = new int[m_capacity];
                for (int i = 0; i < m_size; ++i)
                {
                        m_data[i] = copy_m_data[i];
                }
                delete[]copy_m_data;
                copy_m_data = nullptr;
        }
        else
        {
                std::cout << "no need to resize the vector\n";
        }
        return;
}
