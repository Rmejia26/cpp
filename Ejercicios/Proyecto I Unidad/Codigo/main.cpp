#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

void menu(int opcion)
{
    switch (opcion)
    {
    case 1:
        starShip();
        break;

    case 2:
        snake();
        break;    
    
    default:
        cout << " >>>>> Ingrese una opcion valida <<<<< "<<endl;
        cout<< " " <<endl;
        break;
    }

}

int main(int argc, char const *argv[])
{
    int juego;
    system("cls");

    cout<< " " <<endl;
    cout<<" <<<<<<<<< Welcome To Vs-Code Games >>>>>>>>> "<<endl;
    cout<< " " <<endl;
    cout<< " Escoge un juego de tu preferecnia del siguiente menu \n" <<endl;
    cout<<"  <<<<<<<<<<<<< MENU >>>>>>>>>>>>>> \n" <<endl;
    cout<<"  <<<<<<<< 1. starShip >>>>>>>>>> \n" <<endl;
    cout<<"  <<<<<<<<< 2. snake >>>>>>>>>> \n" <<endl;
    cin>>juego;

    menu(juego);

    return 0;
}
