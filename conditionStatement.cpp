
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
// we create a global varaible here.

int main()
{

    int num1;
    int num2;
    int operat_er;

    // we use if, else, else if as a conditional statements.

    // We will create a programe which calculates int, float and double like dataType using conditional statements.

    // input for second number.
    cout << "Enter Your firstNumer->" << endl;
    cin >> num1;
    // input for second number.
    cout << "Enter Your firstNumer->" << endl;
    cin >> num2;

    cout << "chouse a single operator using following info. for calculation for list down->" << endl;
    cout << "+ =1 \n- =2 \n/ =3 \nx =4" << endl;
    cin >> operat_er;
  
  
    // conditional statments starts
    int answer, answer1, answer2, answer3;
    if (operat_er == 1)
    {
        answer = num1 + num2;
        cout << "Answer: " << answer << endl;
    }
    else if (operat_er == 2)
    {
        answer1 = num1 - num2;
        cout << "Answer: " << answer1 << endl;
    }
    else if (operat_er == 3)
    {
        answer2 = num1 * num2;
        cout << "Answer: " << answer2 << endl;
    }
    else
    {
        answer3 = num1 / num2;
        cout << "Answer: " << answer3 << endl;
    }

    return 0;
}
