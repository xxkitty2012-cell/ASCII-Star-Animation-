#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    system("color 0e");
    cout << "+---------+\n";
    
    for (int i = 1; i <= 10; i += 2) 
    {    

        int spacje = (9- i) / 2;

        cout << "|";

        for (int s = 0; s < spacje; s++) cout << " ";
        for (int g = 0; g < i; g++) cout << "*";
        for (int s = 0; s < spacje; s++) cout << " ";
        cout <<"|\n";
        Beep(200, 400);
     
        Sleep(600); 

        cout << "+---------+\n";

    }

    return 0;
}
