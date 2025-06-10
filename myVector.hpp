#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include <iostream>

class myVector
{
private:
        size_t m_size;
        size_t m_capacity;
        int* m_data;
public:
        myVector();
        myVector(size_t size);
        myVector(size_t size, int val);
		myVector(const myVector& other);
		myVector& operator=(const myVector& other);
		myVector(myVector&& other);
		myVector& operator=(myVector&& other);
        ~myVector();
        size_t size();
        size_t capacity();
        void push_back(int val);
        void pop_back();
        void resize(int new_size);
        void clear();
        void output();
        void reserve(int new_size);
};

#endif
