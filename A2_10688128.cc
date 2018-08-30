#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int number_entered =0, E, B;

int main ()
{
cout<<"Enter a number to see whether is a prime number or not \n";
cin >>number_entered;
for (E=2; E<=number_entered; E++)
{if ((number_entered%2)==0)
break;
}
if ((number_entered%2)==1 || (number_entered%2)==E)
cout <<"this is a prime number \n";
else
cout<< "this is not a prime number \n ";

return 0;
}

