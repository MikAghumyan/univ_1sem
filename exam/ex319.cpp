#include <iostream>
using namespace std;

int main(){
  const int n = 100;
  int x[n];

	for(int i = 0, nb = 10; i < n && nb <= 99; nb++ )
	{
		if(!(nb % 2 || nb % 3))
		{
			x[i++] = nb;
		}
	}

	return (0);
}
