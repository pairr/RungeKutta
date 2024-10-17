#include "RungeKutta.h"
#include <iostream>
using std::cout;
using std::cin;
int main()
{
	double l = 0, r = 1;
	int n = 50;
	double y0 = 3;
	
	vector<pair<double, double> >xy;
	
	xy = Calculate(l, r, n, y0);
	
	cout << "{ {" << xy[0].first << ", " << xy[0].second << "}";
	for(size_t i = 1; i != xy.size(); i++)
	{
		cout << ", {" << xy[i].first << ", " << xy[i].second << "}";
	}
	cout << "}\n";
	
	double x, y;
	
	vector<pair<double, double> >correct;
	
	while(cin >> x >> y)
	{
		correct.push_back(make_pair(x, y));
	}
	
	pair<double, double>ans;
	
	ans = difference(correct, xy);
	
	cout << ans.first << " " << ans.second << "\n";
		
}
