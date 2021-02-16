#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	double americanColonial;	// contains the price of each item
  double modern;
  double frenchClassical;	
  double americanBill;
  double modernBill;
  double frenchBill;
	double totalBill;	// contains the total bill.

  americanColonial = 85.00;
  modern = 57.50;
  frenchClassical = 127.75;

	cout << setprecision (2) << fixed; 	// formatted output 
	
	cout << "Please input the number of American Colonial chairs sold\n";
	cin >> quantity;
  
  americanColonial= 85.00 * quantity; 
 
  cout << "Please input the number of Modern chairs sold\n";
	cin >> quantity;
  
  modern= 57.50 * quantity;
  
  cout << "Please input the number of French Classical chairs sold\n";
	cin >> quantity;

  frenchClassical= 127.75 * quantity;

  totalBill= americanColonial + modern + frenchClassical; 

  cout << "The total sales of American Colonial chairs is $ \n" << americanColonial << endl;
	

  cout << "The total sales of Modern chairs is $ \n" << modern << endl;

  
  cout << "The total sales of french Classical chairs is $ \n" << frenchClassical << endl;
	
  
  cout << "The total sales of all chairs is $ \n" << totalBill << endl;
	 


}