#include<iostream>

using namespace std;
int adiff(int a, int b){
   
     int c = a - b;
     if(c < 0){
       c = -c;
    }
    
    c = c % 360;
    if (c > 180)
        c = 360 - c;
    return c;
}

int main() {
  cout << adiff(1000,280);
}
