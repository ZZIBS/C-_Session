

                //   SESSION 3.1    //

#include <iostream>

using namespace std;

struct book{

    string book_name;

};

book my_library[5];


void fill_library()      // declaring a void funcation
{
    cout <<"Let's fill the library with some book!!"<<endl;
    my_library[0].book_name = "Computer science";
    my_library[1].book_name = "Maths";
    my_library[2].book_name = "English";
    my_library[3].book_name = "Biology";
    my_library[4].book_name = "Physics";

}

void print_library()
{
        for(int i=0; i<5;i++){
        cout <<my_library[i].book_name<<endl;
        }
}


int main()
{
    fill_library();        // calling from a void function of fill_library
    print_library();       //calling from another function for printing


}
