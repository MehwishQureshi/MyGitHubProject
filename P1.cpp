#include<iostream>
using namespace std;

class ComplexNo{
private :
	int real;
	int img;
public :
	ComplexNo();
	ComplexNo(int,int);
	void add(ComplexNo);
	void sub(ComplexNo);
	void mul(ComplexNo);
	void display();
	~ComplexNo();
};

ComplexNo :: ComplexNo(){
	real = 0;
	img = 0;
}

ComplexNo :: ComplexNo(int r,int i){
	real = r;
	img = i;
}

void ComplexNo :: add(ComplexNo m){
	ComplexNo res1;
	res1.real = this->real+m.real;
	res1.img = this->img+m.img;
	
	res1.display();
}

void ComplexNo :: sub(ComplexNo m){
	ComplexNo res2;
	res2.real = this->real-m.real;
	res2.img = this->img-m.img;
	
	res2.display();
}

void ComplexNo :: mul(ComplexNo m){
	ComplexNo res3;
	res3.real = (this->real*m.real) + (this->img*m.img*(-1));
	res3.img = (this->real*m.img) + (this->img*m.real);
	
	res3.display();

}

void ComplexNo :: display(){
	cout<<this->real<<"+"<<"("<<this->img<<"i"<<")";
}

ComplexNo :: ~ComplexNo(){
	//destructor
}



int main(){
	
	//creating objects for ComplexNo class;
	
	ComplexNo c1(4,3);
	ComplexNo c2(5,8);
	
	cout<<"Addition : ";
	c1.add(c2);
	cout<<endl;
	
	cout<<"Subtraction : ";
	c1.sub(c2);
	cout<<endl;
	
	cout<<"Multiplication : ";
	c1.mul(c2);

	













return 0;

}
