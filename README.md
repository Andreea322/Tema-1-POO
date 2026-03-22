# Tema-1-POO
Se considera o sala de gimnastica care gestionează clienți, aparate si rezervări.Astfel,se definesc următoarele clase:
1.Aparat-cu parametrii: nume,scop,nivelDificultate(0-5);
2.Client-cu parametrii:nume, prenume, email,numarTelefon, vârstă;
3.Rezervare-cu parametrii:tipAbonament,dataInceput,dataFinal,numeClient,prenumeClient.
Datele de intrare sunt citite din fisierul "sala.in".Pe primul rând din fișierul “sala.in” se află numărul k, care reprezintă câte aparate sunt disponibile în sală, urmat de k linii cu numele, scopul și nivelul de dificultate al fiecărui aparat. După aceea se află numărul n, care indică numărul de clienți, urmat de n linii cu informațiile fiecărui client (nume, prenume, email, număr de telefon și vârstă). La final se citește numărul m, ce reprezintă numărul de rezervări, urmat de m linii cu detalii despre fiecare abonament(tip, data de început, numele si prenumele clientului).
Cerinta:
Sa se afiseze aparatele disponibile din sala, scopul si nivelul de dificultate al acestora si pentru fiecare client citit să se verifice dacă acesta are o rezervare activă.O rezervare este considerată activă dacă numele și prenumele din rezervare coincid cu cele ale clientului.
