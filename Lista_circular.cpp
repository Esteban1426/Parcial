#include <iostream>

using namespace std;

struct nodo
{
    int num;
    nodo*siguiente;
};

nodo*cabeza = nullptr;
nodo*cola = nullptr;
    
    void Insertar(int valor)
    {
        nodo * nuevo = new nodo();
        nuevo -> num = valor;

        if (cabeza == nullptr)
        {
            cabeza = nuevo;
            cola = nuevo;
        }
        else
        {
            cola -> siguiente = nuevo;
            nuevo -> siguiente = cabeza;
            cola = nuevo;
        }
    }
    
    void mostrar()
    {
        int contador = 1;
        if(!cabeza)
        {
            cout << "La lista esta vacia tienes que ingresar priemro valores" << endl;
            return;
        }

        nodo * actual= cabeza;
        do
        {
            cout << "Nodo numero "<< contador << " :" <<actual->num << " "<< endl;
            actual = actual -> siguiente;
            contador++;
        } while (actual != cabeza);

        cout << "Valor del Nodo cabeza: " << actual->num << " " << endl;
        
    }

int main()
{
    int opcion;
    char continuar = 'y';
    do
    {
        cout << " Ingresa el numero correspondiente a la opcion que desees: "<<endl;
        cout << " 1. Ingresar valores a los nodos "<< endl;
        cout << " Respuesta: "; 
        cin >> opcion;

        switch (opcion)
        {
            case 1:
            {
                int valor;

                do
                {
                    cout << "Ingrese un numero /*Nota: Si quieres salir ingresa numero 0*/ : "<< endl; 
                    cin >> valor;
                    
                    if(valor != 0)
                    {
                        Insertar(valor);
                    }

                } while (valor != 0);

                cout << "Lista circular Actual: " << endl;
                mostrar();

                cout << "Deseas Continuar con el programa( y / n ) en minusculas: " <<endl;
                cin >>continuar;
         
                break;
            }

    }while(continuar != 'n' && opcion != 6);

    nodo * actual = cabeza;
    while (actual != nullptr)
    {
        nodo * siguiente = actual -> siguiente;
        delete actual;
        actual = siguiente; 
    }

    cout << " Fin..";
    return 0;
}
