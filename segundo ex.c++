#include <iostream>
using namespace std;
int a;
float d = 0.15;

int main() {
    cout << "Escriba el precio de tu artículo";
    cin >> a;
    cout << "Su artículo tiene 15% de descuento" << endl;
    cout << "Su precio final es de " << a*d << endl;

    return 0;
}
    
