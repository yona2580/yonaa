#include <iostream>
using namespace std;

class Animal{
protected:
	string name="Animal";
	public:
		void speak () {
			cout<<name<<"makes sound"<<endl;
		}
};

class dog : public Animal {
public:
	void woo() {
		cout<<"dog"<< " " <<"says woo"<<endl;             
	}
};
class cat : public Animal {
	public:
		void meow(){
			cout <<"cat"<<" "<<"says meow!"<<endl;
		}
};
int main() { 
dog d;
d.speak();
d.woo();
cat c;
c.meow();
return 0;
}