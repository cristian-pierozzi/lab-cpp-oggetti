#include <iostream>
#include <string>

using namespace std;

/***********************************************************************************************************
 *                                 Modifica della classe studente (incapsulamento)                         *     
 *   Per come abbiamo definito la classe nel file precedente, è possibile inserire una media di 44:  *         
 *   questo è concettualmente sbagliato, ma il programma non ci darà nessun errore se lo facciamo          *     
 *   Per evitare problemi di questo tipo, si preferisce                                                    *         
 *      1. modificare la "visibilità" dei campi della classe rendendoli privati                            *     
 *      2. creare funzioni che permettono di fare modifiche controllate ai campi,                          * 
 *         (ad esempio in questo caso controllando che la nuova media sia tra 0 e 10)                      * 
 *                                                                                                         */

class Studente {
private:
    string nome;
    int eta;
    float media;

public:
    void setNome(string nuovoNome) {
        nome = nuovoNome;
    }

    void setEta(int nuovaEta) {
        if(nuovaEta > 0)
            eta = nuovaEta;
    }

    void setMedia(float nuovaMedia) {
        if(nuovaMedia >= 0 && nuovaMedia <= 10)
            media = nuovaMedia;
        else
            cout << "Impossibile definire media non compresa tra 0 e 10" << endl;
    }

    // funzioni GET
    string getNome() {
        return nome;
    }

    int getEta() {
        return eta;
    }

    float getMedia() {
        return media;
    }

    void stampaStudente(){
        cout << "Nome " << nome << " eta " << eta << " media " << media << endl;
    }
};

int main()
{
    // TODO Istanziare un nuovo oggetto e valorizzarlo attraverso i nuovi metodi set

    Studente s;
    s.setNome("Luca");
    s.setEta(17);
    s.setMedia(8);

    // TODO Adesso che gli attributi della classe sono privati, com'è possibile accedervi? 
    //      Risolvere il problema creando nuove funzioni "get" che permettano l'accesso a tutti gli attributi della classe

    cout << "Nome " << s.getNome() << endl;
    cout << "Eta " << s.getEta() << endl;
    cout << "Media " << s.getMedia() << endl;

    return 0;
}
