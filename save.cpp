#include <random>
#include <iostream>
#include <vector>
using namespace std;

void randgen(double a[], int size)
{
    random_device rd;
    mt19937 mt(1234);
	uniform_real_distribution<double> dist(0.0, 1.0);
    for (int i=0; i<size; i++)
    {
        a[i]=dist(mt);
    }
	return;
}

class Packet
{
public:
	int test1;
    int test2;
    void print()
    {
        cout<<test1<<" "<<test2<<endl;
    }
};



int main()
{
	double rand[30];
	randgen(rand, 30);
	for(int i=0; i<30; i++)
	{
		cout<<rand[i]<<endl;
	}

    Packet ptest{1,2};
    ptest.print();

}

