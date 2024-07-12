#include <bits/stdc++.h>
using namespace std;

set<int> password_set;

int main(){

    int length;
    cout << "ENTER THE LENGTH OF YOUR PASSWORD (IN NUMBER) :: ";
    cin >> length;

    auto get_password = [] (int n) -> string{
        string characters = "";
        for(char a  = 'a' ; a <= 'z'; a++){
            characters += a;
            characters += toupper(a);
        }
        characters += "1234567890";
        int random;
        string password;
        for(int i = 0; i < n ; i++){
            random = rand() % characters.size();
            password += characters[random];
        }
        return password;
    };


    string password = get_password(length);
    cout << password << endl;
}