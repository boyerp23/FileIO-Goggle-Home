// FileIO Google Home.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include<algorithm>

using namespace std;
/*google home's limited limited function here
all data written is stored in a .txt file and can be manipulated and adjusted
from the .txt fileas well as through the key and value inputs from user.


where myGoogle begins*/
void myGoogle() 
{
    fstream f;
    string us;
    string us2;
    char usr_in;
    cout << "which mode do you wish to use? r for read w for write." << endl;
    cin >> usr_in;
    if (usr_in == 'r')
    {
        f.open("myText", ios::in);// ios::in reads ios::out writes
        string s;
        while (getline(f, s))
        {
            cout << s << endl;
        }
        f.close();
    }//where if ends
    else
    {
        f.open("myText", ios::out | ios::in | ios::app);
        cout << "Lets make some  string pairs" << endl;
        cout << "Enter a key" << endl;
        //user inputs data
        cin >> us;
        //puts a space between key and value
        us.append("   ");
        cout << "Enter a value" << endl;
        //user inputs data
        cin >> us2;
        //places key, space, and value together on line 
        us.append(us2);
        //places space between new entries
        us.append("\n");
        //states user inputs as it would appear on .txt
        cout << "Your key value pair is: " << us << endl;
        //writes to .txt
        f << us;
        f.close();
    }//where else ends
}//where myGoogle ends

//where main begins
int main()
{
    // Intro from google home
    cout << "Hello this is your Google Home, & I am your new assitant, to reach me simply say 'Google' " << endl;
    cout << "followed by your query." << endl;
    cout << "I have limited capability at this time, however I am able to read and write simple information" << endl;
    cout << "I will ask you for a 'value' - I.E.'Name'" << endl;
    cout << "Then I will ask for a 'key' - I.E. 'John'" << endl;
    cout << "In order to write simply input 'w' when prompted, or input 'r' to get a read back of stored information"<<endl;
    // user input required to continue loop
    char ui;
    while (true)
    {
        //prototyped function for loop
        myGoogle();
        //asks user if they wish to continue to input 'y' any other character selction will end the program
        cout << "do you want to contiue? Enter 'y' for yes" << endl;
        //gets user input
        cin >> ui;
        //checks if true - if true program continues - if not program terminates
        if (ui != 'y')
        {
            break;
        }// where if ends
    }//where while ends
}//where main ends

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
