#pragma once
#include "Header.h"

template <class T> class Complex
{
private:
	T real;
	T imaginary;
public:
	Complex();
	Complex(T, T);
	Complex(const Complex&);
	~Complex();
	void setReal(T);
	void setImaginary(T);
	T getReal();
	T getImaginary();
	void print();
	Complex operator+(Complex);
	Complex operator-(Complex);
	Complex operator*(Complex);
};
