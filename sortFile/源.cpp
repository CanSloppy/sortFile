#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream is("data.txt");
	vector<int> v;
	if (is.is_open())
	{
		while (!is.eof())
		{
			int t;
			is >> t;
			v.push_back(t);
		}
	}
	sort(v.begin(), v.end());

	ofstream os("result.txt");
	if (os.is_open())
	{
		for (auto t : v) {
			os << t << " ";
		}
	}
	return 0;
}