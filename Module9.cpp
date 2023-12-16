// Woohyuk Choi: Module 9: Assignment (Fruits)

#include <iostream>
#include <string>

using namespace std;

class Fruit {
private:
    string name;
public:
    Fruit(string n) : name(n) {}

    string get_name() {
        return name;
    }
};

class CitrusFruit : public Fruit {
private:
    double weight;
    string color;
public:
    CitrusFruit(string n, double w, string c) : Fruit(n), weight(w), color(c) {}

    double get_weight() {
        return weight;
    }

    string get_color() {
        return color;
    }
};

int main() {
    Fruit fruits[3] = { Fruit("Grape"), Fruit("Mango"), Fruit("Apple") };
    CitrusFruit citrus_fruits[3] = { CitrusFruit("Lemon", 0.1, "Yellow"), CitrusFruit("Lime", 0.2, "Green"), CitrusFruit("Orange", 0.3, "Orange") };

    cout << "Fruits:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << fruits[i].get_name() << endl;
    }

    cout << "Citrus fruits:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << citrus_fruits[i].get_name() << " - " << citrus_fruits[i].get_weight() << " kg - " << citrus_fruits[i].get_color() << endl;
    }

    return 0;
}