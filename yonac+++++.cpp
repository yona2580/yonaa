#include <iostream>
using namespace std;

class vehicle{
	protected:
		string name="vehicle";
		public:
			void move() {
				cout <<name<<"this bike is moving 180km/h"<<endl;
			}
};
class bike {
	public:
		void move() {
			cout<<"this bike is moving at 180km/h"<<endl;
		}
};
int main() {
	bike b;
	b.move();
	return 0;
	
}