//this program convert uppercase to lower case and viceversa
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char Letter;
    cout<<"Enter the Letter"<< endl;
    cin>>Letter;
    if (islower (Letter))
        {
            Letter = toupper(Letter);
            cout<< " the equivalent upper case letter is" <<Letter;
        }
    else if (isupper(Letter))
		{
		Letter = tolower(Letter);
		cout<< " the equivalent lower case letter is" <<Letter;
		}
	else
		{
        cout << "Invalid input! Please enter a valid letter." << endl
    	}

    return 0;
}

