

                    //   SESSION 3   //

#include <iostream>
#include <stdlib.h> // for srand, rand
#include <time.h>   // for time

using namespace std;

struct Books{
    float money;   // Float holds a real numbers.
};

int main()
{
    srand (time(NULL));
    int num,i;
    Books price[10];


    for(i=0; i<10; i++){
        num = (rand()%100+1); 	// for random number .
        price[i].money = num;
        cout<<"The Price of book "<<i<<" is: "<<price[i].money<<endl;

    }



}

