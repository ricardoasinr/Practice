//
//  main.cpp
//  Basic C++
//
//  Created by Ricardo Asin on 6/8/21.
//
int mayor (int var1, int var2)
{
    int mayy =0;
    if(var1>var2)
    {
         mayy = var1;
    }
    return  mayy;
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
    //Añadiendo comentarios
    //f8ßß∂
    //Y mi anterior codigo?
    int m = mayor(a, b);
    cout<<m;
    return 0;
}
