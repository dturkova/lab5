#include <iostream>
#include <cmath>
using namespace std;

class BaseProgression
{
	virtual double Sum(int n) = 0;
};

class Arithmetic :public BaseProgression
{
private:
	double a;
	double d;
public:
	Arithmetic(double a, double d) 
	{
		this->a = a;
		this->d = d;
	}

	double Sum(int n) override
	{
		return ((a + (a + d * (n - 1))) / 2) * n;
	}

};


class Geometric :public BaseProgression
{
private:
	double b;
	double q;
public:
	Geometric(double b, double q) 
	{
		this->b = b;
		this->q = q;
	}

	double Sum(int n) override
	{
		return (b * (pow(q, n)-1))/(q-1);
	}

};

int main() {

	cout << "\tARITHMETIC PROGRESSION" << endl;
	double a1, d;
	int nA;
	cout << "Enter the FIRST ELEMENT of the arithmetic progression: " << endl;
	cin >> a1;
	cout << "Enter the DIFFERENCE of the arithmetic progression: " << endl;
	cin >> d;
	cout << "Enter the number of progression elements" << endl;
	cin >> nA;
	Arithmetic AP(a1,d);
	cout <<"The sum of the arithmetic progression = " << AP.Sum(nA);

	cout << "\n\n\tGEOMETRIC PROGRESSION" << endl;
	double b1, q;
	int nG;
	cout << "Enter the FIRST ELEMENT of the geometric progression: " << endl;
	cin >> b1;
	cout << "Enter the RATIO of the geometric progression: " << endl;
	cin >> q;
	cout << "Enter the number of progression elements" << endl;
	cin >> nG;
	Geometric GP(b1,q);
	cout<<"The sum of the geometric progression = " << GP.Sum(nG)<<endl;

	return 0;
}