#include <iostream>
#include "myVector.hpp"

int main()
{
	myVector v(5);
	std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);	
	v.push_back(5);
	std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
	v.output();
	v.pop_back();
	v.pop_back();
	std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
	v.output();
	v.clear();
	std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
	
	return 0;
}
