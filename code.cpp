#include <iostream>
#include <string>

int main(){

 std::cout << "\n" << "Input command here: ";

 std::string I = "";

 std::cin >> I;

 std::cout << "\n" << I  << "\n";

 while(I != "stop"){

      std::cout << "\n" << "Input command here: ";

      std::string I = "";

      std::cin >> I;

      std::cout << "\n" << I  << "\n";

      if(I == "stop"){

      exit(true);

 }

 }

}
