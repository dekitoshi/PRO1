#include <iostream>
using namespace std;

struct Rectangle {
    int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle& r) {
    cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
}

int relacio(const Rectangle& r1, const Rectangle& r2) {

    if (r1.x_esq == r2.x_esq 
            && r1.x_dre == r2.x_dre 
            && r1.y_baix == r2.y_baix 
            && r1.y_dalt == r2.y_dalt) 
    {
        return 4;
    }

    else if (r1.x_esq <= r2.x_esq 
            && r1.x_dre >= r2.x_dre 
            && r1.y_baix <= r2.y_baix
            && r1.y_dalt >= r2.y_dalt) 
    {   
        return 2;
    }
    
    else if (r2.x_esq <= r1.x_esq 
            && r2.x_dre >= r1.x_dre 
            && r2.y_baix <= r1.y_baix 
            && r2.y_dalt >= r1.y_dalt)
    {
        return 1;
    }

else if (r1.y_baix > r2.y_dalt 
        or r2.y_baix > r1. y_dalt 
        or r1.x_esq > r2.x_dre 
        or r2.x_esq > r1.x_dre) 

    {
        return 0;
    }


    
    else return 3;
}

int main() {
    int n;
    cin >> n;

    Rectangle r1, r2;


    for (int i = 0; i < n; i++) {
        llegeix(r1);
        llegeix(r2);
        int cas = relacio(r1, r2);
        if (cas == 0) cout << "els rectangles no intersecten";
        else if (cas == 1) cout << "el primer rectangle es interior al segon";
        else if (cas == 2) cout << "el segon rectangle es interior al primer";
        else if (cas == 3) cout << "els rectangles intersecten";
        else if (cas == 4) cout << "els rectangles son iguals";
        cout << endl;
    }
}