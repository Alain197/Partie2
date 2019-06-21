/*   Ecrit par Alain 
20/06/2019 Ã  20:14 */
#include <iostream>
using namespace std;

int factorielle(unsigned n)
{
	if(n==0)
		return(1);
	return n*factorielle(n-1);
}

double getMax(double n,double m)
{
	if(n>m)
	{
		return (n);
	}
	return (m);

}


int main()
{
	cout<<"Hello Openclassrooms"<<endl;
	return (0);
}