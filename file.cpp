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

int main()
{
	cout<<"Hello Openclassrooms"<<endl;
	return (0);
}