#include "myVector.hpp"

void myVector::output()
{
        if (!m_data || m_size == 0)
        {
                std::cout << "the vector is empty, nothing to output\n";
        }

        for (int i = 0; i < m_size; ++i)
        {
                std::cout << m_data[i] << ' ';
        }
        std::cout << '\n';
}
