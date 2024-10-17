#include <math.h>
#include <vector>
using std::vector;
using std::pair;
using std::make_pair;
double f(double x, double y);
vector<std::pair<double, double> > Calculate(double l, double r, int n, double y0);
pair<double, double> difference(vector<pair<double, double> >&correct, vector<pair<double, double> >&approximate);
