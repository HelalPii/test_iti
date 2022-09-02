#include <iostream>
#include <string>


class cEmployee{
	
private:
std::string name;
int id;
int salary;
public:

void GetData(void){
	std::cout<<"enter the name :"<<std::endl;
	std::cin>>name;
	std::cout<<"enter the ID :"<<std::endl;
	std::cin>>id;
	std::cout<<"enter the salary :"<<std::endl;
	std::cin>>salary;
}

void print(void){
	std::cout<<"========"<<std::endl;
	std::cout<<"name :"<< name <<std::endl;
	std::cout<<"ID :"<< id <<std::endl;
	std::cout<<"salary :"<< salary <<std::endl;
	std::cout<<"========"<<std::endl;
	
}
};


int main (){

cEmployee e[10];

char c='y';
int m =0;

while (c=='y'){
	std::cout<<"do you want to add a new employee>>> y for yes // n for no "<<std::endl;
	std::cin>>c;
	if(c=='y'){
		e[m].GetData();
		m++;
	}
	else {
		for(int i =0 ;i <m; i++){
			e[i].print();
		}
	}
	
}




return 0;
}