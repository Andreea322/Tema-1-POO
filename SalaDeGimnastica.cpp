//Cerinta:
//Sa se afiseze aparatele disponibile din sala, scopul si nivelul de dificultate al acestora.Pentru fiecare client citit, sa se verifice daca are un abonament activ.
//Datele de intrare sunt citite din fisierul "sala.in".Pe primul rând din fișierul sala.in se află numărul k, care reprezintă câte aparate sunt disponibile în sală, urmat de k linii cu numele, scopul și nivelul de dificultate al fiecărui aparat.
//După aceea se află numărul n, care indică numărul de clienți, urmat de n linii cu informațiile fiecărui client (nume, prenume, email, număr de telefon și vârstă).
//La final se citește numărul m, ce reprezintă numărul de rezervări, urmat de m linii cu detalii despre fiecare abonament (tip, data de început, numele și prenumele clientului).
//Programul definește clasele Aparat, Client și Rezervare, cu constructori, operatori și metode pentru gestionarea datelor despre aparate, clienți și abonamente, iar în funcția main citește date din fișier, creează obiectele corespunzătoare, afiseaza aparatele disponibile și verifică dacă fiecare client are abonament activ.

#include <iostream>
#include <string>
#include <fstream>
class Aparat{
    std::string nume, scop;
    int nivelDificultate;
    public:
    Aparat(); //constructor default
    Aparat(const std::string& nume, const std::string& scop, const int& nivelDificultate); //constructor cu parametrii
    Aparat( const Aparat& ob); //constructor de copiere
    ~Aparat(){

    }; //destructor
    Aparat& operator=(const Aparat& ob); //operator de mutare
    friend std::ostream& operator<<(std::ostream& out, const Aparat& a); //operator de afisare
    //getteri:
    std::string getNume() const;
    std::string getScop() const;
    int getNivelDificultate() const;
    //setteri:
    void setNume(const std::string& nume);
    void setScop(const std::string& scop);
    void setNivelDificultate(int nivelDificultate);
};

// definirea constructorilor si metodelor clasei:
Aparat::Aparat(){
    nume="";
    scop="";
    nivelDificultate=0;
}
Aparat::Aparat(const std::string& nume, const std::string& scop, const int& nivelDificultate){
    this->nume=nume;
    this->scop=scop;
    this->nivelDificultate=nivelDificultate;
}
Aparat::Aparat(const Aparat& ob){
    nume=ob.nume;
    scop=ob.scop;
    nivelDificultate=ob.nivelDificultate;
}
Aparat& Aparat::operator=(const Aparat& ob){
    if (this!= &ob){
        nume=ob.nume;
        scop=ob.scop;
        nivelDificultate=ob.nivelDificultate;
    }
    return *this;
 }
 std::ostream& operator<<(std::ostream& out, const Aparat& a) {
    out << a.nume <<" Scopul: "<< a.scop <<" Nivelul de dificultate: "<< a.nivelDificultate<<"/5";
    return out;
}

std::string Aparat::getNume() const{
    return nume;
}
std::string Aparat::getScop() const{
    return scop;
}
int Aparat::getNivelDificultate() const{
    return nivelDificultate;
}


void Aparat::setNume(const std::string& nume){
    this->nume=nume;
}
void Aparat::setScop(const std::string& scop){
    this->scop=scop;
}
void Aparat::setNivelDificultate(int nivelDificultate){
    this->nivelDificultate=nivelDificultate;
}

class Client{
    std::string nume, prenume, email, numarTelefon;
    int varsta;
    public:
    Client(); //constructor default
    Client(const std::string& nume,const std::string& prenume, const std::string& email,const std::string& numarTelefon, const int& varsta); //constructor cu parametrii
    Client(const Client& ob);//constructor de copiere
    ~Client(){

    }; //destructor
    Client& operator=(const Client& ob); //operator de mutare
    friend std::ostream& operator<<(std::ostream& out, const Client& c); //operator de afisare
    //getteri:
    std::string getNume() const;
    std::string getPrenume() const;
    std::string getEmail() const;
    std::string getNumarTelefon() const;
    int getVarsta() const;
    //setteri:
    void setNume(const std::string& nume);
    void setPrenume(const std::string& prenume);
    void setEmail(const std::string& email);
    void setNumarTelefon(const std::string& numarTelefon);
    void setVarsta(int varsta);
    
    

};

// definirea constructorilor si metodelor clasei:
Client::Client(){
    nume="";
    prenume="";
    email="";
    numarTelefon="";
    varsta=0;
}
Client::Client(const std::string& nume,const std::string& prenume, const std::string& email,const std::string& numarTelefon, const int& varsta){
    this->nume=nume;
    this->prenume=prenume;
    this->email=email;
    this->numarTelefon=numarTelefon;
    this->varsta=varsta;
}
Client::Client(const Client& ob){
    nume=ob.nume;
    prenume=ob.prenume;
    email=ob.email;
    numarTelefon=ob.numarTelefon;
    varsta=ob.varsta;
}
 Client& Client::operator=(const Client& ob){
    if (this!= &ob){
        nume=ob.nume;
        prenume=ob.prenume;
        email=ob.email;
        numarTelefon=ob.numarTelefon;
        varsta=ob.varsta;

    }
    return *this;
 }
 std::ostream& operator<<(std::ostream& out, const Client& c) {
    out << " " << c.nume << " " << c.prenume << " " << c.email << " " << c.numarTelefon << " " << c.varsta;
    return out;
}


std::string Client::getNume() const{
    return nume;
}
std::string Client::getPrenume() const{
    return prenume;
}
std::string Client::getEmail() const{
    return email;
}
std::string Client::getNumarTelefon() const{
    return numarTelefon;
}
int Client::getVarsta() const{
    return varsta;
}


void Client::setNume(const std::string& nume){
    this->nume=nume;
}
void Client::setPrenume(const std::string& prenume){
    this->prenume=prenume;
}
void Client::setEmail(const std::string& email){
    this->email=email;
}
void Client::setNumarTelefon(const std::string& numarTelefon){
    this->numarTelefon=numarTelefon;
}
void Client::setVarsta(int varsta){
    this->varsta=varsta;
}

 class Rezervare{
    std::string tipAbonament, dataInceput, dataFinal,numeClient, prenumeClient;

    public:
    Rezervare(); //constructor default
    Rezervare( const std::string& tipAbonament, const std::string& dataInceput, const std::string& dataFinal,const std::string& numeClient, const std::string& prenumeClient); //constructor cu parametrii
    Rezervare(const Rezervare& ob); //constructor de copiere
    ~Rezervare(){

    }; //destructor
    Rezervare& operator=(const Rezervare& ob); //operator de mutare
    friend std::ostream& operator<<(std::ostream& out, const Rezervare& r); //operator de afisare

    

    std::string getPrenumeClient() const;
    std::string getNumeClient() const;
    std::string getTipAbonament() const;
    std::string getDataInceput() const;
    std::string getDataFinal() const;
    

    void setTipAbonament(const std::string& tipAbonament );
    void setDataInceput(const std::string& dataInceput);
    void setDataFinal(const std::string& dataFinal);
    void setNumeClient(const std::string& numeClient);
    void setPrenumeClient(const std::string& prenumeClient);


    int rezervareActiva(const Client& beneficiar);
    std::string expirareAbonament(const std::string& tipAbonament,const std::string& dataInceput);

} ; 
    

// definirea constructorilor si metodelor clasei:
 Rezervare::Rezervare(){
    tipAbonament="";
    dataInceput="";
    dataFinal="";
    numeClient="";
    prenumeClient="";
 }
 Rezervare::Rezervare(const std::string& tipAbonament, const std::string& dataInceput, const std::string& dataFinal, const std::string& numeClient,const std::string& prenumeClient){
    this->tipAbonament=tipAbonament;
    this->dataInceput=dataInceput;
    this->dataFinal=dataFinal;
    this->numeClient=numeClient;
    this->prenumeClient=prenumeClient;

 }
 Rezervare::Rezervare(const Rezervare& ob){
    tipAbonament=ob.tipAbonament;
    dataInceput=ob.dataInceput;
    dataFinal=ob.dataFinal;
    numeClient=ob.numeClient;
    prenumeClient=ob.prenumeClient;
 }
 Rezervare& Rezervare::operator=(const Rezervare& ob){
    if (this!= &ob){
        numeClient=ob.numeClient;
        prenumeClient=ob.prenumeClient;
        dataInceput=ob.dataInceput;
        dataFinal=ob.dataFinal;

    }
    return *this;
 }
 std::ostream& operator<<(std::ostream& out, const Rezervare& r) {
    out << " " << r.tipAbonament << " " << r.dataInceput << "-" << r.dataFinal
        << " " << r.numeClient << " " << r.prenumeClient;
    return out;
}


std::string Rezervare::getPrenumeClient() const{
    return prenumeClient;
}
std::string Rezervare::getNumeClient() const{
    return numeClient;
}
std::string Rezervare::getTipAbonament() const{
    return tipAbonament;
}
std::string Rezervare::getDataInceput() const{
    return dataInceput;
}
std::string Rezervare::getDataFinal() const{
    return dataFinal;
}


void Rezervare::setTipAbonament(const std::string& tipAbonament ){
    this->tipAbonament=tipAbonament;
}
void Rezervare::setDataInceput(const std::string& dataInceput){
    if(dataInceput.length()<9){
        return;
    }
    this->dataInceput=dataInceput;
}
void Rezervare::setDataFinal(const std::string& dataFinal){
    if(dataFinal.length()<9){
        return;
    }
    this->dataFinal=dataFinal;
}
void Rezervare::setNumeClient(const std::string& numeClient ){
    this->numeClient=numeClient;
}
void Rezervare::setPrenumeClient(const std::string& prenumeClient ){
    this->prenumeClient=prenumeClient;
}

int Rezervare::rezervareActiva(const Client& beneficiar){
    if(numeClient==beneficiar.getNume() && prenumeClient==beneficiar.getPrenume()){
        return 1;}
    else {
        return 0;
    }
} // functie care verifica daca un client are abonamentul activ
 
std::string Rezervare::expirareAbonament(const std::string& tipAbonament,const std::string& dataInceput){
    if (tipAbonament=="o intrare") {
        return dataInceput;
    }
    if (tipAbonament=="o luna") {
        int zi=(dataInceput[0]-'0')*10+(dataInceput[1]-'0');
        int luna=(dataInceput[3]-'0')*10+(dataInceput[4]-'0');
        int an=(dataInceput[6]-'0')*1000+(dataInceput[7]-'0')*100+(dataInceput[8]-'0')*10+(dataInceput[9]-'0');
        luna=luna+1;
        if (luna>12){
            luna=1;
            an=an+1;
        }
        if(luna==2 && zi>28){
            zi=28;
        }
        if((luna==4 || luna==6 || luna==9 ||luna==11) && zi>30){
            zi=30;
        }
        std::string dataFinala="";
        if(zi<10){
            dataFinala+="0";
        }
        dataFinala+=std::to_string(zi);
        dataFinala+=".";
        if(luna<10){
            dataFinala+="0";
        }
        dataFinala+=std::to_string(luna);
        dataFinala+=".";
        dataFinala+=std::to_string(an);
        return dataFinala;
    }
    return "Invalid";
} // functie care returneaza data finala a abonamentului in functie de tipul acestuia si data de inceput
int main()
{  std::ifstream fin("sala.in");
   int k;
   fin>>k;
   Aparat aparate[100];
   std::string numeAparat, scop;
   int dificultate;
   for (int i=0;i<k;i++){
    fin>>numeAparat>>scop>>dificultate;
    aparate[i]=Aparat(numeAparat,scop,dificultate);
   }
   std::cout<<"Aparatele disponibile:"<<std::endl;
   for (int i=0;i<k;i++){
    std::cout<<aparate[i]<<std::endl;
   }
   Client clienti[100];
   Rezervare rezervari[100];
   int n;
   fin>>n;
   std::string nume, prenume, email, numarTelefon;
   int varsta;

   for(int i=0; i<n;i++){
    fin>>nume>>prenume>>email>>numarTelefon>>varsta;
    Client c(nume,prenume, email, numarTelefon,varsta);
    clienti[i]=c;
    
   }
   int m;
   fin>>m;
   for(int i=0;i<m;i++){
    std::string tipAbonament,dataInceput;
    fin>>tipAbonament>>dataInceput>>nume>>prenume;
    if (tipAbonament=="o_luna"){
        tipAbonament="o luna";
    }
    else{
        tipAbonament="o intrare";
    }
    rezervari[i]=Rezervare();
    rezervari[i].setTipAbonament(tipAbonament);
    rezervari[i].setDataInceput(dataInceput);
    rezervari[i].setNumeClient(nume);
    rezervari[i].setPrenumeClient(prenume);
    std::string dataFinala=rezervari[i].expirareAbonament(tipAbonament,dataInceput);
    rezervari[i].setDataFinal(dataFinala);
    }
    for (int i=0;i<5;i++){
        if(rezervari[0].rezervareActiva(clienti[i])==1 || rezervari[1].rezervareActiva(clienti[i])==1 || rezervari[2].rezervareActiva(clienti[i])==1){
            std::cout<<clienti[i].getNume()<< " "<<clienti[i].getPrenume()<< " are abonament activ"<<std::endl;
        } else{
            std::cout<<clienti[i].getNume()<< " "<<clienti[i].getPrenume()<< " nu are abonament activ"<<std::endl;
        }
    }
    fin.close();
    return 0;

}

