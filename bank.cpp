#include <iostream>
using namespace std;

int main (){
	     int cust1;
	     int cust2;
	     int cust3;
	     int cust4;
	     int cust5;
	     int cust6;
	     int cust7;
	     int cust8;
	     int cust9;
	     int cust10;
	     cout<<"Customer 1\'s account balance: ";
	     cin>>cust1;
	     cout<<"Customer 2\'s account balance: ";
	     cin>>cust2;
	     cout<<"Customer 3\'s account balance: ";
	     cin>>cust3;
	     cout<<"Customer 4\'s account balance: ";
	     cin>>cust4;
	     cout<<"Customer 5\'s account balance: ";
	     cin>>cust5;
      cout<<"Customer 6\'s account balance: ";
      cin>>cust6;
	     cout<<"Customer 7\'s account balance: ";
	     cin>>cust7;
	     cout<<"Customer 8\'s account  balance: ";
	     cin>>cust8;
	     cout<<"Customer 9\'s account balance: ";
	     cin>>cust9;
	     cout<<"Customer 10\'s account balance: ";
	     cin>>cust10;
	     
	  cout<<" "<<endl;
	        
	     cout<<"Customer 1\'s account balance is $"<<cust1<<"!"
	     	      <<"\nCustomer 2\'s account balance is $"<<cust2<<"!"
	     	      <<"\nCustomer 3\'s account balance is $"<<cust3<<"!"
	     	      <<"\nCustomer 4\'s account balance is $"<<cust4<<"!"
	     	      <<"\nCustomer 5\'s account balance is $"<<cust5<<"!"
	     	      <<"\nCustomer 6\'s account balance is $"<<cust6<<"!"
	     	      <<"\nCustomer 7\'s account balance is $"<<cust7<<"!"
	     	      <<"\nCustomer 8\'s account balance is $"<<cust8<<"!"
	     	      <<"\nCustomer 9\'s account balance is $"<<cust9<<"!"
	     	      <<"\nCustomer 10\'s account balance is $"<<cust10<<"!"<<endl; 	 
	     	      
	 cout<<" "<<endl;
	    	  
cust1*=0.9;
cust2*=0.9;
cust3*=0.9;
cust4*=0.9;
cust5*=0.9;
cust6*=0.9;
cust7*=0.9;
cust8*=0.9;
cust9*=0.9;
cust10*=0.9;

	  cout<<"10% of each customer\'s account balance will be deducted in order to make the bank\'s services better!"<<endl;
	  cout<<"Customer\'s new balance: \n"
	  <<"Customer 1: $" <<cust1
	  <<"\nCustomer 2: $" <<cust2
	  <<"\nCustomer 3: $" <<cust3
	  <<"\nCustomer 4: $" <<cust4
	  <<"\nCustomer 5: $" <<cust5
	  <<"\nCustomer 6: $" <<cust6
	  <<"\nCustomer 7: $" <<cust7
	  <<"\nCustomer 8: $" <<cust8
	  <<"\nCustomer 9: $" <<cust9
	  <<"\nCustomer 10: $" <<cust10<<endl;
	  
	cout<<" "<<endl;
	  
	   int bank_income = (0.1*cust1) + (0.1*cust2) + (0.1*cust3) + (0.1*cust4) + (0.1*cust5) + (0.1*cust6) + (0.1*cust7) + (0.1*cust8) + (0.1*cust9) + (0.1*cust10);
	
	  cout<<"Bank\'s profit: $"<<bank_income<<endl;
	  
	  
	  
	  string word; 
	     cout<<"Type \'balances\' to see everyone\'s account balances: ";
	     cin>>word;
	     cout<<" "<<endl;
	     
	     while(word != "balances"){
	     	        cout<<"I\'m sorry, I didn\'t get that."<<endl;
	     	     cout<<"Try Again: ";
	     	     cin>>word;
	     }
	     
	     	      cout<<"Customer 1\'s account balance is $"<<cust1<<"!"
	     	      <<"\nCustomer 2\'s account balance is $"<<cust2<<"!"
	     	      <<"\nCustomer 3\'s account balance is $"<<cust3<<"!"
	     	      <<"\nCustomer 4\'s account balance is $"<<cust4<<"!"
	     	      <<"\nCustomer 5\'s account balance is $"<<cust5<<"!"
	     	      <<"\nCustomer 6\'s account balance is $"<<cust6<<"!"
	     	      <<"\nCustomer 7\'s account balance is $"<<cust7<<"!"
	     	      <<"\nCustomer 8\'s account balance is $"<<cust8<<"!"
	     	      <<"\nCustomer 9\'s account balance is $"<<cust9<<"!"
	     	      <<"\nCustomer 10\'s account balance is $"<<cust10<<"!"<<endl; 	 
	  
	     return 0;
}