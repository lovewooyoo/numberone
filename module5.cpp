#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void get_sales(int sales[], string vegetables[]);
double calculate_average(int sales[]);
void print_low_selling_vegetables(int sales[], string vegetables[], double average);

int main() {
    string vegetables[SIZE] = {"broccoli", "cucumber", "onion", "tomato", "spinach"};
    int sales[SIZE] = {0};

    get_sales(sales, vegetables);
    double average_sales = calculate_average(sales);
    print_low_selling_vegetables(sales, vegetables, average_sales);

    return 0;
}

void get_sales(int sales[], string vegetables[]) {
    cout << "Enter the number of sales for each vegetable:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Sales of " << vegetables[i] << ": ";
        cin >> sales[i];
    }
}

double calculate_average(int sales[]) {
    int total_sales = 0;
    for (int i = 0; i < SIZE; i++) {
        total_sales += sales[i];
    }
    double average_sales = static_cast<double>(total_sales) / SIZE;
    return average_sales;
}

void print_low_selling_vegetables(int sales[], string vegetables[], double average) {
    cout << "The following vegetables sold less than the average:\n";
    for (int i = 0; i < SIZE; i++) {
        if (sales[i] < average) {
            cout << vegetables[i] << "\n";
        }
    }
}
