#include <bits/stdc++.h>
using namespace std;

signed main(){
    set<int> alunos;
    int n, aluno;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aluno;
        alunos.emplace(aluno);

    }

    cout << alunos.size();


}