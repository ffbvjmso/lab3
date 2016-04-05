#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	int w;
	vector<int>weight;
	ifstream read("file.in",ios::in);
	if(!read)
	{
		cerr << "Fail opening" << endl;
		exit(1);
	}
	read >> num;
	int tot=0;
	while(read >> w)
	{
		weight.push_back(w);
	}
	sort(weight.begin(),weight.end());
	for(int i=0;i<5;i++)
	{
		tot=tot+weight.back();
		weight.pop_back();
	}
	cout << tot << endl;
	return 0;
}
