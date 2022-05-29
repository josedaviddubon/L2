#include <iostream>
#include <string>

using namespace std;

string productos[5][3] = {
        {"001", "Iphone X", "0"},
        {"002", "Laptop Dell", "5"},
        {"003", "Monitor Samsung", "2"},
        {"004", "Mouses xps", "100"},
        {"005", "Heaset", "25" }

}; 


void listarProductos()
{
    system("cls");
    cout << endl;
    cout << "Listado de Productos:"<< endl;
    cout << "*********************"<< endl;
    cout << "Codigo, Descripcion y existencia" << endl;

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
            if (tipoMovimiento == "+")
            {
                productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
            }
            else{
                 productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }
            
        }
            
    }
}

void ajusteInventario(string codigo, int cantidad, string tipoAjuste)
{

    for (int i = 0; i < 5; i++)
    {
            if (productos[i][0] == codigo)
            {
                if (tipoAjuste == "+")
                {
                    productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
                }
                else
                {
                    productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);     
                }
                
            }
            
    }
    
}

void IngresoDeInventario()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "Ingreso de Productos al Inventario:"<< endl;
    cout << "*********************"<< endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "+");


}

void SalidaDeInventario()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "Salida de Productos al Inventario:"<< endl;
    cout << "*********************"<< endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventario(codigo, cantidad, "-");


}

void ajustePositivo()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "Ajuste Positivo:"<< endl;
    cout << "*********************"<< endl;
    cout << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    ajusteInventario(codigo, cantidad, "+");


}

void ajusteNegativo()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "Ajuste Negativo:"<< endl;
    cout << "*********************"<< endl;
    cout << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    ajusteInventario(codigo, cantidad, "-");
}


int main(int argc, char const *argv[])
{   
    int opcion = 0;

    while (true)
    {
        system("cls");
        cout << "Sistema de Inventario";
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        cout << "1. - Productos" << endl;
        cout << "2. - Ingreso de Inventario " << endl;
        cout << "3. - Salida de Inventario " << endl;
        cout << "4. - Ajuste Positivo " << endl;
        cout << "5. - Ajuste Negativo " << endl;
        cout << "0. - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
                listarProductos();
            break;

        case 2:
                IngresoDeInventario();
            break;
        case 3:
                SalidaDeInventario();
            break;
        case 4:
                ajustePositivo();
            break;
        case 5:
                ajusteNegativo();
            break;
        default:
        break;
    }
        system("pause");
        cout << endl;

        if (opcion == 0)
        {
            break;
        }
        
    }
    return 0;
    
}
