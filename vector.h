class vector
{
	int size;
	double* buf;

	public:
		vector();  //default constructor
		vector(int s); //constructor 
		vector(const vector& A);//copy constructor
		~vector(); //destructor
		int Size() const;
		bool operator ==(const vector& B);
		bool operator !=(const vector& B);
		double& operator [](int i);
		double& operator [](int i) const;

};

vector operator *(double a, const vector& A);
ostream& operator <<(ostream& o,const vector& A);
istream& operator >>(istream& i, vector& A);
