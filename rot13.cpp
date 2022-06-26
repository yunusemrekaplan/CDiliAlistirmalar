#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string msg;
  cin >> msg;
  char ab[52] = {'A','a','B','b','C','c','D','d','E','e','F','f','G','g','H','h','I','i','J','j','K','k','L','l','M','m','N','n','O','o','P','p','Q','q','R','r','S','s','T','t','U','u','V','v','W','w','X','x','Y','y','Z','z'};
  int size = msg.length(), k, control = 1;
  string yeni = msg;
  for(int i=0; i<size; i++) {
    for(int j=0; j<52; j++) {
      if(msg[i] == ab[j]) {
        if(j < 26) k = j + 26;
        else k = j - 26;
        yeni[i] = ab[k];
        control = 0; 
        break;
      }
    }
    if(control == 1) {
      yeni[i] = msg[i];
      break;
    }
    control = 1;
  }
  cout << yeni;
}
