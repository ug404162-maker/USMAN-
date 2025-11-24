#include<iostream>
using namespace std;
class fac{
	int temp;
	public:
		int fact(int n){
			if(n<=1){
				return 1;
			}
			temp = n*fac::b(n);
			return temp;
		}
		int b(int n){
			return fac::fact(n-1);
		}
};
int main(){
	fac f;
	int n;
	cout<<"Enter a number for factorial:";
	cin>>n;
	cout<<"Factorial of "<<n<<"is:"<<f.fact(n);
	return 0;
}