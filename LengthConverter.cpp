#include <iostream>
using namespace std;
int main(){
	int i,inp;
	while (true){
		cout<<"================================\n";
		cout<<"1. Meters to Kilometers\n2. Meters to Centimeters\n3. Meters to Millimeters\n4. Meters to Feet\n5. Meters to Inches\n6. Exit\n";
		cout<<"================================\n";
		cout<<"Enter choice: ";
		cin>>i;
		do{
				switch(i){
			    case 2:
					double meters;
					double	centimeters;
					
					cout<<"Enter length in meters";
					cin>>meters;
					
					centimeters=meters*100;
					
					cout<<"Length in centimeters:"<<centimeters<<endl;
					break;
				}
		}while(true);
	
	}
	return 0;
}