// main.cpp
#include "MC.h"
#include <iostream>
using namespace std;

int main()
{
	double start = clock();

	// ======================= MCRUN & Plotting the final config ===============================
	array<double,10000>  wf;
	vector<HR> R;
	MC m(1E8L,8,64,64,1,1);
	wf = m.MCRUN();
	// ======================= end of simulation, print out the time =======
	double end = clock();
	cout <<"This simulation takes "<< (double(end-start)/CLOCKS_PER_SEC)<<endl;
	return 0;
}