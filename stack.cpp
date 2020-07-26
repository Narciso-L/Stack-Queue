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
    return Stack.empty();
}


//Obtener el tamaño de la cola
int stak::size(){
    return Stack.size();
}


//Acceder al primer elemento de la cola
int stak::front(){

    int first;
    
    while(!Stack.empty()){
        aux.push(Stack.top());
        Stack.pop();
    }

    first = aux.top();

    while(!aux.empty()){
        Stack.push(aux.top());
        aux.pop();
    }

    return first;
}


//Acceder al último elemento de la cola
int stak::back(){
    return Stack.top();
}


//Insertar un elemento en la cola
void stak::push(int x){
    Stack.push(x);
}


//Eliminar el primer elemento de la cola
void stak::pop(){

    while(!Stack.empty()){
        aux.push(Stack.top());
        Stack.pop();
    }

    aux.pop();

    while(!aux.empty()){
        Stack.push(aux.top());
        aux.pop();
    }
}


//Intercambiar el contenido entre dos colas
void stak::swap(Queue* q){
    while(!Stack.empty()){
        aux.push(Stack.top());
        Stack.pop();
    }
    while(!q->empty()){
        Stack.push(q->back());
        q->pop();
    }
    while(!aux.empty()){
        q->push(aux.top());
        aux.pop();
    }
}
