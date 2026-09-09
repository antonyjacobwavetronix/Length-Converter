#include <iostream>
using namespace std;
int main(){
	int i=1,inp;
	while (true){
		cout<<"================================\n";
		cout<<"1. Meters to Kilometers\n2. Meters to Centimeters\n3. Meters to Millimeters\n4. Meters to Feet\n5. Meters to Inches\n6. Exit";
		cout<<"================================\n";
		cout<<"Enter choice: ";
		cin>>i;
		do{
				switch(i){
					case 3:
					double meter;
					cout<<"give the value to be converted: "<<endl;
					cin>>meter;
					double millimeters;
					millimeters = meter * 1000;
					cout<<"final answer after converting to millimeters = "<<millimeters;
					break;
			
				}
		}while(true);
	
	}
	return 0;
}