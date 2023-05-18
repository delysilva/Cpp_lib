#include <bits/stdc++.h>
using namespace std;

signed main(){
    int qtd;
    int compra;
    map<string, int> preco;


    string produto;
    int valor;
    cin >> qtd;

    // ler a entrada
    for(int i = 0; i < qtd; i++){
        cin >> produto >> valor;
        preco[produto] = valor;
    }

    int consultas;
    int ans = 0;
    cin >> consultas;
    // processar as consultas
    for(int i = 0; i < consultas; i++){
        cin >> produto;
        ans += preco[produto];
    }
    cout << ans;

}