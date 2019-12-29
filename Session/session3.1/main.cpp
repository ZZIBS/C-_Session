

                //   SESSION 3.1    //

#include <iostream>

using namespace std;

struct book{

    string book_name;

};

book my_library[10];


void fill_library()      // declaring a void funcation
{
    cout <<"Let's fill the library wit some book!!"<<endl;
    my_library[0].book_name = "Computer science";
    my_library[1].book_name = "Maths";
    my_library[2].book_name = "English";



}

void print_library()
{
    cout <<my_library[1].book_name<<<<endl;

}


int main()
{
    fill_library();        // calling from a void funcation.
    //cout<<my_library

print_library();
}
