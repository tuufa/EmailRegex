#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool CheckEnail(const string& email) 
{
    const regex pattern( R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");

    return regex_match(email, pattern);
}

int main(int argc, char* argv[]) {
    string email;

    if (argc > 1) 
    {
        email = argv[1];
    }
    else 
    {
        cout << "Enter email address: ";
        getline(cin, email);
    }

    if (CheckEnail(email))
    {
        cout << "Valid email address" << endl;
    }
    else
    {
        cout << "Invalid email address" << endl;
    }

    return 0;
}

