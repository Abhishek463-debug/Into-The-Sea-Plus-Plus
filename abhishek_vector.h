#pragma once
#include <iostream>
namespace abhishek {


	template<typename T>
	class vector {
	private:
		unsigned short capacity = 16;
		T* ptr;
		T* ptr_to_last_element;
	public:
		vector() {
			ptr = new T[capacity];
			ptr_to_last_element = ptr;
		}
		vector(unsigned short capacity) : capacity(capacity) {
			ptr = new T[capacity];
			ptr_to_last_element = ptr;
		}
		vector(vector&& vec) : capacity(vec.capacity), ptr(std::move(vec.ptr)) {}
		~vector()
		{
			delete[] ptr;
		}
		void push_back(T element)
		{
			if ((ptr_to_last_element - ptr) < capacity - 1)
			{
				*ptr_to_last_element = element;
				ptr_to_last_element++;
			}
		}
		T last()
		{
			return *(ptr_to_last_element-1);
		}
		unsigned short size()
		{
			return ptr_to_last_element - ptr;
		}
		unsigned short bytes()
		{
			return (char*)ptr_to_last_element - (char*)ptr;
		}

	};
}
