/***************************************************************************
 *                         Username generator                              *
 *                                                                         *
 *  Capire il funzionamento della funzione minuscolo                       *
 *  e implementare le due funzioni usernameGenerator                       *
 **************************************************************************/

 #include <iostream>
#include <string>
#include <cctype>
#include<sstream>

using namespace std;


// Funzione che trasforma una stringa in minuscolo
string minuscolo(string s){
    for(int i = 0; i < s.length(); i++)
        s.at(i) = tolower(s.at(i));
    return s;
}

/*
    TODO: Implementare la funzione affinchè, a partire da 2 stringhe nome e cognome
          generi in output una stringa contenente uno username utente nella forma:
          prima lettera del nome + tutto il cognome (tutto minuscolo)
*/
string usernameGenerator(string nome, string cognome){


    string user= nome.substr(0,1);

    user += cognome;
    return minuscolo(user);
}

/*
    TODO: Implementare la funzione affinchè, a partire da 1 stringa nella forma "Nome Cognome"
          generi in output una stringa contenente uno username utente nella forma:
          prima lettera del nome + tutto il cognome (tutto minuscolo)

    Hint: rispetto alla funzione precedente, splittare (spezzare il nome dal cognome, basandosi sullo spazio)
          e ripetere la stessa logica. E' possibile anche evitare di ripetere la logica? Magari chiamando la stessa funzione sopra?

*/
string usernameGenerator(string nomeCognome){


stringstream ss(nomeCognome);
    string nome;
    string cognome;

    // 2. Estrae la prima parola (il nome) e la salva in 'nome'
    ss >> nome;

    // 3. Estrae la seconda parola (il cognome) e la salva in 'cognome'
    ss >> cognome;

    // 4. Riutilizzo la prima funzione già implementata: DRY (Don't Repeat Yourself)
    return usernameGenerator(nome, cognome);
}
// main con testing
int main()
{

    string nome = "Mario";
    string cognome = "Rossi";

    string nomeCognome = "Luca Bianchi";

    string username1 = usernameGenerator(nome, cognome);

    string username2 = usernameGenerator(nomeCognome);

    cout << "Primo utente: " << nome << " " << cognome << ". Username: " << username1<<endl;
    cout<<"-----------------"<<endl;
    cout << "Secondo utente: " << nomeCognome << ". Username: " << username2;

    return 0;
}
