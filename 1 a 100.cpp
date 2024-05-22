#include <iostream>
using namespace std;

int main()
{
    int num[100];
    int suma=0;
    for (int i=0; i<100; i++){
        num[i]=i+1;
        suma= suma + num[i];
    }
    cout<< "La suma es: " << suma; 
   return 0;
}    