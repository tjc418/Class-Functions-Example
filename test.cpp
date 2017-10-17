#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
	vector A;
	vector B(1000);
	vector C(B);
	cout<<A.Size()<<endl;
	cout<<B.Size()<<endl;
	if (A==B) cout<<"Equal"<<endl;
        if (B==B) cout<<"B Equal B"<<endl;
	if (A!=B) cout<< "not equal"<<endl;
	return 0;
}
