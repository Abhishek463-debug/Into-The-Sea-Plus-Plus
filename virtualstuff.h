#pragma once

#include <iostream>

class Grandfather {
public:
	char age;
	virtual void declare();
};

class Father:public Grandfather {
public:
	void declare();
};

class Son: public Father {
public:
	void declare();
};


class A {
private:
	int age = 24;
protected:
	void age1();
public:
	void hi();
	A(int age);
};

class B : public A {
public:
	void say_something();
	void say_hi();
};