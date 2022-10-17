#include <iostream>
using namespace std;
int fun(int x){
	if(x==1){
		cout<<x<<"  --"<<endl;
		return x;
		
	}
	else {
		cout<<x<<" + "<<"fun ("<<x-1<<" )"<<endl;
		return x+fun(x-1);
	}
}
int Even(int x){
	if(x==1){
		return x;
	}
	else{
		if(x%2==0)
		cout<<x<<endl;
		return Even(x-1);
	}
}