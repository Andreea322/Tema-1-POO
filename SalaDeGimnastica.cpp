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
    static int totalClienti;
    public:
    Client(); //constructor default
    Client(const std::string& nume,const std::string& prenume, const std::string& email,const std::string& numarTelefon, const int& varsta); //constructor cu parametrii
    Client(const Client& ob);//constructor de copiere
    ~Client(){

    }; //destructor
    Client& operator=(const Client& ob); //operator de mutare
    friend std::ostream& operator<<(std::ostream& out, const Client& c); //operator de afisare
    //getteri:
    inline std::string getNume() const { return nume; }
    std::string getPrenume() const;
    std::string getEmail() const;
    std::string getNumarTelefon() const;
    int getVarsta() const;
    static int getTotalClienti() { return totalClienti; }
    //setteri:
    void setNume(const std::string& nume);
    void setPrenume(const std::string& prenume);
    void setEmail(const std::string& email);
    void setNumarTelefon(const std::string& numarTelefon);
    void setVarsta(int varsta);
    
    
    

};

// definirea constructorilor si metodelor clasei:
int Client::totalClienti = 0;
Client::Client(){
    nume="";
    prenume="";
    email="";
    numarTelefon="";
    varsta=0;
    totalClienti++;
}
Client::Client(const std::string& nume,const std::string& prenume, const std::string& email,const std::string& numarTelefon, const int& varsta){
    this->nume=nume;
    this->prenume=prenume;
    this->email=email;
    this->numarTelefon=numarTelefon;
    this->varsta=varsta;
    totalClienti++;
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
{  Aparat a1("BandaAlergare", "cardio", 1);
    Aparat a2("BicicletaStatica", "cardio", 1);
    Aparat a3("Gantere", "forta", 2);
    std::cout << "Aparatele disponibile:" << std::endl;
    std::cout << a1 << std::endl << a2 << std::endl << a3 << std::endl << std::endl;
    Client c1("Popescu", "Ion", "ion@gmail.com", "0711111111", 25);
    Client c2("Ionescu", "Maria", "maria@gmail.com", "0722222222", 30);
    Client c3("Georgescu", "Andrei", "andrei@gmail.com", "0733333333", 28);
    Client c4("Popa", "Elena", "elena@gmail.com", "0744444444", 22);
    Rezervare r1, r2, r3;
    r1.setTipAbonament("o_luna");
    r1.setDataInceput("01.03.2026");
    r1.setNumeClient("Popescu");
    r1.setPrenumeClient("Ion");
    r1.setDataFinal(r1.expirareAbonament("o_luna", "01.03.2026"));
    r2.setTipAbonament("o_intrare");
    r2.setDataInceput("05.03.2026");
    r2.setNumeClient("Ionescu");
    r2.setPrenumeClient("Maria");
    r2.setDataFinal(r2.expirareAbonament("o_intrare", "05.03.2026"));
    r3.setTipAbonament("o_luna");
    r3.setDataInceput("10.03.2026");
    r3.setNumeClient("Georgescu");
    r3.setPrenumeClient("Andrei");
    r3.setDataFinal(r3.expirareAbonament("o_luna", "10.03.2026"));
    if (r1.rezervareActiva(c1) || r2.rezervareActiva(c1) || r3.rezervareActiva(c1))
        std::cout << c1.getNume() << " " << c1.getPrenume() << " are abonament activ."<< std::endl;
    else
        std::cout << c1.getNume() << " " << c1.getPrenume() << " nu are abonament activ." << std::endl;
    if (r1.rezervareActiva(c2) || r2.rezervareActiva(c2) || r3.rezervareActiva(c2))
        std::cout << c2.getNume() << " " << c2.getPrenume() << " are abonament activ."<< std::endl;
    else
        std::cout << c2.getNume() << " " << c2.getPrenume() << " nu are abonament activ." << std::endl;
    if (r1.rezervareActiva(c3) || r2.rezervareActiva(c3) || r3.rezervareActiva(c3))
        std::cout << c3.getNume() << " " << c3.getPrenume() << " are abonament activ." << std::endl;
    else
        std::cout << c3.getNume() << " " << c3.getPrenume() << " nu are abonament activ." << std::endl;
    if (r1.rezervareActiva(c4) || r2.rezervareActiva(c4) || r3.rezervareActiva(c4))
        std::cout << c4.getNume() << " " << c4.getPrenume() << " are abonament activ." << std::endl;
    else
        std::cout << c4.getNume() << " " << c4.getPrenume() << " nu are abonament activ." << std::endl;
    
    std::cout<<"Introduceti numele si prenumele pe care doriti sa-l cautati: ";
    std::string NUME,PRENUME;
    std::cin>>NUME>>PRENUME;
    int a=0;
    
    if ((NUME == c1.getNume() && PRENUME == c1.getPrenume()) ||
        (NUME == c2.getNume() && PRENUME == c2.getPrenume()) ||
        (NUME == c3.getNume() && PRENUME == c3.getPrenume()) ||
        (NUME == c4.getNume() && PRENUME == c4.getPrenume())){
            a++;
    }
    
    if(a==0){
        std::cout<<NUME<<" "<<PRENUME<<" nu se afla printre clientii salii de gimnastica.";
    } else{
        std::cout<<NUME<<" "<<PRENUME<<" se afla printre clientii salii de gimnastica.";
    }
    
    return 0;

}
