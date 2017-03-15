//
//  Complex.cpp
//  adv2
//
//  Created by Zebo Li on 3/7/17.
//  Copyright © 2017 Zebo Li. All rights reserved.
//

#include "Complex.hpp"
namespace goodspeed{
    Complex::Complex(double r,double i):real(r),imaginary(i){}
    Complex::Complex(double r):Complex(r,0.){}
    Complex::Complex(const Complex& other):Complex(other.real,other.imaginary){}
    
    const Complex& Complex::operator=(const Complex& other){
        this->real = other.real;
        this->imaginary = other.imaginary;
        return *this;
    }
    
    double Complex::getReal() const{
        return this->real;
    }
    double Complex::getImaginary() const{
        return this->imaginary;
    }
    Complex::operator double() const{
        return this->real;
    }
    bool Complex::operator==(const Complex& other) const{
        return real==other.real&&imaginary==other.imaginary;
    }
    bool Complex::operator!=(const Complex& other) const{
        return !(*this==other);
    }
    Complex Complex::operator *() const{
        return Complex(real,-imaginary);
    }
    
    ostream& operator<<(ostream&out, const Complex& c){
        out<<'('<<c.getReal()<<','<<c.getImaginary()<<')';
        return out;
    }
    Complex operator+ (const Complex&c1, const Complex& c2){
        return Complex(c1.getReal()+c2.getReal(),c1.getImaginary()+c2.getImaginary());
    }
    Complex operator+ (const Complex&c, double d){
        return c+Complex(d);
    }
    Complex operator+ (double d,const Complex& c){
        return c+d;
    }
}
