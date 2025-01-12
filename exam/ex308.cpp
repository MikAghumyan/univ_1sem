#include <iostream>
using namespace std;

int main(){
  const int n_def = 50;
  int x[n_def], n, y[n_def];
  do{
      cout << "n: "; cin >> n;
  }while(n < 2 || n > n_def);

  for(int i = 0; i < n; i++)
  {
    cout << "num" << i << ": ";
		cin >> x[i];
	}

	for(int i = 0, j = 0; i < n; i++)
	{
		if(!(x[i] % 2))
		{
			y[j++] = x[i];
		}
	}

	return (0);
}
