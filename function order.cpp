#include <iostream>

double calculateArea (int a , int b){
    return a*b;
}
int main (){
    using std :: cout;
    using std :: cin;
    using std :: endl;

    cout << "Area Calculator Initialized" << endl;
    double area = calculateArea(5,6);
    cout << "Area is" <<area<< endl;
    return 0;
}
