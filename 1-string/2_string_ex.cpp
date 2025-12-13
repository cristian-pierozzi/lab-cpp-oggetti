#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                          Stringhe hands-on                             */

int main()
{
    /******************************************************************************
     * La classe è 'string' (in realtà std::string) e rappresenta il tipo di dato
     * Dichiarazione di oggetti di tipo string                                    */

    string str1 = "Questa è una stringa";
    string str2; //stringa vuota
    string str3;
    cout << "Inserire valore stringa str3: ";
    getline(cin, str3);



    /*******************************************************************************************
     *      Una stringa è semplicemente un array di char "nascosto"
     *      Utilizzare la classe stringa, e non l'array di char, ne semplifica l'utilizzo      */

    str3[0]; //modo per accedere a ogni carattere della stringa (come un array di char)
    str3.at(0); //modo object oriented per accedere a ogni carattere della stringa (come un array di char)

    cout << "Primo carattere (posizione 0) " << str3[0] << endl; // stampa del primo carattere stringa str1 ("Questa è una stringa")
    cout << "Primo carattere (posizione 0) " <<  str3.at(0) << endl; // stampa del primo carattere stringa str1 ("Questa è una stringa")
    cout << endl;



    /********************************************************************************
     * Ottenere informazioni sullo stato di un oggetto stringa attraverso funzioni */

    // .size()la prende dalla frase str1
    int x = str1.size();
    cout << "La lunghezza della stringa è: " << x << endl;
    cout << endl;

    // .length()la prende dalla frase str1
    int y = str1.length();
    cout << "La lunghezza della stringa è: " << y << endl;
    cout << endl;


    // .find() la prende dalla frase str1 se non ce è -1
    int z = str1.find("Questa");
    cout << "Stringa trovata all'indice: " << z << endl;
    cout << endl;

    // .substr()la prende dalla frase str1
    string s = str1.substr(0, 6);
    cout << "Nuova stringa estratta (da indice 0 a indice 5): " << s << endl;
    cout << endl;


    // .empty()la prende dalla frase str1
    if(str2.empty())
        cout << "Stringa vuota" << endl;
    else cout << "Stringa non vuota" << endl;
    cout << endl;




    /****************************************************************************
     *      Manipolare lo stato di un oggetto stringa attraverso funzioni      */

    // .replace()
    string str4 = "Non mi piace informatica e geometria";
    cout << "Stringa prima di replace: " << str4 << endl;

    str4.replace(13, str4.length(), "matematica");
    cout << "Stringa dopo replace: " << str4 << endl;
    cout<< endl;


    // .insert()
    string str5 = "Questo è un";
    cout << "Stringa prima di insert: " << str5 << endl;

    str5.insert(str5.length(), " testo");
    cout << "Stringa dopo insert: " << str5 << endl;
    cout<< endl;


    // .erase()
    string str6 = "Non mi piace informatica";
    cout << "Stringa prima di erase: " << str6 << endl;

    str6.erase(0, 4);
    cout << "Stringa dopo erase: " << str6 << endl;
    cout<< endl;

    return 0;
}
