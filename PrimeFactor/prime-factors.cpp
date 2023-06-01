#include <vector>
using namespace std;

class PrimeFactor
{
public:
	vector<int> of(int i)
	{
		vector<int> resutl = {};
		if (i==2)
		{
			resutl.push_back(2);
		}
		return resutl;
	}
};