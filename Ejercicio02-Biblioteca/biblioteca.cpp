#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string libros[2][2];

void cargarLibros(){

    libros[0][0] = "Algoritmos";
    libros[0][1] = "Algoritmos y Programacion (Guia para Docentes)";

    libros[1][0] = "Base de Datos";
    libros[1][1] = "Apuntes de Bases de Datos I";

}

int main(int argc, char const *argv[])
{
    cargarLibros();

    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que buscas: " ;
        cin >> buscar;

                
        ///busqueda
        for (int i = 0; i < 2; i++)
        {
            string libro = libros[i][1];
            string libroM = libro;
            transform(libroM.begin(), libroM.end(), libroM.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroM.find(buscar) != string::npos){
                cout << "Libro encontrado: " << libro << endl;
                salir = true;
            }
            
        }
        
        if (salir == false)
        {
            char continuar = 'N';
            while (true)
            {
                system("cls");
                cout << "No se encontro el libro que buscas, deseas continuar? s/n: ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S')
                {
                    break;
                }else if (continuar == 'n' || continuar == 'N'){
                    salir = true;
                    break;
                }
            }
            
        }

    }
    
    
    return 0;
}

