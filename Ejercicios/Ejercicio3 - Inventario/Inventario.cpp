#include<iostream>
#include<string>
using namespace std;

string productos[5][3] = {
    { "001", "iphone x", "0"},
        { "002", "Laptop Dell", "5"},
        { "003", "Monitor Samsung", "2"},
        { "004", "Mouse", "100"},
        { "005", "HeadSet", "25"},
};

void listarProductos(){
        system("cls");
        cout <<endl;
        cout << " Listado de Productos " << endl;
        cout << " ******************** " << endl;
        cout << " Codigo, Descipcion y Existencia " << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2] << endl;
        }
    }

    void movimientoInventario(string codigo, int cantidad, string tipoMovimiento){
        for (int  i = 0; i < 5; i++)
        {
            if (productos[i][0] == codigo)
            {
                if (tipoMovimiento == "+"){
                    productos[i][2] = to_string(stoi(productos[i][2]) + cantidad); 
                } else{
                    productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
                } 
            }
        }
        
    }

    void ingresoDeInventario(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout <<endl;
        cout << " Ingreso de Productos al Inventario " << endl;
        cout << " ********************************** " << endl;
        cout << endl;
        cout << " Ingrese el Codigo del Producto : " << endl;
        cin >> codigo;
        cout << endl;
        cout << " Ingrese la Cantidad del Producto : ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "+");
    }

    void ajusteDeInventarioPositivo(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout <<endl;
        cout << " Ajuste Positivo de Productos al Inventario " << endl;
        cout << " ****************************************** " << endl;
        cout << endl;
        cout << " Ingrese el Codigo del Producto : " << endl;
        cin >> codigo;
        cout << endl;
        cout << " Ingrese la Cantidad del Producto : ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "+");
    }

    void salidaDeInventario(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout <<endl;
        cout << " Salida de Productos del Inventario " << endl;
        cout << " ********************************** " << endl;
        cout << endl;
        cout << " Ingrese el Codigo del Producto : " << endl;
        cin >> codigo;
        cout << endl;
        cout << " Ingrese la Cantidad del Producto : ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "-");
    }

     void ajusteDeInventarioNegativo(){
        string codigo = "";
        int cantidad = 0;

        system("cls");
        cout <<endl;
        cout << " Ajuste Negativo de Productos al Inventario " << endl;
        cout << " ****************************************** " << endl;
        cout << endl;
        cout << " Ingrese el Codigo del Producto : " << endl;
        cin >> codigo;
        cout << endl;
        cout << " Ingrese la Cantidad del Producto : ";
        cin >> cantidad;
        cout << endl;

        movimientoInventario(codigo, cantidad, "-");
    }

int main(int argc, char const *argv[])
 {      
     int opcion =0;

     while (true)
        {
        system("cls");
        cout << endl;
        cout << " Sistema de Inventario "<<endl;
        cout << " ********************* ";
        cout << endl;
        cout << endl;
        cout << " 1 - Productos : "<<endl;
        cout << " 2 - Ingreso de inventario : "<<endl;
        cout << " 3 - Salida de inventario : "<<endl;
        cout << " 4 - Ajuste positivo de inventario : "<<endl;
        cout << " 5 - Ajuste negativo de inventario : "<<endl;
        cout << " 0 - Salir : " <<endl;
        cin >> opcion;
        
        cout << " Ingrese una opcion del menu : " <<endl;
        cout << endl;

        switch (opcion)
        {
        case 1:
                listarProductos();
            break;
        case 2:
            ingresoDeInventario();
            break;
        case 3:
            salidaDeInventario();
            break;
        case 4:
            ajusteDeInventarioPositivo();
            break;
        case 5:
            ajusteDeInventarioNegativo();
            break;
            
        default:
            break;
        }

        system("pause");

        if (opcion == 0)
        {
            break;
        }
     }

     return 0;
 }