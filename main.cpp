#include <iostream>
#include "myVector.hpp"

int main()
{
	/*
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
    v.reserve(8);
    std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
    v.output();
    v.resize(5);
    std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
    v.output();
	v.clear();
	std::cout << "size = " << v.size() << " capacity " << v.capacity() << std::endl;
	*/
	
	myVector v1(4);
	std::cout << "size = " << v1.size() << " capacity " << v1.capacity() << std::endl;
	myVector v2(v1);
	std::cout << "size = " << v2.size() << " capacity " << v2.capacity() << std::endl;
	v2.push_back(5);
	std::cout << "size = " << v2.size() << " capacity " << v2.capacity() << std::endl;
	v1 = v2;
	std::cout << "size = " << v1.size() << " capacity " << v1.capacity() << std::endl;
	myVector v3(std::move(v1));
	std::cout << "size = " << v3.size() << " capacity " << v3.capacity() << std::endl;
	v3.push_back(5);
	v2 = std::move(v3);
	std::cout << "size = " << v2.size() << " capacity " << v2.capacity() << std::endl;
	return 0;
}
