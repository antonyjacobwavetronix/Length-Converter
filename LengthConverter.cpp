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
			    case 2:
					double meters;
					double	centimeters;
					
					cout<<"Enter length in meters";
					cin>>meters;
					
					centimeters=meters*100;
					
					cout<<"Length in centimeters:"<<centimeters<<endl;
					break;
					
				case 3:
					double meter;
					cout<<"give the value to be converted: "<<endl;
					cin>>meter;
					double millimeters;
					millimeters = meter * 1000;
					cout<<"final answer after converting to millimeters = "<<millimeters;
					break;

				case 4:
				   double leng;
				   cout<<"Enter the length(in metres): ";
				   cin>>leng;
				   double foot= leng/30;
				   cout<<"Length in foot is: "<<foot<<"\n";
				   break;
		
				case 1:
					double a;
					double b;
					cout<<"\nEnter the value to be converted to KM:\n";
					cin>>a;
					b = a/1000.0;
					cout<<"The converted value is:"<<b;
					break;
	
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