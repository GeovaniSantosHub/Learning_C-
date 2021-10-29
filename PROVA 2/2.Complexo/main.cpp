#include "Complexo.hpp"

int main(void)
{
    Complexo n1(4,8),n2(5,6),n3,n4;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Digite um numero complexo, uma parte real e outra imaginaria: "<<endl;
    cin>>n3;
    cout<<"Digite outro numero complexo, parte real e imagiaria: "<<endl;
    cin>>n4;
    /*teste de soma em cascata entre os numeros complexos do construtor com parâmetros (n1 e n2) e um
    instanciado pelo usuário (n3)*/
    Complexo resultado_soma1 = n1 + n2 + n3;
    //Numeros complexos instanciados pelo usuário por meio da sobregarga do ">>" (n3 e n4)
    Complexo resultado_soma2 = n3 + n4;
    Complexo resultado_multiplicacao = n3 * n4;
    Complexo resultado_subtracao = n1 - n2;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Resultado da primeira soma entre numeros complexos: "<<endl;
    cout<<"parte real: " << resultado_soma1.get_real() <<" parte imaginaria: "<<resultado_soma1.get_imaginario()<<endl;
    cout<<endl;
    cout<<"Resultado da segunda soma entre numeros complexos: "<<endl;
    cout<<"parte real: " << resultado_soma2.get_real() <<" parte imaginaria: "<<resultado_soma2.get_imaginario()<<endl;
    cout<<endl;
    cout<<"Resultado da multiplicacao: "<<endl;
    cout<<"parte real: " << resultado_multiplicacao.get_real() <<" parte imaginaria: "<<resultado_multiplicacao.get_imaginario()<<endl;
    cout<<endl;
    cout<<"Resultado da subtracao: "<<endl;
    cout<<"parte real: " << resultado_subtracao.get_real() <<" parte imaginaria: "<<resultado_subtracao.get_imaginario()<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<endl<<"Forma trigonometrica dos numeros complexos: "<<endl;
    cout<<endl;
    cout<<"n1: "<<endl<<n1<<endl;
    cout<<"n2: "<<endl<<n2<<endl;
    cout<<"Resultado da soma: "<<endl<<resultado_soma1<<endl;
    cout<<"n3: "<<endl<<n3<<endl;
    cout<<"n4: "<<endl<<n4<<endl;
    cout<<"Resultado da segunda soma: "<<endl<<resultado_soma2<<endl;
    cout<<"Resultado da multiplicacao: "<<endl<<resultado_multiplicacao<<endl;
    cout<<"Resultado da subtracao: "<<endl<<resultado_subtracao<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Acessar numero complexo: "<<endl;
    //Acessar a parte real e imaginária do numero ocmplexo por meio da sobrecarga rvalue do operador "[]"
    cout<<n1[0]<<endl;
    cout<<n1[1]<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    //Alterar os valores do numero complexo, por meio da sobregarca lvalue do operador "[]":
    n1[0]=5;
    n1[1]=6;
    cout<<"Numero complexo apos a aleteracao de valores: "<<endl;
    cout<<n1[0]<<endl<<n1[1]<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<endl<<"Conjugado: "<<endl<<-n2<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Verificacao de igualdade e desigualdade dos complexos: "<<endl;
    //leva em ocnsideração a alteração dos valores feitas pela sobrecarga value do operador "[]"
    cout<<"n1: "<<n1<<endl<<"n2: "<<n2<<endl<<"n3: "<<n3<<endl;
    n1==n2;
    n1!=n3;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<endl<<"Moduldo do numero complexo: "<<n2.modulo_complexo()<<endl;
    cout<<endl<<"Argumento do numero complexo: "<<n2.argumento_complexo()<<endl<<endl;
    cout<<"FIM!"<<endl;
    return 0;
}
