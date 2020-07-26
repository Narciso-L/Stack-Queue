/*Copyright (C) <2016>  <Narciso López-López>
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <queue>
#include "Queue.h"
#include "stack.h"
#include <ctime>


int main(int argc, char *argv[]){
    Queue* Stack1 = new stak();
    queue<int> Queue1;

    int elements;
    cout << "Introduce el numero de elementos: ";
    cin >> elements;
    cout <<endl;


    /***************************************** TEST push(int) *****************************************/

    clock_t clk = clock();

    clk = clock();
    for(int i=0; i<elements; i++){
        Stack1->push(i);
    }
    cout<< "Tiempo para insertar en Stack1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;

    clk = clock();
    for(int i=0; i<elements; i++){
        Queue1.push(i);
    }
    cout<< "Tiempo para insertar en Queue1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl<<endl;


    /***************************************** TEST empty() *****************************************/

    clk = clock();
    bool isempty = Stack1->empty();
    cout<< "Tiempo para comprobar si Stack1 esta vacia: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;
    if(isempty == true) cout << "Stack1 vacia" << endl;
    else cout << "No esta vacia" << endl;

    clk = clock();
    isempty = Queue1.empty();
    cout<< "Tiempo para comprobar si Queue1 esta vacia: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;
    if(isempty == true) cout << "Queue1 esta vacia" << endl<<endl;
    else cout << "No esta vacia" << endl<<endl;


    /***************************************** TEST size() *****************************************/

    clk = clock();
    int tam = Stack1->size();
    cout<< "Tiempo para obtener el tamaño de Stack1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;
    cout << "Tamaño de Stack1 es: "<< tam << endl;

    clk = clock();
    tam = Queue1.size();
    cout<< "Tiempo para obtener el tamaño de Queue1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;
    cout << "Tamaño de Queue1 es: "<< tam << endl<<endl;


    /***************************************** TEST front() *****************************************/

    clk=clock();
    Stack1->front();
    cout<< "Tiempo para acceder al primer elemento en Stack1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;

    clk=clock();
    Queue1.front();
    cout<< "Tiempo para acceder al primer elemento en Queue1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl<<endl;


    /***************************************** TEST back() *****************************************/

    clk=clock();
    Stack1->back();
    cout<< "Tiempo para acceder al ultimo elemento en Stack1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;

    clk=clock();
    Queue1.back();
    cout<< "Tiempo para acceder al ultimo elemento en Queue1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl<<endl;


    /***************************************** TEST swap() *****************************************/

    Queue* Stack2 = new stak();
    queue<int> Queue2;

    for(int i=0; i<elements; i++){
        Stack2->push(i);
        Queue2.push(i);
    }

    clk=clock();
    Stack1->swap(Stack2);
    cout<< "Tiempo requerido para swap en Stacks: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;

    clk=clock();
    Queue1.swap(Queue2);
    cout<< "Tiempo requerido para swap en Queues: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl<<endl;

    delete Stack2;


    /***************************************** TEST pop() *****************************************/

    clk=clock();
    while(!Stack1->empty()){
        Stack1->pop();

    }
    cout<< "Tiempo requerido para eliminar el primer elemento en Stack1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;

    clk=clock();
    for(int i=0; i<elements ; i++){
        Queue1.pop();
    }
    cout<< "Tiempo requerido para eliminar el primer elemento en Queue1: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;


    return EXIT_SUCCESS;
}

