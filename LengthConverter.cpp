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
				case 1:
					double a;
					double b;
					cout<<"\nEnter the value to be converted to KM:\n";
					cin>>a;
					b = a/1000.0;
					cout<<"The converted value is:"<<b;
					break;
		
				}
		}while(true);
	
	}
	return 0;
}