#include "myVector.hpp"

myVector& myVector::operator=(myVector&& other) {
	if (this == &other) {
		return *this;
	}
	delete[]m_data;

	m_size = other.m_size;
	m_capacity = other.m_capacity;
	m_data = other.m_data;
	other.m_size = 0;
	other.m_capacity = 0;
	other.m_data = nullptr;
	return *this;
}
