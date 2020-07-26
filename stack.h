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

#ifndef STACK_H
#define STACK_H


#include <iostream>
#include <stack>
#include "Queue.h"


using namespace std;


class stak: public Queue{
private:
    stack <int> Stack;
    stack <int> aux;
public:
    bool empty();
    int size();
    int front();
    int back();
    void push(int x);
    void pop();
    void swap(Queue* q);
};



#endif //STACK_H
