#include <cstring>
#include <iostream>

using namespace	std;

int	main(void)
{
	char str[50];
	char str_result[50];
	char *char_p;
	size_t count = 0;

	cin.getline(str, 50);
	cout << "str: " << str << endl;
	strcpy(str_result, str);
	char_p = str_result;
	while (strcspn(str_result, "a") != strlen(str))
	{
        
	}
	cout << "str_res: " << str_result << endl << "count: " << count << endl;

	return (0);
}