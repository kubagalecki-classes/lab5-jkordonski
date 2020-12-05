#include <iostream>
#include <vector>
using namespace std;
#include "Human.hpp"
#include <list>
//#pragma once

int main()
{

    // zad 1 i 2

    /*
      vector< int > vec = {};
      cout << "my vector" << endl;
      cout << "size: " << vec.size() << endl;
      cout << "capacity: " << vec.capacity() << endl;
      for (unsigned int i = 0; i < 100; i++) {
          vec.push_back(i);
          cout << i << ". "
               << "size: " << vec.size() << " capacity: " << vec.capacity()
               << " adres pierwszego elementu:" << &vec[0] << endl;
      }
    */

    // zad 3
    /*
    vector< int > vec1{100, 42};
    cout << "size: " << vec1.size() << endl;
    cout << "capacity: " << vec1.capacity() << endl;
    */

    // zad 4-6, zad 12
    /*
    vector< Human > people;
    string          name;
    int             a = 1;
    while (a == 1) {
        cout << "enter human name: " << endl;
        cin >> name;
        if (name == "end") {
            a = 0;
        }
        else if (name == "pop") {
            people.pop_back();
        }
        else {
            Human person(name, 0, true, true);
            people.push_back(person);
        }
    }
    cout << "vector size: " << people.size() << endl
         << "vector capacity: " << people.capacity() << endl;

    zad 16
    // for (const Human& e : people) {
    //  cout << e.getName() << endl;
    //}
    */

    // zad12

    // vector< Human >::iterator it;

    // zad 7-11, 13-16

    list< int > my_list;

    /*
    cout << "first: " << my_list.front() << endl;
    cout << "last: " << my_list.back() << endl;

    cout << "new list" << endl;

    my_list.push_back(16);

    cout << "first: " << my_list.front() << endl;
    cout << "last: " << my_list.back() << endl;

    cout << "new list" << endl;

    my_list.push_front(15);
    // my_list.push_back(17);

    cout << "first: " << my_list.front() << endl;
    cout << "last: " << my_list.back() << endl;

    cout << "adress of first: " << &my_list.front() << endl;
    cout << "adress of last: " << &my_list.back() << endl;
    */
    cout << "new list" << endl;

    /*
    cout << "first: " << my_list.front() << endl;
    cout << "last: " << my_list.back() << endl;

    cout << "adress of first: " << &my_list.front() << endl;
    cout << "adress of last: " << &my_list.back() << endl;
    */

    // zad 14
    /*
    for (it = my_list.begin(); it != my_list.end(); it++) {
        cout << *it << endl;
    }
    */
    // reverse
    /*
    my_list.push_back(1);
    my_list.push_back(2);
    my_list.push_back(3);
    my_list.push_back(4);

    list< int >::reverse_iterator it;

    for (it = my_list.rbegin(); it != my_list.rend(); it++) {
        cout << *it << endl;
    */

    /*
    // zad 15 and 16
    my_list.push_back(1);
    my_list.push_back(2);
    my_list.push_back(3);
    my_list.push_back(4);

    list< int >::const_reverse_iterator it;
    */
    // zad 15
    // for (it = my_list.crbegin(); it != my_list.crend(); it++) {
    // cout << *it << endl;}

    // zad 16
    my_list.push_back(1);
    my_list.push_back(2);
    my_list.push_back(3);
    my_list.push_back(4);
    for (const int& e : my_list) {
        cout << e << endl;
    }
}
