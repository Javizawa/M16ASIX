// Ejercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

//Atributos del enemigo
int enemyHP = 100;
int enemyDmg = 500;
string enemyName = "Sauron";
bool enemyIsAlive = true;

//Atributos del personaje
int heroHP = 200;
int heroDamage;
string heroName;
bool heroIsAlive = true;

//variables para controlar el juego
int volume = 0;


void gameStart() {
    cout << "El enemigo " << enemyName << " ha aparecido\n";
    cout << "Como se llama el heroe?\n";
    cin >> heroName;
    cout << "El nombre del heroe es " << heroName << "\n";
}

int heroAttack() {
    return enemyHP - heroDamage;
}


bool checkEnemyStatus() {
    if (enemyHP <= 0) {
        cout << "Te has cargado al enemigo " << enemyName << " \n";
        enemyHP = 0;
        return false;
        //enemyIsAlive = false;
    }
    else {
        cout << "El enemigo " << enemyName << " tiene " << enemyHP << " puntos de vida\n";
        return true;
    }
}

int main()
{
    gameStart();
    while(enemyIsAlive && heroIsAlive){
            cout << "Cuanto danyo quieres hacer al enemigo " << enemyName <<"?\n";
            cin >> heroDamage;
            enemyHP = heroAttack(); 
            if (checkEnemyStatus()) {
                heroHP = heroHP - enemyDmg;
                cout << "El enemigo " << enemyName << " te ha atacado y te quedan " << heroHP << " puntos de vida\n";
            }

    }
}
