#include <iostream>
#include <string>

using namespace std;

/*********************************************************************************************
 *                                 Utilizzo della classe prodotto                            *     
 *                                                                                           */

class Prodotto {
private:
    string nome;
    double prezzo;

public:
    // Costruttore
    Prodotto(string nomeProdotto, double prezzoProdotto): 
        nome(nomeProdotto), 
        prezzo(prezzoProdotto) 
        {}

    // Metodo che stampa il prodotto
    void stampa() {
        cout << "Prodotto " << nome << endl;
        cout << "Prezzo " << prezzo << " euro" << endl;
    }

    // Metodo informativo
    double getPrezzo() {
        return prezzo;
    }

    string getNome() {
        return nome;
    }

    // Metodo che modifica lo stato
    void cambiaPrezzo(double nuovoPrezzo) {
        // TODO inserire controllo affinchè il nuovo prezzo sia sempre maggiore di 0
        prezzo = nuovoPrezzo;
    }

    // Metodo che applica uno sconto percentuale
    void applicaSconto(double percentuale) {
        // TODO inserire controllo affinchè la percentuale sia compresa tra 0 e 100
        double sconto = prezzo * (percentuale / 100.0);
        prezzo -= sconto;
    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/
    // TODO creare un prodotto "Mouse" dal costo di 49.99
    // TODO creare un prodotto "Tastiera" dal costo di 129.99

    Prodotto mouse("Mouse", 49.99);
    Prodotto tastiera("Tastiera", 129.99);

    /*********************** Visualizzazione degli oggetti *********************/
    // TODO stampare entrambi i prodotti con la funzione stampa dedicata

    mouse.stampa();
    cout << endl;
    tastiera.stampa();
    cout << endl;

    /*********************** Manipolazione degli oggetti ***********************/
    // TODO Applicare sconto del 20% al mouse e stampare il nuovo prezzo

    mouse.applicaSconto(20);
    cout << "Nuovo prezzo mouse " << mouse.getPrezzo() << " euro" << endl;

    // TODO Cambiare prezzo alla tastiera (99.99) e stampare il nuovo prezzo

    tastiera.cambiaPrezzo(99.99);
    cout << "Nuovo prezzo tastiera " << tastiera.getPrezzo() << " euro" << endl;

    return 0;
}
