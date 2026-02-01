#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome " << nome << " eta " << eta << " media " << media << endl;
    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/

    // Studente Mario
    Studente mario;
    mario.nome = "Mario";
    mario.eta = 17;
    mario.media = 7;

    // Studente Maria con puntatore
    Studente* maria = new Studente;
    maria->nome = "Maria";
    maria->eta = 18;
    maria->media = 8;

    /************************** Visualizzazione ********************************/

    cout << "Nome " << mario.nome << " media " << mario.media << endl;
    cout << "Nome " << maria->nome << " media " << maria->media << endl;

    return 0;
}
