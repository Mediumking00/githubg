#include<iostream>
using namespace std;

void hanoi(int N,int s=1,int d=3){
	if(N==1){cout<<"USED(*)"<<endl;
		cout<<"  N = "<<N<<"                             s = "<<s<<"                     d = "<<d<<endl;
		cout<<"Move from "<< s <<" to "<<d<<endl;
	}
	else{
		cout<<"-->USED"<<endl;
		int buffer = 6-(s+d);
		cout<<"  N-1 = "<<N-1<<"  s = "<<s<<"  buffer : "<<buffer<<"                     d = "<<d<<endl;
		hanoi(N-1,s,buffer);
		cout<<"Move from "<< s <<" to "<< d <<endl;
		cout<<"  N-1 = "<<N-1<<"  buffer : "<<buffer<<"  d = "<<d<<"                     s = "<<s<<endl;
		hanoi(N-1,buffer,d);
		cout<<"---------------------------------------------------------------------"<<endl;
	}
}
int main(){
	hanoi(3);
	return 0;
}