#include "vector.h"
#include <cstddef>
#include <iostream>
using namespace std;

vector::vector()
{
	cout<<"default constructing vector..."<<endl;
	size=0;
	buf=NULL;
}
vector::vector(int s)
{
	cout<<"constructing vector with "<<s<<" component(s)"<<endl;
	size=s;
	buf= new double[s];
}
vector::vector(const vector& A)
{
	cout<<"copy constructor..."<<endl;
	this->size=A.size;
	this->buf=new double[A.size];
	for(int i=0;i<A.size;i++)
		this->buf[i]=A.buf[i];
}
vector::~vector()
{
	cout<<"Destructor: cleaning up...."<<endl;
	size=0;
	if(buf)
		delete[] buf;
	buf=NULL;
}

int vector::Size() const
{
	return size;
}
bool vector::operator ==(const vector& B)
{
	if(this->size != B.size) return false;
	for(int i=0;i<size;i++)
		if(buf[i] != B.buf[i]) return false;
	return true;
}
bool vector::operator !=(const vector& B)
{
	return !(*this == B);
}
double& vector::operator [](int i)
{
	if(i<0 || i>=size)
	{//error...
	}
	return buf[i];
}
double& vector::operator [](int i) const
{
	return buf[i];
}
vector operator*(double a, const vector& A)
{
	vector tmp(A);
	for(int i=0; i<A.Size();i++)
		tmp[i]=A[i]*a;
	return tmp;
}
