

                    //  SESSION 2   //

#include <iostream>

using namespace std;

struct Magazine{          // making new function
string Title;
string Type;			  // string is a sequence of character enclosed in ""
int Date;				  // integer holds non-fraction numbers.
int Num_of_page;
string Id;
};

struct Movie{
string Title;
string Type;
int Date;
string Auther;
string Id;
};

int main()
{
  Magazine my_magazine;
  my_magazine.Title = "The Himalayan Times";
  my_magazine.Type= "History";
  my_magazine.Date = 2019;
  my_magazine.Num_of_page = 10;
  my_magazine.Id = "HB125DB7";
  cout<< my_magazine.Title<<"\n"<<my_magazine.Type<<"\n"<<my_magazine.Date<<"\n"<<my_magazine.Num_of_page<<"\n"<<my_magazine.Id ;

  cout<<"\n \n";       // It breaks the line

    Movie my_movie;
    my_movie.Title = "INCEPTION";
    my_movie.Type = "Action";
    my_movie.Date = 2011;
    my_movie.Auther ="ABCC";
    my_movie.Id= "77D";
    cout<<my_movie.Title<<"\n"<<my_movie.Type<<"\n"<<my_movie.Date<<"\n"<<my_movie.Auther<<"\n"<<my_movie.Id;
    return 0;
}
