
// QUESTION 7

//#include<stdafx.h>

#include<iostream>

#include<math.h>

using namespace std;


class fraction

{

            private:

                        int num, den;                char dummy;

            public:

                        fraction ( ): num(0), den(1)

                                    {/*Empty Body*/}

                        fraction (int n, int d): num(n), den(d)

                                    {/*Empty Body*/}

                        voidget_F ( )

                        {           cout<< "Enter Fraction (in the form of a/b): ";   cin>>num>> dummy >> den;         }

                        bool operator == (fraction f2) const;

                        bool operator != (fraction f2) const;

                        voidshow_F (fraction f1, fraction f2, char op) const

                        {           cout<< f1.num << "/" << f1.den << op;          cout<< f2.num << "/" << f2.den << " = ";

                                    cout<<num<< "/" << den <<endl;                   }

                        fraction operator + (fraction);             fraction operator - (fraction);

fraction operator * (fraction);              fraction operator / (fraction);

fractionlowterms( );

};

//---------------------------------------------------------------------------------------

bool fraction::operator == (fraction f2) const

{

            if(num == 0 && den == 1 && f2.num == 0 && f2.den == 1)              return true;

            else                  return false;

}

bool fraction::operator != (fraction f2) const

{

            if(num != 0 && den != 1 && f2.num != 0 && f2.den != 1)                   return true;

            else                  return false;

}

fraction fraction::operator + (fraction f2)

{           int n,d;              n = (num*f2.den + den*f2.num);        d = den*f2.den;           return fraction(n,d);     }

fraction fraction::operator - (fraction f2)

{           int n,d;              n = (num*f2.den - den*f2.num);         d = den*f2.den;           return fraction(n,d);     }

fraction fraction::operator * (fraction f2)

{           int n,d;  n = num * f2.num;       d = den * f2.den;         return fraction(n,d);                 }

fraction fraction::operator / (fraction f2)

{           int n,d;  n = num * f2.den;        d = den * f2.num;        return fraction(n,d);                 }

fraction fraction::lowterms ( )

{

            longt num, tden, temp, gcd;

            tnum = labs(num);

            tden = labs(den);

            if(tden==0 )

                        {           cout<< "Illegal fraction: division by 0";  exit(1);          }

            else if( tnum==0 )

            {           num=0; den = 1; return fraction(num,den);    }

            while(tnum != 0)

            {

                        if(tnum<tden)

                                    {           temp=tnum;                tnum=tden;                  tden=temp;      }

                        tnum = tnum - tden;

            }

            gcd = tden;

            num = num / gcd;

            den = den / gcd;

            return fraction(num,den);

}



{

            fraction frac1, frac2, frac3,frac4;

            cout<< "Enter '0/1' & '0/1' for both fractions to exit.\n";

            frac1.get_F( );             frac2.get_F( );

            if(frac1 == frac2)

            {           cout<< "GOOD BYE!\n";        exit(1);}

            if(frac1 != frac2)

            {

                        frac3 = frac1 + frac2;frac4 = frac3.lowterms( );       frac4.show_F(frac1,frac2,'+');

                        frac3 = frac1 - frac2;  frac4 = frac3.lowterms( );       frac4.show_F(frac1,frac2,'-');

                        frac3 = frac1 * frac2;  frac4 = frac3.lowterms( );       frac4.show_F(frac1,frac2,'*');

                        frac3 = frac1 / frac2;  frac4 = frac3.lowterms( );       frac4.show_F(frac1,frac2,'/');

            }

            system("pause");

}

