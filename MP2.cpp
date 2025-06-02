#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    const string correctUsername = "user"; // credential for user
    const string correctPassword = "jmd123"; // credetial for password
    const int maxAttempts = 3; // maximum attempts
    int attempts = 0;
    string username, password;

    // ASCII Art Header
    cout << "============================\n";
    cout << "   Secure Login System\n";
    cout << "============================\n";

    while (attempts < maxAttempts) {
        cout << "\nAttempt " << (attempts + 1) << " of " << maxAttempts << endl;
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        // Check input
        if (username == correctUsername && password == correctPassword) {
            // ASCII Art Access Granted
            cout << "\nAccess Granted!\n";
            cout << R"(

 █████╗  ██████╗ ██████╗███████╗███████╗███████╗            
██╔══██╗██╔════╝██╔════╝██╔════╝██╔════╝██╔════╝             
███████║██║     ██║     █████╗  ███████╗███████╗             
██╔══██║██║     ██║     ██╔══╝  ╚════██║╚════██║             
██║  ██║╚██████╗╚██████╗███████╗███████║███████║            
╚═╝  ╚═╝ ╚═════╝ ╚═════╝╚══════╝╚══════╝╚══════╝            
                                                            
 ██████╗ ██████╗  █████╗ ███╗   ██╗████████╗███████╗██████╗ 
██╔════╝ ██╔══██╗██╔══██╗████╗  ██║╚══██╔══╝██╔════╝██╔══██╗
██║  ███╗██████╔╝███████║██╔██╗ ██║   ██║   █████╗  ██║  ██║
██║   ██║██╔══██╗██╔══██║██║╚██╗██║   ██║   ██╔══╝  ██║  ██║
╚██████╔╝██║  ██║██║  ██║██║ ╚████║   ██║   ███████╗██████╔╝
 ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝   ╚═╝   ╚══════╝╚═════╝ 
)"  ;    
    break;
        } else {
            // ASCII Art for Access Denied
            cout << "\nAccess Denied!\n";
            cout << R"(

 █████╗  ██████╗ ██████╗███████╗███████╗███████╗
██╔══██╗██╔════╝██╔════╝██╔════╝██╔════╝██╔════╝
███████║██║     ██║     █████╗  ███████╗███████╗
██╔══██║██║     ██║     ██╔══╝  ╚════██║╚════██║
██║  ██║╚██████╗╚██████╗███████╗███████║███████║
╚═╝  ╚═╝ ╚═════╝ ╚═════╝╚══════╝╚══════╝╚══════╝
                                                
██████╗ ███████╗███╗   ██╗██╗███████╗██████╗    
██╔══██╗██╔════╝████╗  ██║██║██╔════╝██╔══██╗   
██║  ██║█████╗  ██╔██╗ ██║██║█████╗  ██║  ██║   
██║  ██║██╔══╝  ██║╚██╗██║██║██╔══╝  ██║  ██║   
██████╔╝███████╗██║ ╚████║██║███████╗██████╔╝   
╚═════╝ ╚══════╝╚═╝  ╚═══╝╚═╝╚══════╝╚═════╝    
)";
            attempts++;
            if (attempts == maxAttempts) {
                cout << "\nMaximum attempts reached. Access locked.\n";
            }
        }
    }

    return 0;
}