#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string str){

        // .size()
    int x = str.size();
    cout << "La lunghezza della stringa è: " << x << endl;
    cout << endl;



}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string str1){


    getline(cin,str1);
      // .find()
    int z = str1.find("ciao");
    cout << "La parola ciao è presente " << z << endl;
    cout << endl;

}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){

     string str4 = "Non mi piace pizza";
    cout << "Stringa prima di replace: " << str4 << endl;

    str4.replace(13, str4.length(), "pasta");
    cout << "Stringa dopo replace: " << str4 << endl;
    cout<< endl;
}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string str){
    // TODO

   // .substr()
    string s = str.substr(0, 6);
    cout << "Nuova stringa estratta (da indice 0 a indice 5): " << s << endl;
    cout << endl;

}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string str){


    cout << "Stringa prima di insert: " << str << endl;

    str.insert(str.length(), " giovanni");
    cout << "Stringa dopo insert: " << str << endl;
    cout<< endl;

}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
