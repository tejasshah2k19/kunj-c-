#include <iostream>
#include <string.h>
using namespace std;
class Gmail
{

public:
    int login(char *email, char *password)
    {
        if (strstr(email, "@gmail.com") == NULL)
        {
            throw -9; // int
        }
        if (strlen(email) < 12)
        {
            throw 1.2;
        }

        if (strcmp(email, "admin@gmail.com") == 0 && strcmp(password, "secret") == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Gmail g;
    try
    {
        cout << g.login("admin1@gmail.com", "secret");
    }
    catch (int code)
    {
        if (code == -9)
        {
            cout << "\nPlease Enter Valid Gmail address";
        }
    }
    catch (float code)
    {
        cout << "\nInvalid email ";
    }
    return 0;
}