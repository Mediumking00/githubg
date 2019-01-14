#include<iostream>
using namespace std;
int findABsolute(int a)
{
  if (a<0) {
  return -a;  }
  else{
  return a;
  }

}

int main()
{
  int x;
  std::cout << "Plz insert number : ";
  std::cin >>x;
  std::cout << "Absolute of "<<x<<" is :"<<findABsolute(x)<< '\n';
  return 0;
}
