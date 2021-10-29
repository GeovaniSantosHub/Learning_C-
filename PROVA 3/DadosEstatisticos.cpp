#include "DadosEstatisticos.hpp"

DadosEstatisticos::DadosEstatisticos(string nomeArquivo)
{
    ofstream arquivo0;//criando o arquivo
    arquivo0.open(nomeArquivo);//Abri,do e colocando nome no arquivo
    
    cout<<"Quantos dados voce ira inserir? ";
    cin>>tam;//Tamanho do vetor
    
    vector <double> dados_usuario(tam);//vetor para dados do usuário

    int tamanho = tam;
    dados= new double [tamanho]; //ponteiro de vetor para alocação dinâmica

    maximo=dados_usuario[0];
    
    for (int i=0;i<tam;i++)
    {
        cout<<"Dado"<<i+1<<": ";  
        cin>>dados_inst;
        cout<<endl;
        if(dados_inst>maximo)//Acha o maior valor
        {
            maximo=dados_inst;
        }
        
        //implementação dos dados dentro do vetor
        dados_usuario.insert(dados_usuario.begin(),dados_inst);
        soma_media_usuario=soma_media_usuario+dados_inst;
    }
    
    Media=soma_media_usuario/tam; 

    for (int x=0;x<tam;x++)
    {
        if(dados_usuario[x]>Media)
        {
            desvio=dados_usuario[x]-Media;
            soma_variancia=soma_variancia+pow(desvio,2);
        }
        else
        {
        desvio=Media-dados_usuario[x];
        soma_variancia=soma_variancia+pow(desvio,2);
        }

    dados[x] = dados_usuario[x];//ponteiro de vetor que armazena os valores do vetor dados_usuario
    }

    variancia=soma_variancia/tam;//calculo variância
    DesvioPadrao=sqrt(variancia);//calculo Desvio Padrão
    //Verifica se o arquivo está aberto
    if (arquivo0.is_open())
    {
        arquivo0<<tam<<endl;
        for (int l=tam-1;l>=0;l--)
        {
            arquivo0<<dados_usuario[l]<<endl;//escrita no arquivo
        }
    }
    else
    {
        cerr<<"Arquivo nao foi criado"<<endl;
        exit(0);
    }
}

DadosEstatisticos::DadosEstatisticos(double min, double max, int n_am)
{  
    srand(time(NULL));
    
    vector <double> armazena((int) n_am);//vetor para armazenar dados aleatórios

    dados= new double [n_am];//ponteiro de vetor para alocação dinâmica
    tam=n_am;
    
    maximo=armazena[0];
    for (int i=0;i<n_am;i++)
    {   
        double r = (rand() / (double)RAND_MAX*(max-min))-min; //gera números aleatórios
        
        soma_media_random=soma_media_random+r;
        
        armazena.insert(armazena.begin()+i,r);//insere os números gerados no vetor
        
        if(armazena[i]>maximo) //Acha o maior valor
        {
            maximo=armazena[i];
        }

    dados[i] = armazena[i]; //Vetor de ponteiro 
    }
    
    Media=soma_media_random/n_am;//Cálculo média 
    
    for (int m=0;m<n_am;m++)
    {
        if (Media>armazena[m])
        {
            desvio=(Media-armazena[m]);
            soma_desvio_random=soma_desvio_random+soma_desvio_random;
            soma_variancia=soma_variancia+(pow(desvio,2));
        }
        else
        {
            desvio=(armazena[m]-Media);
            soma_desvio_random=soma_desvio_random+desvio;
            soma_variancia=soma_variancia+(pow(desvio,2));
        }
    }
    cout<<endl;
    variancia=soma_variancia/n_am; //Cálculo Variância
    DesvioPadrao=sqrt(variancia); //Cálcuo desvio padrão

}
DadosEstatisticos::~DadosEstatisticos(){}; //Destrutor

double DadosEstatisticos::calculaMedia() const
{
    cout<<"Media: "<<Media<<endl;
    return Media;
}
double DadosEstatisticos::calculaVariancia() const
{
    cout<<"Variancia: "<<variancia<<endl;
    return variancia;
}
double DadosEstatisticos::calculaDesvioPadrao() const
{
    cout<<"Desvio Padrao: "<<DesvioPadrao<<endl;
    return DesvioPadrao;
}
void DadosEstatisticos::printEstatistica() const
{
    cout<<"Maior valor: "<<setprecision(3)<<maximo<<endl;
    cout<<"Media: "<<Media<<endl;
    cout<<"Variancia: "<<variancia<<endl;
    cout<<"Desvio Padrao: "<<DesvioPadrao<<endl;
}
void DadosEstatisticos::printDados() const
{
    cout<<"Dados:"<<endl;
    for (int z=tam-1;z>=0;z--)
    {
    cout<<dados[z]<<endl;
    }
}
bool DadosEstatisticos::salvarDados(string nomeArquivo)
{
    ofstream Arquivo1;
    Arquivo1.open(nomeArquivo);
    if (Arquivo1.is_open())
    {
        Arquivo1<<tam<<endl;
        for(int a=tam-1;a>=0;a--)
        {
            Arquivo1<<setprecision(3)<<dados[a]<<endl;
        }
        return 1;
    }
    else
    {
        cerr<<"Arquivo nao foi criado"<<endl;
        return 0;
    }
}