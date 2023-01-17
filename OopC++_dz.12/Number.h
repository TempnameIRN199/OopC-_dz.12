#pragma once
#include "Header.h"

/*Ќаписать шаблон класса дл€ работы с комплексними числами.
Ќаписать программу, использующую этот шаблон, с возможностью задани€ вещественной и мнимой частей как целыми числами так и числами с плавающей зап€той.
Ќаписать методы дл€ инициализации комплексных чисел, вывода, перегруженные +, -, *. */

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
