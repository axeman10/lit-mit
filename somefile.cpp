#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>


using std::cout;
using std::endl;

int main(void)
{
	cout << "hello world" << endl;
	std::vector<int> hec = {1,2,1,2,4,7,55,86,10};
	
	for(int& some : hec)
		cout << some << endl;
	return 0;
}
