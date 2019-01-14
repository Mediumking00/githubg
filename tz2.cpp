#include<iostream>
using namespace std;
int FindGCD(int x,int y)
{
  int min;
  if (x>=y)
  {
    min =y;
  } else {
    min=x;
  }
    while (min>0) {
      if (x%min==0  and y%min==0) {
        return min;
      }
      else{
        min--;
      }
    }

}
 int main()
 {
  int x,y;
  std::cin >> x>>y;
  std::cout << "GCD is  " <<FindGCD(x,y)<< '\n';
  return 0;
}
