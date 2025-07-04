#include "myVector.hpp"

void myVector::resize(int new_size)
{
        if (new_size < 0)
        {
                std::cout << "invalid new_size passed\n";
        }
        else if (new_size == 0)
        {
                myVector::clear();
        }
        else if (new_size == m_capacity)
        {
                std::cout << "new_size equals to vector capacity\n";
        }
        else if (new_size > m_capacity)
        {
                int* copy_m_data = m_data;
                m_data = new int[new_size];
                int i = 0;
                for ( ; i < m_size; ++i)
                {
                    m_data[i] = copy_m_data[i];
                }
                for (; i < new_size; ++i) 
                {
                    m_data[i] = 0;
                }
                m_capacity = new_size;
                delete[]copy_m_data;
                copy_m_data = nullptr;
        }
        else if (new_size < m_capacity)
        {
        	    int* copy_m_data = m_data;
                m_data = new int[new_size];
                for (int i = 0; i < m_size; ++i)
                {
                        m_data[i] = copy_m_data[i];
                }
                m_capacity = new_size;
                delete[]copy_m_data;
                copy_m_data = nullptr;
        }
        else
        {
                std::cout << "failed to resize\n";
        }
}
