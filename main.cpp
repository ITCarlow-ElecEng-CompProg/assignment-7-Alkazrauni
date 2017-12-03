/**  Salman Al kazrauni
*    Exercise 7
*    c00199530
*    Coordinate Conversion */


#include <iostream>
#include <cstdio>
#include <windows.h>
#include <cmath>


using namespace std;

/**< functions declarations */
double cart_polar(double x , double y);
double cart_polar1(double x , double y);
double polar_cart(double r , double Thita);
double polar_cart1(double r , double Thita);

void menu(void);

double Thita , r ;

/**< main function */
int main()
{
    /**< variable declarations */
    double x = 1 , y = 1 ;

    /**< call for menu function */
    menu();
    char input = getchar();

    /**< clear the screen */
    system("cls");
    getchar();

    /**< switch case loop */
    switch (input)
    {
        /**< case 'c' for convert Cartesian to Polar */
        case 'c' :

            /**< prompt the user to insert x and y and display the result */
            cout << "convert Cartesian to Polar coordinates :\n\n";
            cout << "insert the point (x,y)... \n\n";

            cout << "first x : ";
            cin >> x;
            getchar();
            cout << "\nsecond y : ";
            cin >> y;
            getchar();
            fflush(stdin);

            cout << "\n\nthe polar point is ( " << cart_polar1(x,y) << " , " << cart_polar(x,y) << " degree )\n\n";

        break;

        /**< case 'p' for convert polar to Cartesian */
        case 'p' :

            /**< prompt the user to insert r and the angle (Thita) and display the result */
            cout << "convert polar to Cartesian coordinates :\n\n";
            cout << "insert the point (r,Thita)... \n\n";

            cout << "first r : ";
            cin >> r;
            getchar();
            cout << "\nsecond Thita in (degree) : ";
            cin >> Thita;
            getchar();
            fflush(stdin);

            cout << "\n\nthe Cartesian point is ( " << polar_cart(r,Thita) << " , " << polar_cart1(r,Thita) << "  )\n\n";

        break;

        /**< case 'q' for quit the program */
        case 'q' :

            cout << "goodbye .... \n\n";

        break;

        /**< Default for the wrong inputs */
        default :
            cout << "invalid input !!" << endl ;

    }

    return 0;
}

/**< menu function */
void menu(void)
{
    cout << "Coordinate Conversion....\n" << endl;
    cout << "To convert Cartesian to Polar press 'c'" << endl;
    cout << "To convert Polar to Cartesian press 'p'" << endl;
    cout << "To Quit the program press 'q'" << endl;

    return;
}

/**< function for converting Cartesian to Polar to get (Thita) */
double cart_polar( double x , double y)
{
    double Thita , Thita_rad;

    /**< calculate the angle (thita) and conveted to degree */
    Thita_rad = atan(y/x);
    Thita = Thita_rad *(180.0/M_PI);

    return Thita;
}

/**< function for converting Cartesian to Polar to get magnitude (r) */
double cart_polar1( double x , double y)
{
    double r ;

    /**< calculate the magnitude (r) */
    r = sqrt((pow(x,2))+(pow(y,2)));

    return r;
}

/**< function for converting Polar to Cartesian to get x */
double polar_cart (double r , double Thita)
{
    double x ;
    double Thita_rad ;

    /**< convert the input value from degree to radius and calculate x */
    Thita_rad = Thita * (M_PI/180.0);
    x = r *cos(Thita_rad);

    return x;
}

/**< function for converting Polar to Cartesian to get y */
double polar_cart1(double r , double Thita)
{
    double y ;
    double Thita_rad ;

    /**< convert the input value from degree to radius and calculate y */
    Thita_rad = Thita * (M_PI/180.0);
    y = r *sin (Thita_rad) ;

    return y;
}
