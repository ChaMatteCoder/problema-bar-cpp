#include <bits/stdc++.h>

using namespace std;

int main()
{
    string Sexo;
    int Cervejas, Refrigerante, Espetos;
    double consumo;


    cout << "Sexo: ";
    cin >> Sexo;
    cout << "Quantidade de cervejas: ";
    cin >> Cervejas;
    cout << "Quantidade de refrigerantes: ";
    cin >> Refrigerante;
    cout << "Quantidade de espetinhos: ";
    cin >> Espetos;
    cout << fixed << setprecision(2);


if (consumo <= 30.0){

    if(Sexo == "F"){

        consumo = (Cervejas * 5.0) + (Refrigerante * 3.0) + (Espetos * 7.0);
        cout << "RELATORIO:" << endl;
        cout << "Consumo = R$ " << consumo << endl;
        cout << "Couvert = R$ 4,00 " << endl;
        cout << "Ingresso = R$ 8,00" << endl;
        cout << "" << endl;
        cout << "Valor a Pagar = R$ " << consumo + 4.0 + 8.00 << endl;
    }

    else if(Sexo == "M"){

        consumo = (Cervejas * 5.0) + (Refrigerante * 3.0) + (Espetos * 7.0);
        cout << "RELATORIO:" << endl;
        cout << "Consumo = R$ " << consumo << endl;
        cout << "Couvert = R$ 4,00 " << endl;
        cout << "Ingresso = R$ 10,00" << endl;
        cout << "" << endl;
        cout << "Valor a Pagar = R$ " << consumo + 4.0 + 10.0 << endl;
    }
}

if(consumo > 30.0){

    if(Sexo == "F") {
        consumo = (Cervejas * 5.0) + (Refrigerante * 3.0) + (Espetos * 7.0);
        cout << "RELATORIO:" << endl;
        cout << "Consumo = R$ " << consumo << endl;
        cout << "Insento de Couvert = R$ 0,00" << endl;
        cout << "Ingresso = R$ 8,00" << endl;
        cout << "" << endl;
        cout << "Valor a Pagar = R$ " << consumo + 8.00 << endl;

    }

    else if(Sexo == "M") {
        consumo = (Cervejas * 5.0) + (Refrigerante * 3.0) + (Espetos * 7.0);
        cout << "RELATORIO:" << endl;
        cout << "Consumo = R$ " << consumo << endl;
        cout << "Insento de Couvert" << endl;
        cout << "Ingresso = R$ 10,00" << endl;
        cout << "" << endl;
        cout << "Valor a Pagar = R$ " << consumo + 10.00 << endl;
    }
}

    return 0;
}
