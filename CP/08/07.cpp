#include <iostream>

using namespace std;

int main()
{
	string name;
	int first=1,heal;
	while(cin >> name) {
		if(first)
		   first=0;
		else printf("\n");
	  cin >> heal;
  	int mm[heal+1]={0},in,movement=0,min=2147483647,i=0;
	  for(;i<heal;i++){
		  cin >>in;
		  mm[i+1] = in;
	  	movement += in;
	  	min = movement < min?movement:min;
	  }
	  min = min < 0 ? -min : 0;
	  for(i=0;i<heal+1;i++){
	  	for(int j=0 ; j<min;j++)
	  		printf("-");
	  	min += mm[i+1];
	  	cout << name <<"\n";
	  }
  }
}