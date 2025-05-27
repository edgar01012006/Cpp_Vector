#include "myVector.hpp"

void myVector::pop_back()
{
        if (!m_data || m_size == 0)
        {
                std::cout << "the vector is empty, cannot pop_back\n";
                return;
        }
        --m_size;
        m_data[m_size] = 0;
}
