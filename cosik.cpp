

#include <iostream>

using namespace std;

void cosik(int t[],int rozmiar);
int main()
{
    const int n = 12;
    int t[n];
    cosik(t,n);
    return 0;
}
void cosik(int t[],int rozmiar){
    int x= 100;
     for(int i=0;i<rozmiar;i++){
        t[i]=rand() % x;
        cout<<t[i]<<", ";
}
}