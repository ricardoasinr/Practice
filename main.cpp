//
//  main.cpp
//  Basic C++
//
//  Created by Ricardo Asin on 6/8/21.
//
// V 0.2
// V 0.3
int mayor (int var1, int var2)
{
    int mayy =0;
    if(var1>var2)
    {
         mayy = var1;
    }
    return  mayy;
}
int menor (int var1, int var2)
{
    int menn =0;
    if(var2>var1)
    {
         menn = var2;
    }
    return  menn;
}


#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    int a;
    int b;

    cout<<"Ingrese un valor para A"<<endl;

    cin>>a;
    
    cout<<""<<endl;
    
    cout<<"Ingrese un valor para B"<<endl;
    
    cin>>b;
    
    cout<<""<<endl;
    
    cout<<"Los numeros que acabas de introducir son: "<<endl;
    cout<<"A "<<"["<<a<<"]"<<endl;
    cout<<"B "<<"["<<b<<"]"<<endl;
    
    //Bueno a ver que pasa
    int avanzar = 0; //Esto no hace nada

    
    int m = mayor(a, b);
    cout<<m;
        
    
    return 0;
}
