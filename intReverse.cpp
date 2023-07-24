#include<iostream>
using namespace std;

    class solution{
        public:
         void reverseingInt(long int x){
            // converting integer to string for the length;
            string Convertedstr = to_string(x);
            // taking the length of the string;
            long int length=Convertedstr.length();

            // Now extracting elements of integer one by one;

            for(long int i = length-1; i>=0; i--){
                // length-1 indicated the last index value of int and i=0 is the index 0;
                cout<< x%10;    // x%10 extracts the reminder (very last value of variable x);
            
                x = x/10;       // x/10 updates the x with questiont excluding very last value;

            }
            cout<< endl;

        }
    };
int main()
{
    solution reverse;
        reverse.reverseingInt( 233452534535 );    // passed input as argument in function with no return statements
    return 0;
}


