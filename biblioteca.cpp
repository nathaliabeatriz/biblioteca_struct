#include<bits/stdc++.h>
using namespace std;

int pos=0;
struct Livro{
    string titulo, autor;
    int n_paginas;
    void ler(){
        cout << "Digite o titulo do livro: \n";
        cin >> titulo;
        cout << "Digite o autor do livro: \n";
        cin >> autor;
        cout << "Digite o numero de paginas do livro: \n";
        cin >> n_paginas;
    }
    void imprimir(){
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Numero de paginas: " << n_paginas << endl;
        cout << endl;
    }
};

struct Biblioteca{
    Livro livros[10];
    void ler(){
        printf("Cadastrar novo livro?\n");
        string resp;
        cin >> resp;
        if(resp == "sim" && pos<10){
            livros[pos].ler();
            pos++;
        } else if(pos>=10) cout << "\nVoce atingiu a capacidade maxima de livros\n";
    }
    void imprimir(){
        for(int i=0; i<pos; i++){
            livros[i].imprimir();
        }
    }
    void maiorLivro(){
        int maior = 0;
        string tituloMaiorLivro;
        for(int i=0; i<pos; i++){
            if(livros[i].n_paginas > maior){
                maior = livros[i].n_paginas;
                tituloMaiorLivro = livros[i].titulo;
            }
        }
        cout << "O livro com o maior numero de paginas eh:" << tituloMaiorLivro << endl;
    }
};

int main(){
    Biblioteca b;
    string z="sim";
    while(z=="sim"){
        b.ler();
        b.imprimir();
        b.maiorLivro();
        printf("\nVoce quer continuar na biblioteca?\n");
        cin >> z;
    }
    return 0;
}
