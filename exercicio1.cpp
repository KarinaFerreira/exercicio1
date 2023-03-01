

#include <iostream>
using namespace std;

int main()
{
    int p1 = 0, p2 = 0, calc = 0;
    string nome = "";

    cout << "Digite seu nome:\n";
    cin >> nome;
    cout << "Digite a nota da p1:\n";
    cin >> p1;
    cout << "Digite a nota da p2:\n";
    cin >> p2;
    calc = (p1 + p2) / 2;
    if (calc >= 6) {
        cout << nome + ", vc foi APROVADO(A)!\n";
        cout << "Media: " + calc;
    }
    else {
        cout << nome + ", vc foi REPROVADO(A)!\n";
        cout << "Media: " + calc;
    }
}