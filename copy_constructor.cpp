#include "myVector.hpp"

myVector::myVector(const myVector& other) {
	m_size = other.m_size;
	m_capacity = other.m_capacity;
	m_data = new int[m_capacity];
	for (int i = 0; i < m_size; ++i) {
		m_data[i] = other.m_data[i];
	}
}
