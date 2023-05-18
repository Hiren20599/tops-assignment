#include<iostream>
using namespace std;
/*Define a class to represent a bank account. Include the following members: 
Data Member: -Name of the depositor - Account Number - Type of Account - Balance amount in the account 
Member Functions - To assign values - 
To deposited an amount - To withdraw an amount after checking balance - To display name and balance.*/

class bank_acc
{
	public:
		string name,acc_type;
		int acc_num,balance;
		void getmember()
		{
			cout<<"Name of the depositor: ";
			cin>>name;
			cout<<"Account Number: ";
			cin>>acc_num;
			cout<<"Type of Account: ";
			cin>>acc_type;
			cout<<"Balance Amount in the Account: ";
			cin>>balance;
		}
		void display()
		{
			cout<<"\n\n\nName: "<<name<<"\nAccount Number: "<<acc_num<<"\nAccount type: "<<acc_type<<"\nCurrent Balance: "<<balance<<endl;
		}
		void deposit()
		{
			int amt;
			cout<<"\n\n\nEnter the amount to deposit: ";
			cin>>amt;
			balance=balance+amt;
			cout<<"\nAmount deposited successfully!!\nYour new balance is :"<<balance<<endl;	
		}
		void withdraw()
		{
			int amt1;
			cout<<"\n\n\nEnter the amount to withdraw: ";
			cin>>amt1;
			if(balance>=amt1)
				{
					balance=balance-amt1;
					cout<<"\nYour remaining balance is :"<<balance<<endl;
				}
			else
				{
					cout<<"\nYour account does not have sufficient balance :("<<endl;
				}
		}	
};
int main()
{
	int choice;
	bank_acc mem1;
	mem1.getmember();
	cout<<"\n\n\n1.Your Information\n2.Deposit\n3.Withdraw\n\n\nEnter your choice: ";
	cin>>choice;
	if(choice==1) mem1.display();
	else if(choice==2) mem1.deposit();
	else if(choice==3) mem1.withdraw();
	return 0;
}
