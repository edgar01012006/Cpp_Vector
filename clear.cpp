#include "myVector.hpp"

void myVector::clear()
{
        if (!m_data)
        {
                std::cout << "the vector is empty, nothing to clear\n";
        }
        m_size = 0;
        m_capacity = 0;
        delete[]m_data;
        m_data = nullptr;
}
