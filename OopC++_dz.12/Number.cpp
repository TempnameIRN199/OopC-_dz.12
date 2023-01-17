#include "Number.h"

template <class T> Complex<T>::Complex()
{
	real = 0;
	imaginary = 0;
}

template <class T> Complex<T>::Complex(T real, T imaginary)
{
	this->real = real;
	this->imaginary = imaginary;
}

template <class T> Complex<T>::Complex(const Complex& other)
{
	real = other.real;
	imaginary = other.imaginary;
}

template <class T> Complex<T>::~Complex()
{
}

template <class T> void Complex<T>::setReal(T real)
{
	this->real = real;
}

template <class T> void Complex<T>::setImaginary(T imaginary)
{
	this->imaginary = imaginary;
}

template <class T> T Complex<T>::getReal()
{
	return real;
}

template <class T> T Complex<T>::getImaginary()
{
	return imaginary;
}

template <class T> void Complex<T>::print()
{
	cout << real << " + " << imaginary << "i" << endl;
}

template <class T> Complex<T> Complex<T>::operator+(Complex other)
{
	Complex result;
	result.real = real + other.real;
	result.imaginary = imaginary + other.imaginary;
	return result;
}

template <class T> Complex<T> Complex<T>::operator-(Complex other)
{
	Complex result;
	result.real = real - other.real;
	result.imaginary = imaginary - other.imaginary;
	return result;
}

template <class T> Complex<T> Complex<T>::operator*(Complex other)
{
	Complex result;
	result.real = real * other.real - imaginary * other.imaginary;
	result.imaginary = real * other.imaginary + imaginary * other.real;
	return result;
}

int main() {
	Complex<int> c1(1, 2);
	Complex<int> c2(3, 4);
	c1.print();
	c2.print();
	Complex<int> c3 = c1 + c2;
	c3.print();
	c3 = c1 - c2;
	c3.print();
	c3 = c1 * c2;
	c3.print();
}