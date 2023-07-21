#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float workedHours, overtime, workedIncome, overtimeIncome, grossPay = 0.0, regularHours, socialSecurity=0.06, constituencyTax=0.03,deduction, welfare=0.02, netSalary;
    const float weeklyHours = 40;
    string name;
	int pin;
	const int dependants=3;
	int noDependants;
	int excessDependants;
    
    cout<<"Enter your username:"<<endl;
    cin>>name;
        cout<<"Enter your pin :"<<endl;
        cin>>pin;

    // Taking the number of hours used for working from a user
    cout << "Enter the number of worked hours in a week: " << endl;
    cin >> workedHours;
        cout << "Enter the number of dependants: " << endl;
cin>>noDependants;
    if (workedHours <= weeklyHours) {
        grossPay = workedHours * 25000.00;
        cout << "Your grossPay is: " << fixed << setprecision(2) << grossPay << endl;
    }
    else {
        regularHours = weeklyHours;
        overtime = workedHours - weeklyHours;
        grossPay = (regularHours * 25000.00) + (overtime * 1.5 * 25000.00);
        cout << "Your grossPay is: " << fixed << setprecision(2) << grossPay << endl;
    }
    
    
if (grossPay<125001){
	
	
if(noDependants>3){
		excessDependants=noDependants-dependants;
}
	netSalary=grossPay-((socialSecurity*grossPay)+(constituencyTax*grossPay)+(welfare*grossPay));
	deduction=grossPay-netSalary;
	float netPay=netSalary+(excessDependants*5000);
	        cout << "Your netPay is: " << fixed << setprecision(2) << netPay << endl;
	        	        cout << "amount deducted: " << fixed << setprecision(2) << deduction << endl;


}
else if(grossPay>125001&&grossPay<250000){
	if(noDependants>3){
		excessDependants=noDependants-dependants;
}
	
	netSalary=grossPay-((socialSecurity*grossPay)+(constituencyTax*grossPay)+(welfare*grossPay)+(0.05*grossPay));
		deduction=grossPay-netSalary;
	float netPay=netSalary+(excessDependants*5000);

		        cout << "Your netPay is: " << fixed << setprecision(2) << netPay << endl;
	        	        cout << "amount deducted: " << fixed << setprecision(2) << deduction << endl;

}
else if(grossPay>250001&&grossPay<1750000){
	if(noDependants>3){
		excessDependants=noDependants-dependants;
}
	
	netSalary=grossPay-((socialSecurity*grossPay)+(constituencyTax*grossPay)+(welfare*grossPay)+(0.1*grossPay));
		        		        	deduction=grossPay-netSalary;
	float netPay=netSalary+(excessDependants*5000);
cout << "Your netPay is: " << fixed << setprecision(2) << netPay << endl;
	        	        cout << "amount deducted: " << fixed << setprecision(2) << deduction << endl;

}
 else if(grossPay>1750001&&grossPay<2750000){
	
	if(noDependants>3){
		excessDependants=noDependants-dependants;
}
	netSalary=grossPay-((socialSecurity*grossPay)+(constituencyTax*grossPay)+(welfare*grossPay)+(0.15*grossPay));
		deduction=grossPay-netSalary;
	float netPay=netSalary+(excessDependants*5000);

		        cout << "Your netPay is: " << fixed << setprecision(2) << netPay << endl;
		        	        	        cout << "amount deducted: " << fixed << setprecision(2) << deduction << endl;

}

else if(grossPay>2750001&&grossPay<5000000){
	
	netSalary=grossPay-((socialSecurity*grossPay)+(constituencyTax*grossPay)+(welfare*grossPay)+(0.2*grossPay));
		deduction=grossPay-netSalary;
	float netPay=netSalary+(excessDependants*5000);
		        cout << "Your netPay is: " << fixed << setprecision(2) << netPay << endl;
		        	        	        cout << "amount deducted: " << fixed << setprecision(2) << deduction << endl;

}
else if(grossPay>5000000){
	if(noDependants>3){
		excessDependants=noDependants-dependants;
}
	
	netSalary=grossPay-((socialSecurity*grossPay)+(constituencyTax*grossPay)+(welfare*grossPay)+(0.3*grossPay));
		deduction=grossPay-netSalary;
	float netPay=netSalary+(excessDependants*5000);

		        cout << "Your netPay is: " << fixed << setprecision(2) << netPay << endl;
		        	        	        cout << "amount deducted: " << fixed << setprecision(2) << deduction << endl;
}
else{
		        cout << "Your grossPay is: " << fixed << setprecision(2) << grossPay << endl;
	
}

    return 0;
}

