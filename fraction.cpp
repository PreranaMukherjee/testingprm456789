#include <iostream>
#include"fraction.h"
using namespace std;

fraction::fraction():m_numerator(0),m_denominator(0) { }
fraction::fraction(int n, int d) : m_numerator(n), m_denominator(d) {}
fraction:: fraction(int n) :   m_numerator(n){}


fraction fraction:: operator+(const fraction &r1) {
  int n = m_numerator + r1.m_numerator;
  int d = m_denominator + r1.m_denominator;
  return fraction(n,d);
}
fraction fraction:: operator-(const fraction &r1) {
  int n = m_numerator-r1.m_numerator;
  int d = m_denominator - r1.m_denominator;
  return fraction(n,d);
}
fraction fraction:: operator*(const fraction &r1) {
  int n = m_numerator*r1.m_numerator;
  int d = m_denominator * r1.m_denominator;
  return fraction(n,d);
}
fraction fraction:: operator +(int paise){
    int n = m_denominator + paise;
    int d = m_numerator;
    return fraction(n, d);

}
fraction fraction:: operator -(int deno){
     int n = m_denominator - deno;
    int d = m_numerator;
    return fraction(n, d);

}
fraction& fraction:: operator++() {
  ++m_denominator;
  return *this;
}
fraction fraction:: operator++(int frac) {
  fraction orig(*this);
  ++m_denominator;
  return orig;
}
bool fraction:: operator==(const fraction &r1) {
  return m_numerator == r1.m_numerator && m_denominator == r1.m_denominator;
}
bool fraction:: operator<(const fraction &r1) {
  return m_numerator < r1.m_numerator && m_denominator < r1.m_denominator;
}
bool fraction:: operator>(const fraction &r1) {
  return m_numerator > r1.m_numerator && m_denominator > r1.m_denominator;
}
int fraction:: getnum(){
    return m_numerator;
}
int fraction:: getdenom(){
    return m_denominator;
}
int fraction::simplify(int m_numerator,int m_denominator){
    int num_high; int denom_high;
        for (int i = (m_numerator,m_denominator); i > 1;i--)
        { if ((m_numerator%i==0)&&(m_denominator%i==0))
           {
            num_high = m_numerator / i;
           denom_high= m_denominator / i;
           }
        }
        return num_high;
        return denom_high;}
  //isSimplest();
void fraction :: display ()
{

    std::cout<<m_numerator<<","<<m_denominator<<"\n";
}

