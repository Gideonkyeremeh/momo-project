#include <iostream>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int momopin, momo_pin, walletbalance, balance, option, number, send, airtime_amount, pin, new_pin, lim;
	momopin = 0000;
	walletbalance = 1000;
	lim = 6 * 100000000;
	cout << "Welcome to Assan's Tranfer Services"<<endl;
	cout << "Please Select From The Options Below The Index of Choice"<<endl;
	cout << "1. Transfer Money"<<endl;
	cout << "2. Buy Airtime"<<endl;
	cout << "3. Check Account Balance"<<endl;
	cout << "4. Change Pin"<<endl;
	cout << "5. Exit"<<endl;
	start:
	cin >> option;
	balance = walletbalance - (send + airtime_amount);
	if (option==1) {
	system("CLS");
		cout << "Enter Momo Number" << endl;
	continue_2:
		cin >> number;
		goto crosscheck;
	continue_1:
		cout << "Enter amount to send" << endl;
		cin >> send;
		cout << "Kindly wait for authentication"<<endl;
		if (send<=balance){
				goto authentication_1;
			} else {
				cout << "Issuficient Balance"<<endl;
				goto end;
			}
		}else if (option==2) {
			cout << "Enter Number" << endl;
	continue_4:
			cin >> number;
			goto crosscheck_1;
	continue_3:
			cout << "Enter Amount"<<endl;
			cin >> airtime_amount;
			cout << "Kindly wait for authentication"<<endl;
			if (airtime_amount<=balance){
				goto authentication_1;
			} else {
				cout << "Issuficient amount"<<endl;
				goto end;
			}
		} else if(option==3){
			system("CLS");
			cout << "Enter Mobile Money Pin"<<endl;
			cin >> momo_pin;
		if (momo_pin == momopin){
			cout << balance;
			goto end;
		}
			else {
				goto authentication_12;
			}
		} else if (option==4){
			system("CLS");
			cout << "Enter Old or Default Pin" << endl;
			cin >> pin;
			if (pin==momopin){
			cout << "Enter New Pin" << endl;
				cin >> new_pin;
				momopin = new_pin;
				cout << "Pin Has Been Updated"<< endl;
				goto end;
			} else {
				goto authentication_2;
			}
		} else if (option==5) {
				system("CLS");
			cout << "Thank You for your time"<< endl;
			goto end;
		} else {
			cout << "The input is not valid"<< endl;
			cout << "Try again" << endl;
			goto start;
		}
		goto end;
		authentication_1:
			cout << "Authenticating" << endl;
			cout << "Enter Mobile Money Pin" << endl;
			cin >> momo_pin;
			if (momo_pin == momopin){
		check:
				cout << "Transaction Was Successful" << endl;
				goto end;
		} else {
			goto authentication_2;
		}
		authentication_2:
			cout << "Authenticating" << endl;
			cout << "Incorrect mobile money pin, you have two chances left" << endl;
			cout << "Re-enter the mobile money pin or press 0 to exit" << endl;
			cin >> momo_pin;
			if (momo_pin == momopin){
				goto check;
			} else if (momo_pin == 0){
				goto end;
			} else {
				goto authentication_3;
			}
		authentication_3:
			cout << "You have entered an incorrect pin twice"<< endl;
			cout << "This is your last opportunity"<< endl; 
			cout << "Re-enter or press 0 to exit"<< endl;
			cin >> momo_pin;
			if (momo_pin == momopin){
				goto check;
			} else if (momo_pin == 0){
				goto end;
			} else {
				cout << "You have exceeded your limit"<< endl;
				cout << "Program is shutting down";
			}
			return 0;
			authentication_12:
			cout << "Incorrect mobile money pin, you have two chances left" << endl;
			cout << "Re-enter the mobile money pin or press 0 to exit" << endl;
			cin >> momo_pin;
			if (momo_pin == momopin){
				cout << balance << endl;
				goto end;
			} else if (momo_pin == 0){
				goto end;
			} else {
				goto authentication_13;
			}
		authentication_13:
			cout << "You have entered an incorrect pin twice"<< endl;
			cout << "This is your last opportunity"<< endl; 
			cout << "Re-enter or press 0 to exit"<< endl;
			cin >> momo_pin;
			if (momo_pin == momopin){
				cout << balance << endl;
				goto end;
			} else if (momo_pin == 0){
				goto end;
			} else {
				cout << "You have exceeded your limit"<< endl;
				cout << "Program is shutting down";
			return 0;
			}
		crosscheck:
			if(number > 0200000000){
				goto crosscheck_2;
			}else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_2;
			}
		crosscheck_1:
			if(number > 0200000000){
				goto crosscheck_3;
			}else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_4;
			}
		crosscheck_2:
			if (number < lim){
				goto continue_1;
			} else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_2;
			}
		crosscheck_3:
			if (number < lim){
				goto continue_3;
			} else {
				cout << "Number is invalid" << endl;
				cout << "Re-enter number" << endl;
				goto continue_4;
			}
			end:
				cout << "Program is exiting";
			













	return 0;
}
