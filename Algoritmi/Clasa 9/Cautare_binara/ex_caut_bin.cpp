#include <iostream>
using namespace std;

const int N = 25000;

int v[N];

int caut_bin(int x, int v[], int n)
{
  int st = 0, dr = n - 1;
  while (st <= dr)
  {
    int m = (st + dr) / 2;
    if (x == v[m])
    {
      return true;
    }
    if (x < v[m])
    {
      dr = m - 1;
    }
    else
    {
      st = m + 1;
    }
  }
  return false;
}

int main()
{
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    cout << caut_bin(x, v, n) << " ";
  }
  return 0;
}

//Verifica daca fiecare element din vectorul y cu m elemente apare in vectorul x cu n elemente.
//Vectorul x cu n elemente numere naturale, ordonate crescator
//Vectorul y cu m elemente, de asemenea numere naturale