#include<iostream>
using namespace std;
int sumNonZero(int *,int **,int **);
int main(){
  int A[] = {0,0,0,0,0,1,3,2,1,1,0,0,0,1,6,9,0,0,0,1,1,0,0};
  int sum;
  int *start, *end;

  sum = sumNonZero(A,&start,&end);
  cout << "sum = " << sum << "\n";
  cout << "start = " << start << "\n" ;
  cout << "end = " << end << "\n";
  cout << "length = " << end-start+1 << "\n";
  cout <<"--------------------------------------\n";

  sum = sumNonZero(end+1,&start,&end);
  cout << "sum = " << sum << "\n";
  cout << "start = " << start << "\n" ;
  cout << "end = " << end << "\n";
  cout << "length = " << end-start+1 << "\n";
  cout <<"--------------------------------------\n";

  sum = sumNonZero(end+1,&start,&end);
  cout << "sum = " << sum << "\n";
  cout << "start = " << start << "\n" ;
  cout << "end = " << end << "\n";
  cout << "length = " << end-start+1 << "\n";
  cout <<"--------------------------------------\n";

}
int sumNonZero(int *d,int **s,int **e){
//Write definition of sumNonZero() here
  int sum=0,i=0;
  while(*d==0){
    d++;
  }
  *s=d;
  while(*d!=0){
      sum+=*d;
          if(*(d+1)==0){
            *e=d;
        }
      d++;
    }
    return sum;
}
