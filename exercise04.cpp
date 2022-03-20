#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int len, int wth);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

void input(int &len, int &wth){
  int *length=&len;
  int *width=&wth;
  cout<<"Enter a length:";
  cin>>length;
  cout<<"Enter a width:";
  cin>>width;
  
  
}

// Implement the Input Function here
