#include <cmath>
#include <iostream>
using namespace std;

struct Punt {
  double x, y;
};

double distancia(const Punt& a, const Punt& b) {
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

