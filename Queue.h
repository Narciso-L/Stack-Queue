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

#ifndef QUEUE_H
#define QUEUE_H


class Queue{
public:
    virtual bool empty() = 0;
    virtual int size() = 0;
    virtual int front() = 0;
    virtual int back() = 0;
    virtual void push(int x) = 0;
    virtual void pop() = 0;
    virtual void swap(Queue* q) = 0;
};


#endif
