#include <iostream>
#include <string>

using namespace std;

int main() {
    int Num, resul, T, I;
    string linea;

    cout << "Cuantas Tablas: ";
    getline(cin, linea);
    Num = stoi(linea);

    T = 1;
    while (T <= Num) {
        I = 10;
        while (I >= 1) {
            resul = T * I;
            cout << T << " * " << I << " = " << resul << endl;
            I = I - 1;
        }
        cout << "Pulse una tecla para continuar..." << endl;
        cin.get();
        T = T + 1;
    }

    return 0;
}