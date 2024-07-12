#include <bits/stdc++.h>
using namespace std;

class management{

	string userName, email, password;
	string searchName, searchEmail, searchPass;
	fstream file;
	public:
		void sign_up(){
			cout << "----------------SIGN UP----------------" << endl;
			cout << "Enter Your Name(without any space) :: ";
			cin >> userName;
			// cout << 'x' << ' ' << "HELLO" << endl;

			cout << "Enter Your Email :: " ;
			cin >> email;
			
			cout << "Enter Your password :: ";
			cin >> password;

			file.open("logindata.txt",ios :: out | ios:: app);
			file << userName << "*" << email << "*" << password << endl;
			file.close();
		}
		void login(){
			cout << "------------LOGIN-----------" << endl;
			abarde:
			cout << "Enter Your Name :: ";
			cin >> searchName;
			cout << "Enter Your Password :: ";
			cin >> searchPass;
			
			file.open("logindata.txt", ios :: in);
			getline(file,userName,'*');
			getline(file,email,'*');
			getline(file,password,'\n');
			while(!file.eof()){
				if(password == searchPass && userName == searchName){
					cout << "\n Account Login Successfull....... " << endl;
					cout << "Your username is: " << userName << endl;
					cout << "Your email is: " << email << endl;
					
				}
				else{
					cout << "sorry, Invalid passWord" << endl;
					goto abarde;
				}
				getline(file,userName,'*');
				getline(file,email,'*');
				getline(file,password,'\n');
			}		
			file.close();
		}
		void forget_password(){
			cout << "Enter your Username: " << endl;
			cin >> searchName;
			cout << "Enter Your Email: " << endl;
			cin >> searchEmail;
			
			file.open("logindata.txt" , ios :: in);
			getline(file,userName,'*');
			getline(file,email,'*');
			getline(file,password,'\n');
			while(!file.eof()){
				if(userName == searchName and email == searchEmail){
					cout << "account's password is: " << password << endl;
					
				} else{
					cout << "sorry, something is invalid" << endl;
				}
				
			}
			file.close();
		}
}manager;

int main(){
	int choice;
	bool choice_select = true, if_on = true;
	do{
		if(if_on){
			cout << "1.Login\n";
			cout << "2.Sign-up\n";
			cout << "3.Forget-password" << endl;
			cout << "4.Exit" << endl;
			cout << "Enter your choice (choice should be between 1-4): ";
		}
		cin >> choice ;
		if(choice >= 1  and choice <= 4){
			choice_select = false;
		} else{
			choice_select = true;
			if_on = false;
			cout << "Enter a valid choice: " << endl;
		}	
	}while(choice_select);
	// cout << "welcome to the system" << endl;
	switch (choice){
		case 1:
			manager.login();
		break;
		
		case 2:
			manager.sign_up();
		break;

		case 3:
			manager.forget_password();
		break;

		case 4:
			return 0;
	}

	

}


