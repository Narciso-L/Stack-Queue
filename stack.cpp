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

#include "stack.h"



//Verificar si la cola está vacía
bool stak::empty(){
    return Stk.empty();
}


//Obtener el tamaño de la cola
int stak::size(){
    return Stk.size();
}


//Acceder al primer elemento de la cola
int stak::front(){

    int first;

  //  cout << "Accediendo al primer elemento de la cola" << endl;

    while(!Stk.empty()){
        auxStk.push(Stk.top());
        Stk.pop();
    }

    first = auxStk.top();

    while(!auxStk.empty()){
        Stk.push(auxStk.top());
        auxStk.pop();
    }

    return first;
}


//Acceder al último elemento de la cola
int stak::back(){
    return Stk.top();
}


//Insertar un elemento en la cola
void stak::push(int x){
    Stk.push(x);
  //  cout << "Elemento insertado" << endl;
}


//Eliminar el primer elemento de la cola
void stak::pop(){

    while(!Stk.empty()){
        auxStk.push(Stk.top());
        Stk.pop();
    }

    auxStk.pop();

    while(!auxStk.empty()){
        Stk.push(auxStk.top());
        auxStk.pop();
    }

   // cout << "Elemento eliminado" << endl;
}


//Intercambiar el contenido entre dos colas
void stak::swap(Queue* q){
    while(!Stk.empty()){
        auxStk.push(Stk.top());
        Stk.pop();
    }
    while(!q->empty()){
        Stk.push(q->back());
        q->pop();
    }
    while(!auxStk.empty()){
        q->push(auxStk.top());
        auxStk.pop();
    }
}
