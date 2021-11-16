// Switch Case
//Class Exercise
//16th November

//Basic switch for conditional statements.
//works the same as IF ELSE

#include <iostream>
using namespace std; 

int main()

{
    int opt;  

    cout << "Hello! \nThis is your DBIT Semester 1 Sept to Dec 2021 Timetable\n";
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday" << endl << endl; 
    cout << "Please select day of choice. e.g 1.,2.,3.,......etc" << endl; 
    cin >> opt;

    switch (opt) {
    case 1:
    cout << "Monday Class\n...................." << endl;
    cout << "DBIT 1101: Fundamentals of IT" << endl;
    break;

    case 2:
        cout << "Tuesday Class\n...................." << endl;
        cout << "DBIT 1102: Introduction to Computer Programming" << endl;
        break;

    case 3:
        cout << "Wednesday Class\n...................." << endl;
        cout << "DBIT 1103: Introduction to Business Communication" << endl;
        break;

    case 4:
        cout << "Thursday Class\n...................." << endl;
        cout << "DBIT 1104: Introduction to Ethics" << endl;
        break;

    case 5:
        cout << "Friday Class\n...................." << endl;
        cout << "DBIT 1105: Fundamentals of Accounting" << endl;
        break;

    case 6:
        cout << "Saturday Class\n...................." << endl;
        cout << "DBIT 1106: Mathematics for Business Computing" << endl;
        break;

    default:
        cout << "Invalid input\n"; 
        
        if (opt==7)

        {
            cout << "There is no school on Sunday" << endl;
        }
    }

    return 0;

}
