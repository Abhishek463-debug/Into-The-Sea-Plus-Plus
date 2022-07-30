#pragma once
#include <virtualstuff.h>



void Grandfather::declare() {
	std::cout << "I'm a grandfather!" << std::endl;
}

void Father::declare() {
	std::cout << "I'm a father!" << std::endl;
}

void Son::declare() {
	std::cout << "I'm a son!" << std::endl;
}

void A::age1() {
	std::cout << age << std::endl;
}

void A::hi() {
	std::cout << "Hello world" << std::endl;
}

A::A(int age): age(age) {
	std::cout << "Constructor\n";
	
}

void B::say_something() {
     B::hi();
	 A::hi();
	 B::age1();
}
void B::say_hi() {
	B::hi();
}