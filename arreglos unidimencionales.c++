#include <iostream>

using namespace std;

int main() {
    int vertice[100][3]; 
    int caras[100][10];  
    int a = 0, b = 0;
    int o;

    while (true) {
        cout << "1. Definir los vértices" << endl;
        cout << "2. Definir las caras" << endl;
        cout << "3. Mostrar la figura final" << endl;
        cout << "4. Salir" << endl;
        cout << "Qué opción desea: ";
        cin >> o;
        
        if (o == 1) {
            cout << "Ingrese la cantidad de vértices que quiere: ";
            cin >> a;
            for (int i = 0; i < a; i++) {
                cout << "Ingrese x del vértice " << i + 1 << ": ";
                cin >> vertice[i][0];
                cout << "Ingrese y del vértice " << i + 1 << ": ";
                cin >> vertice[i][1];
                cout << "Ingrese z del vértice " << i + 1 << ": ";
                cin >> vertice[i][2];
            }
        } else if (o == 2) {
            if (a < 3) {
                cout << "Se necesita un mínimo de 3 vértices para formar una cara" << endl;
            } else {
                cout << "Ingresa la cantidad de caras que quiere: ";
                cin >> b;
                for (int i = 0; i < b; i++) {
                    cout << "Ingrese la cantidad de vértices que tiene su cara: ";
                    int k;
                    cin >> k;
                    caras[i][0] = k; 
                    for (int j = 1; j <= k; j++) {
                        cout << "Ingrese el índice del vértice: ";
                        cin >> caras[i][j];
                    }
                }
            }
        } else if (o == 3) {
            if (a == 0) {
                cout << "Aún no hay datos" << endl;
            } else {
                cout << "Vértices:" << endl;
                for (int i = 0; i < a; i++) {
                    cout << "V" << i + 1 << ": x = " << vertice[i][0] << ", y = " << vertice[i][1] << ", z = " << vertice[i][2] << endl;
                }
                cout << "Caras:" << endl;
                for (int i = 0; i < b; i++) {
                    cout << "Cara " << i + 1 << ": ";
                    for (int j = 1; j <= caras[i][0]; j++) {
                        cout << caras[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        } else if (o == 4) {
            cout << "Saliendo del programa" << endl;
            break;
        }
    }
    
    return 0;
}
