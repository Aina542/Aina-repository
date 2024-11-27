#include <iostream>
using namespace std;
struct User
 {
   string name;
};
void inputUserName(User &user)
 {
    cout << "Enter your username: ";
    getline(cin, user.name);
}
bool simulateLogin(const User &user)
 {
    if (user.name != "")
	 {
        return true;  
    }
    return false; 
}
void displayWelcomeMessage(const User &user)
 {
    cout << "\nWelcome, " << user.name << "! You have successfully logged in." << endl;
}
int main() 
{
    User user;   
    inputUserName(user);   
    if (simulateLogin(user))
	 { 
        displayWelcomeMessage(user);
    } else
	 {
        cout << "\nLogin failed. Please try again!" << endl;
    }
    return 0;
}