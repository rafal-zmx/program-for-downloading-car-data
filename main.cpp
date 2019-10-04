#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>


using namespace std;

string marka, model, kolor;
float pojemnosc, rok;
long double przebieg;
int ilosc_miejst_siedz;
int typ_nadwozia;

int main()
{
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"    \nDane samochodu\n\n";
    cout<<"Marka: ";
    cin>>marka;
    cout<<"Model: ";
    cin>>model;

    cout<<"\n Wybierz typ Nadwozia\n";
    cout<<"1.Sedan\n";
    cout<<"2.Lift-Back\n";
    cout<<"3.Hatch-Back\n";
    cout<<"4.Kombi\n";
    cout<<"5.Pick-Up\n";
    cout<<"6.Kabriolet\n";
    cout<<"7.Van\n";
    cout<<"8.MiniVan\n";
    cout<<"9.MikroVan\n";
    cout<<"10.SUV\n";
    cout<<"11.Coupe\n";
    cout<<"12.Limuzyna\n";
    cout<<"13.Roadster\n";
    cout<<"Twoj wybor: ";

    cin>>typ_nadwozia;

    switch(typ_nadwozia)
    {
        case 1:
        cout<<"wybrales: Sedan\n";
        break;
        case 2:
        cout<<"wybrales: Lift-Back\n";
        break;
        case 3:
        cout<<"wybrales: Hatch-Back\n";
        break;
        case 4:
        cout<<"wybrales: Kombi\n";
        break;
        case 5:
        cout<<"wybrales: Pick-Up\n";
        break;
        case 6:
        cout<<"wybrales: Kabriolet\n";
        break;
        case 7:
        cout<<"wybrales: Van\n";
        break;
        case 8:
        cout<<"wybrales: MiniVan\n";
        break;
        case 9:
        cout<<"wybrales: MikroVan\n";
        break;
        case 10:
        cout<<"wybrales: SUV\n";
        break;
        case 11:
        cout<<"wybrales: Coupe\n";
        break;
        case 12:
        cout<<"wybrales: Limuzyna\n";
        break;
        case 13:
        cout<<"wybrales: Roadster\n";
        break;
        default:
                cout<<"Podaj liczbe od 1 do 13\n";
                cin>>typ_nadwozia;
                //cout<<"wybrales: "<<typ_nadwozia;

    }

    cout<<"\nKolor: ";
    cin>>kolor;
    cout<<"\nPojemnosc silnika: ";
    cin>>pojemnosc;

    cout<<"\nPrzebieg: ";
    cin>>przebieg;
    cout<<"\nIle osobowy: ";
    cin>>ilosc_miejst_siedz;


    for(;;)
    {
        int wybor;      //zmienna zadeklarowana lokalnie, bo i tak dziala w nieskonczonej petli
    system("cls");
    cout<<"\n    Menu\n";
    cout<<"  Co chcesz zobaczyc: ";
    cout<<"\n--------------------\n";
    cout<<"1. Marka\n";
    cout<<"2. Model\n";
    cout<<"3. Typ Nadwozia\n";
    cout<<"4. Kolor\n";
    cout<<"5. Pojemnosc silnika\n";
    cout<<"6. Przebieg\n";
    cout<<"7. Ilosc osob\n";
    cout<<"8. Wyjscie z programu\n\n\n";

    wybor=getch();

    switch(wybor)
    {

        case '1':
            cout<<"\nMarka: "<<marka;
            cout<<"\nNACISNIJ ENTER\n";
        break;
        case '2':
            cout<<"\nModel: "<<model;
            cout<<"\nNACISNIJ ENTER\n";
        break;
        case '3':
            if (typ_nadwozia==1)
            {
                cout<<"\nTyp Nadwozia: Sedan";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==2)
            {
                cout<<"\nTyp Nadwozia: Lift-Back";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==3)
            {
                cout<<"\nTyp Nadwozia: Hatch-Back";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==4)
            {
                cout<<"\nTyp Nadwozia: Kombi";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==5)
            {
                cout<<"\nTyp Nadwozia: Pick-Up";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==6)
            {
                cout<<"\nTyp Nadwozia: Kabriolet";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==7)
            {
                cout<<"\nTyp Nadwozia: Van";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==8)
            {
                cout<<"\nTyp Nadwozia: MiniVan";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==9)
            {
                cout<<"\nTyp Nadwozia: MikroVan";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==10)
            {
                cout<<"\nTyp Nadwozia: SUV";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==11)
            {
                cout<<"\nTyp Nadwozia: Coupe";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==12)
            {
                cout<<"\nTyp Nadwozia: Limuzyna";
                cout<<"\nNACISNIJ ENTER\n";
            }
            if (typ_nadwozia==13)
            {
                cout<<"\nTyp Nadwozia: Roadster";
                cout<<"\nNACISNIJ ENTER\n";
            }

        break;
        case '4':
            cout<<"\nKolor: "<<kolor;
            cout<<"\nNACISNIJ ENTER\n";
        break;
        case '5':
            cout<<"\nPojemnosc silnika: "<<pojemnosc;
            cout<<"\nNACISNIJ ENTER\n";
        break;
        case '6':
            cout<<"\nPrzebieg: "<<przebieg<<"km";
            cout<<"\nNACISNIJ ENTER\n";
        break;
        case '7':
            cout<<"\nIlosc osob: "<<ilosc_miejst_siedz;
            cout<<"\nNACISNIJ ENTER\n";
        break;
        case '8':

            cout<<"\n\n    Wyjscie z programu, nacisnij klawisz";

            exit(0);
        break;
        default:
            cout<<"Podaj numerek od 1 do 6";
            cout<<"\nNACISNIJ ENTER\n";


    }
        getch();
    }





    return(0);
}
