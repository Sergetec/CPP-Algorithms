#include <cmath>

using namespace std;

int main()
{
  int n, a[51];
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
    if ((int)sqrt(a[i]) == sqrt(a[i])) //conditie de inserare
    {
      n++;
      for (int j = n; j > i; j--)
      {
        a[j] = a[j - 1];
      }
      a[i] = sqrt(a[i]);
      i++;
    }
  }
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
//Se insereaza inaintea fiecarui element p.p. radacina sa patrata