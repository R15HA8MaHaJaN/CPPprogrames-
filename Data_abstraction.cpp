
#include<iostream>
using namespace std;

class My_function{

    // we declared our two vairables in private so to keep safe and invisable to user.
    private:
    int AddNumb ;
    int RollNumb ;
    // public because we write code to edit at any any time accordit to needs.
    public:

    // here x and y are perimeter 
    void data (int x, int y){
        // since we cant edit the prive variables we need temperary containers.
       AddNumb = x;
       RollNumb = y;
    }
    // this function prints the perimeters 
    void display(){
        cout<< AddNumb<<endl;
        cout<< RollNumb<<endl;
    }

};

int main(){

    My_function call;
    // here we passed two arguments 
    call.data( 778524234,44);
    call.display();
 return 0;
}
