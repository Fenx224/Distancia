#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1,x2,y1,y2,r;
    cout<<"introduce los datos de x1 y x2 respectivamente"<<endl;
    cout<<"x1:"<<endl;
    cin>>x1;
    cout<<"x2:"<<endl;
    cin>>x2;
    cout<<"introduce los datos de y1 y y2 respectivamente"<<endl;
    cout<<"y1:"<<endl;
    cin>>y1;
    cout<<"y2:"<<endl;
    cin>>y2;
    r=sqrt((x2-x1)+(y2-y1)*(x2-x1)+(y2-y1));
    cout<<"La distancia entre los dos puntos es de:"<<endl;
    cout<<r;
}