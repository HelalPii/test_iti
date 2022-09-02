#include <iostream>
#include <string>
using namespace std;

int main (){
	cout<<"islam hello here"<<endl;
	
	string num ;
	getline(cin,num);
	
	string * p=&num;
	cout<<p[0].(char);
	
	/*
	if(num.length()>3){
	num.insert(num.length()-3,",");}
	
	if(num.length()>7){
	num.insert(num.length()-7,",");}
	
	if(num.length()>11){
	num.insert(num.length()-11,",");}
	 */
	
	
	
	
	
	
	cout<<num<<endl;
	
	
	return 0;
}