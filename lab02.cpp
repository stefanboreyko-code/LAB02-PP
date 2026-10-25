
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
/*
//zad01a
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main()
{ 
/*
for (int i = 0; i <= 10; i++) {
cout << i << endl ;
}
return 0;
}

//zad01b

for (int i=5; i < 7 ; i++) { // jezeli zamienimy < na <= otrzymamy [5,7]
cout << i << endl ;
}
return 0;


//zad01c
for (int i = 0; i <= 10; i += 2) {
    cout << i << endl;
}
return 0;


//zad01d
#include <iostream>
using namespace std ;
int main(){ 
for (int i = 10; i >= 0; i --) {
    cout << i << endl;
}


//zad02
    int fahr, celsius;
    int start, limit, krok;

    start = 0;
    limit = 200;
    krok = 20;

    fahr = start;
    while (fahr <= limit) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\t" << celsius << endl;
        fahr = fahr + krok;
    }
//zad03
    int celsius;
    int start = 0, limit = 200, krok = 20;

    for (int fahr = start; fahr <= limit; fahr += krok) {
        celsius = 5 * (fahr - 32) / 9;
        cout << fahr << "\t" << celsius << endl;
    }

//zad05
    double celsius;
    double fahr;
    double start = 0, limit = 200, krok = 20;
for (fahr = 0.0; fahr <= limit ; fahr = fahr + krok) 
{
double celsius = (5/9) * ( fahr - 32.0);
printf ("%3.0f %6.1f \n" , fahr , celsius );
}
}
//zad06
int limit, krok;
    cin >> limit >> krok;
    for (float fahr = 0.0; fahr < limit; fahr = fahr + krok) {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
    }



    // zad07
    /*
    float number;
    for (int i = 0; i < 10; i++) {
        cin >> number;
        if (number > 0) {
            cout << number << endl;
        }
    }
    */

    // zad08
    /*
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    */

    // zad09
    /*
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++) {
        if (i % n == 0) {
            cout << i << endl;
        }
    }
    */

    // zad10
    /*
    int n;
    int counter = 0;
    cin >> n;
    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            counter++;
        }
    }
    cout << counter << endl;
    */

    // zad11
    /*
    int a, b;
    cin >> a >> b;
    if (a < b) {
        for (int i = a; i <= b; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    } else {
        for (int i = b; i <= a; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
    */

    // zad12
    /*
    int n;
    float sum = 0;
    float number;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        sum = sum + number;
    }
    cout << sum / n << endl;
    */

    // zad13
    /*
    for (int i = 100; i >= 0; i = i - 1) {
        cout << i << endl;
    }
    */

    // zad14
    /*
    int x, y, z;
    cin >> x >> y >> z;
    if (x <= y && x <= z) {
        cout << x << endl;
    } else {
        if (y <= x && y <= z) {
            cout << y << endl;
        } else {
            cout << z << endl;
        }
    }
    */

    // zad15
    /*
    int n, m;
    cin >> n >> m;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        cout << rand() % (m + 1) << endl;
    }
    */

    // zad16
    /*
    int lucky_number;
    int counter = 0;
    cin >> lucky_number;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int random_val = (rand() % 10) + 1;
        if (random_val == lucky_number) {
            counter++;
        }
    }
    cout << counter << endl;
    */

    return 0;
}
