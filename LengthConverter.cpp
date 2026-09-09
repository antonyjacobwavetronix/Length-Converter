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
					case 5:
						float result;
						cout<<"Enter value in meters: ";
						cin>>inp;
						result=inp*39.37;
						cout<<"Result: "<<result;
						break;
					case 6:
						exit(0);
					default:
						cout<<"Invalid Choice!!!";
						break;
				}
		}while(true);
	
	}
	return 0;
}