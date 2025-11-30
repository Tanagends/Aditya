#include<iostream>
using namespace std;
int sum(int x,int y){
	return x+y;
}
float sum(float x,float y){
	return x+y;
}
double sum(double x,double y){
	return x+y;
}
int main(){
	cout<<"sum of integers: "<<sum(10,20)<<endl;
		cout<<"sum of averages: "<<sum(72.65,65.19)<<endl;
			cout<<"sum of Basic and HRA: "<<sum(1500.65,213.79)<<endl;
			return 0;
}
