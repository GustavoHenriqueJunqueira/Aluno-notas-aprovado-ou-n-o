//
//  main.cpp
//  Exercicio 38
//
//  Created by Gustavo Henrique Furtado Junqueira on 17/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    double nota1, nota2, nota3, nota4;
    
    string nome_aluno;
    
    cout<<"Digite o nome do aluno:\n";
    cin>>nome_aluno;
    cout<<"Digite a primeira nota do aluno:\n";
    cin>>nota1;
    cout<<"Digite a segunda nota do aluno:\n";
    cin>>nota2;
    cout<<"Digite a terceira nota do aluno:\n";
    cin>>nota3;
    cout<<"Digite a quarta nota do aluno:\n";
    cin>>nota4;
    
    double soma= nota1+nota2+nota3+nota4;
    soma= soma/4;
    
    int frequencia;
    
    cout<<"Digite a frequancia do aluno durante todo o curso:\n";
    cin>>frequencia;
       
    if (soma>=6 && frequencia >=160){
        cout<<"O aluno  esta aprovado. Parabéns, sua nota é "<<soma<<" e sua frequencia é "<<frequencia<<"\n";
    }
    else if (soma>=5 || soma<=6 || frequencia <= 160){
        cout<<"O aluno esta de recuperação, sua nota é: "<<soma<<" e sua frequencia é "<<frequencia<<"\n";
        }
    else if  (soma <5 && frequencia<160 ) {
        cout<<"O aluno esta reprovado ou a soma de suas notas é menor que 50 pontos ou a frequencia nas aulas é menos que 160.\n"<<soma<<"_"<<frequencia<<"\n";
    }
    

    return 0;

}