#include <iostream>
using namespace std;

int main() {
   string name;
   cin >> name;
   try {
      if(name.size() >= 4 && name.size() <=20 ){
         cout << "Valid" << endl;
      }else{
         throw 99;
      }
   }
   catch(int x) {
      cout << "Invalid" << endl;
   }
   
   return 0;
}
