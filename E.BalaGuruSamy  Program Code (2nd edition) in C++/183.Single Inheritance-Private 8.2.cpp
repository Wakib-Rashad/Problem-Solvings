//183.Single Inheritance:Private 8.2
#include<iostream>
#include<conio.h>
using namespace std;

class B
{
    int a;

    public:
        int b;
        void get_ab();
        int get_a(void);
        void show_a(void);
};

class D : private B
{
    int c;

    public:
        void mul(void);
        void display(void);
};
//.............................................................

void B :: get_ab(void)
{
    a=5;b=10;
}

int B :: get_a()
{
    return a;
}

void B :: show_a()
{
    cout << "a :" << a << endl;
}

void D :: mul()
{
    get_ab(); //change
    c = b * get_a();
}

void D :: display()
{
    show_a(); //extra

    cout << "b :" << b << endl;
    cout << "c :" << c << endl << endl;
}
//.............................................................

int main()
{
    D d;

    //d.get_ab();
    d.mul();
    //d.show_a();
    d.display();

    cout << "Output: " << endl;
    //d.b = 20;
    d.mul();
    d.display();

    getch();
    return 0;
    }
