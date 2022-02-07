#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c;
  double delta, x1, x2;
  cin >> a >> b >> c;
  delta = (b*b) - (4*a*c);
  if (delta > 0) //x1,2 = -b +- rad(delta) totul pe 2a
  {
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2;
  }
  else if (delta == 0) //Daca delta = 0 atunci x1 = x2 = -b/2a
  {
    cout << "x1 = x2 = " << (-b) / (2*a);
  }
  else if (delta < 0) //Ecuatia nu are solutii reale, deoarece radical din minus ceva NU EXISTA
  {
    cout << "Ecuatia nu are solutii reale";
  }
  return 0;
}
