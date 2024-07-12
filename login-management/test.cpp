#include <bits/stdc++.h>
using namespace std;

int main(){
    string userName, email, password;
    cout << "----------------SIGN UP----------------" << endl;
			cout << "Enter Your Name:";
			getline(cin,userName);

			cout << "Enter Your Email:  " ;
			getline(cin,email);
			
			cout << "Enter Your password: ";
			getline(cin,password);
		
    cout << endl << userName << ' '<< email << ' '  << password << endl;
}