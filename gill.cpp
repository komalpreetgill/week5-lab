#include <iostream>
#include <math.h>
#include<fstream>
int main()


{
 int a,b;

    std::cout<<" write the width of triangle :  ";
    std::cin>> a;
    std::cout<<" write the height of triangle :  ";
    std::cin>> b;
    std::cout<<"               "<<std::endl; 
  auto  c = sqrt(pow(a,2) + pow(b,2));

 std::cout<<"the width   of  triangle : "<<a<<std::endl;
 std::cout<<"the height  of  triangle : "<<b<<std::endl;
 std::cout<<"the breadth of  triangle : "<<c<< std::endl;
 std::ofstream myfile;
 myfile.open(" example.txt ");
 if (myfile<<" your triangle has three sides width "<<a<<" , height "<<b<<", breadth are "<<c);

 myfile.close();
 return 0;

    
}