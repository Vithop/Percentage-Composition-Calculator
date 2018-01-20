#include <iostream>
using namespace std;


int main(){
    float H,C,N,O;
    float mH,mC,mN,mO, mm;
    const float mass_H = 1.00;
    const float mass_C = 12.0107;
    const float mass_N = 14.0067;
    const float mass_O = 15.9994;


    cout<<"Hello, World!"<<endl;
    cout<< "Enter percentage of Carbon, Hydrogen, Nitrogen, and Oxygen in order" << endl;
    cout<<"Carbon %"<<endl;
    cin >> C;
    mC = C / mass_C;
    cout<<"Hydrogen %"<<endl;
    cin >> H;
    mH = H / mass_H;
    cout<<"Nitrogen %"<<endl;
    cin >> N;
    mN = N / mass_N;
    cout<<"Oxygen %"<<endl;
    cin >> O;
    mO = O / mass_O;

    cout << "MOLES" << "  " << mC << "  " << mH << "  " << mN << "  " << mO << endl;
    mm = mC;
    if (mH < mm){
        mm = mH;
    }
    if (mN < mm){
        mm = mN;
    }
    if (mO < mm){
        mm = mO;
    }

    cout<<"Carbon "<< mC/mm << endl;
    cout<<"Hydrogen "<<mH/mm << endl;
    cout<<"Nitrogen " <<mN/mm << endl;
    cout<<"Oxygen " << mO/mm << endl;


    return 0;
 }