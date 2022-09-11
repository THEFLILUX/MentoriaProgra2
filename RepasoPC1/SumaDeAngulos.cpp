//
// Created by theflilux on 11/09/22.
//

# include <iostream>
# include <iomanip>
using namespace std;

void leerAngulo(unsigned int *pG, unsigned int *pM, unsigned int *pS){
    cin >> *pG >> *pM >> *pS;
};

void sumadeAngulos(unsigned int g1, unsigned int m1, unsigned int s1, unsigned int g2, unsigned int m2, unsigned int s2,
                   unsigned int *g3, unsigned int *m3, unsigned int *s3){
    *g3 = g1 + g2;
    *m3 = m1 + m2;
    *s3 = s1 + s2;

    *m3 = *m3 + *s3/60;
    *s3 = *s3%60;
    *g3 = *g3 + *m3/60;
    *m3 = *m3%60;
};

int main (){
    unsigned int g1 , m1 , s1 ;
    unsigned int g2 , m2 , s2 ;
    unsigned int g3 , m3 , s3 ;
    cout << " Angulo ␣ 1\n " ;
    leerAngulo (& g1 , & m1 , & s1 ) ;
    cout << " Angulo ␣ 2\n " ;
    leerAngulo (& g2 , & m2 , & s2 ) ;
    sumadeAngulos ( g1 , m1 , s1 , g2 , m2 , s2 ,& g3 ,& m3 ,& s3 ) ;
    cout << setw (6) <<g1 << setw (6) <<m1 << setw (6) <<s1 << " \n " ;
    cout << setw (6) <<g2 << setw (6) <<m2 << setw (6) <<s2 << " \n " ;
    cout << setw (6) <<g3 << setw (6) <<m3 << setw (6) <<s3 << " \n " ;
    return 0;
}
