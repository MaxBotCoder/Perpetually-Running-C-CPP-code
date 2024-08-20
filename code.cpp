#include <iostream>
#include <string>

int main(){

 /*I means input you can change its variable name
 however then you must update the input variable names
 of all the code that relys on said variable*/

 std::string I = "";

 while(I != "stop"){

      std::cout << "\n" << "Input command here: ";

      std::cin >> I;

      std::cout << "\n" << I  << "\n";

      if(I == "stop"){

      exit(true);

 }

 }

}
