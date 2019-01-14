#include<iostream>
using namespace std;
double findcirclearea(double r)
{
  double A =3.14*r*r;
  return A;
}

int main()
{
  double A1 = findcirclearea(1);
  cout<<"A1 = "<<A1<<'\n';

  double r2 = 2;
  double A2 = findcirclearea(r2);
  cout << "A2 =" <<A2<< '\n';

  cout << "A3 =" <<findcirclearea(3)<< '\n';




  return 0;
}
