#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Caulculo e media aritmetica.
    float numero1, numero2, numero3, numero4, numero5, numero6, numero7, numero8, numero9, numero10, media, base, expoente;
    double a, b, c, Delta, x1, x2;
    string escolha;
    cout << "Escolha  qual opcao voce deseja: (Media, Potencia ou Equacao)" << endl;
    cin >> escolha;

    if (escolha == "Media")
    {

        cout << "Vamos calcular media aritmetica com lelezocas e gygyzocas" << endl;

        cout << "Numeros 1: ";
        cin >> numero1;

        cout << "Numero 2: ";
        cin >> numero2;

        cout << "Numero 3: ";
        cin >> numero3;

        cout << " Numero 4: ";
        cin >> numero4;

        cout << "Numero 5: ";
        cin >> numero5;

        cout << "Numero 6: ";
        cin >> numero6;

        cout << "Numero 7: ";
        cin >> numero7;

        cout << "Numero 8: ";
        cin >> numero8;

        cout << "Numero 9: ";
        cin >> numero9;

        cout << "Numero 10: ";
        cin >> numero10;

        media = (numero1 + numero2 + numero3 + numero4 + numero5 + numero6 + numero7 + numero8 + numero9 + numero10) / 10; // A soma dos valores.

        cout << "Média aritmetica: " << media; // O resultado dos valores.
    }
    else if (escolha == "Potencia")
    {

        cout << "\n calcule a potencia com a lele e gygy" << endl;

        cout << "Qual o numero que voce quer escolher pra sua base?" << endl;
        cin >> base;

        cout << "Qual numero voce quer escolher para seu expoente?" << endl;
        cin >> expoente;

        cout << "O resultado da sua potencia sera:" << pow(base, expoente) << endl;
    }
    else if (escolha == "Equacao")
    {
        //cin.ignore();
        cout << "Escolha o valor de A." << endl;
        cin >> a;
        cout << "Escolha o valor de B." << endl;
        cin >> b;
        cout << "Escolha o valor de C." << endl;
        cin >> c;
        Delta = (b * b) - 4 * a * c;
        cout << Delta<< endl;

        if (a != 0)
        {
            if (Delta == 0)
            {
                x1 = (-b + sqrt(Delta)) / (2 * a);
                x2 = (-b - sqrt(Delta)) / (2 * a);
                cout << "Delta e igual a 0\n";
                cout << " x1 e x2 sao iguais";
            }
        }
        else if (Delta != 0)
        {
            x1 = (-b + sqrt(Delta)) / (2 * a);
            x2 = (-b - sqrt(Delta)) / (2 * a);
            cout << "O valor de delta é:" << Delta << endl;
            cout << "O valor de x1 é:" << x1 << endl;
            cout << "O valor de x2 é:" << x2 << endl;
        }
        else
        {
            cout << "Delta menor que 0\n";
            cout << "Nao existe raiz real.";
        }
    }
    
}
