#include<iostream>
using namespace std;
    // we created a class called AnimalSays.
class AnimalSays {
    public:

    // we declair cat and dog as member function of this class.
    void cat(){
        cout<<" miaow  \n";
    }

    void dog(){
        cout<<" woof \n";
    }
};
int main(){

    // here we have created an object of the class.
    AnimalSays speak;
    // And now we are good to call the member functions.
    speak.cat();
    speak.dog();

 return 0;
}

