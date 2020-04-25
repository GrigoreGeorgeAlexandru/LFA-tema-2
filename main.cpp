#include <iostream>
#include <fstream>
#include "header.h"
using namespace std;
ifstream in("date.in");
int LambdaNFA::Getnr_stari()
{

    return nr_stari;

}
void LambdaNFA::Setnr_stari(int nr)
{
    this->nr_stari=nr;


}
int LambdaNFA::Getnr_drumuri()
{

    return nr_drumuri;

}
void LambdaNFA::Setnr_drumuri(int nr)
{
    this->nr_drumuri=nr;


}
void LambdaNFA::Fillalfa(int nr)
{

    alfa = new char[nr];
    for(int i=0; i<nr; ++i)
        in>>alfa[i];



}
char LambdaNFA::Getalfa_at_poz(int poz)
{

    return alfa[poz];

}
int LambdaNFA::Getstare_init()
{

    return stare_init;


}
void LambdaNFA::Setstare_init(int nr)
{

    this->stare_init=nr;


}
int LambdaNFA::Getnr_stari_fin()
{

    return nr_stari_fin;




}
void LambdaNFA::Setnr_stari_fin(int nr)
{

    this->nr_stari_fin=nr;

}
int LambdaNFA::Getnr_trans()
{

    return nr_trans;

}
void LambdaNFA::Setnr_trans(int nr)
{

    this->nr_trans=nr;

}
void LambdaNFA::Filltrans(int nr_trans)
{

    trans1 = new int[nr_trans];

    trans2 = new char[nr_trans];

    trans3 = new int[nr_trans];
    for(int i=0; i<nr_trans; ++i)
    {
        in>>trans1[i];
        in>>trans2[i];
        in>>trans3[i];
    }

}

LambdaNFA::~LambdaNFA()
{
    delete trans1;
    delete trans2;
    delete trans3;
    delete alfa;
    delete stari_fin;
}
void LambdaNFA::Fillstari_fin(int nr)
{
    stari_fin = new int[nr];
    for(int i=0; i<nr; ++i)
        in>>stari_fin[i];




}



void LambdaNFA::afisare()
{
    cout<<"nr de stari este:"<<this->Getnr_stari()<<endl;
    cout<<"nr de simboluri din alfabet este:"<<this->Getnr_drumuri()<<endl;
    cout<<"alfabetul este:";
    this->afisarealfa();
    cout<<"starea initiala este:"<<this->Getstare_init()<<endl;
    cout<<"numarul de stari finale este:"<<this->Getnr_stari_fin()<<endl;
    cout<<"starile finale sunt:";
    this->afisarestari_fin();
    cout<<"numarul de tranzitii este:"<<this->Getnr_trans()<<endl;
    cout<<"tranzitiile sunt:\n";
    this->afisaretrans();
}

void LambdaNFA::afisarealfa()
{
    for(int i=0; i<nr_drumuri; ++i)
        cout<<alfa[i]<<" ";
    cout<<endl;


}



void LambdaNFA::afisarestari_fin()
{
    for(int i=0; i<nr_stari_fin; ++i)
        cout<<stari_fin[i]<<" ";
    cout<<endl;


}
void LambdaNFA::afisaretrans()
{
    for(int i=0; i<nr_trans; ++i)
        cout<<trans1[i]<<" "<<trans2[i]<<" "<<trans3[i]<<endl;



}

int NFA::Getnr_stari()
{

    return nr_stari;

}
void NFA::Setnr_stari(int nr)
{
    this->nr_stari=nr;


}
int NFA::Getnr_drumuri()
{

    return nr_drumuri;

}
void NFA::Setnr_drumuri(int nr)
{
    this->nr_drumuri=nr;


}
void NFA::Fillalfa(LambdaNFA automat)
{

    alfa = new char[nr_drumuri];
    for(int i=0; i<nr_drumuri; ++i)
        alfa[i]=automat.Getalfa_at_poz(i);



}
char NFA::Getalfa_at_poz(int poz)
{

    return alfa[poz];

}
int NFA::Getstare_init()
{

    return stare_init;


}
void NFA::Setstare_init(int nr)
{

    this->stare_init=nr;


}
int NFA::Getnr_stari_fin()
{

    return nr_stari_fin;




}
void NFA::Setnr_stari_fin(int nr)
{

    this->nr_stari_fin=nr;

}
int NFA::Getnr_trans()
{

    return nr_trans;

}
void NFA::Setnr_trans(int nr)
{

    this->nr_trans=nr;

}
void NFA::Filltrans()
{

    trans1 = new int[nr_trans];

    trans2 = new char[nr_trans];

    trans3 = new int[nr_trans];


}

NFA::~NFA()
{
    delete trans1;
    delete trans2;
    delete trans3;
    delete alfa;
    delete stari_fin;
}
void NFA::Fillstari_fin(int nr)
{
    stari_fin = new int[nr];
    for(int i=0; i<nr; ++i)
        in>>stari_fin[i];




}



void NFA::afisare()
{
    cout<<"nr de stari este:"<<this->Getnr_stari()<<endl;
    cout<<"nr de simboluri din alfabet este:"<<this->Getnr_drumuri()<<endl;
  cout<<"alfabetul este:";
   this->afisarealfa();
    cout<<"starea initiala este:"<<this->Getstare_init()<<endl;
    cout<<"numarul de stari finale este:"<<this->Getnr_stari_fin()<<endl;
    cout<<"starile finale sunt:";
    this->afisarestari_fin();
    cout<<"numarul de tranzitii este:"<<this->Getnr_trans()<<endl;
    cout<<"tranzitiile sunt:\n";
    this->afisaretrans();
}

void NFA::afisarealfa()
{
    for(int i=0; i<nr_drumuri; ++i)
        cout<<alfa[i]<<" ";
    cout<<endl;


}



void NFA::afisarestari_fin()
{
    for(int i=0; i<nr_stari_fin; ++i)
        cout<<stari_fin[i]<<" ";
    cout<<endl;


}
void NFA::afisaretrans()
{
    for(int i=0; i<nr_trans; ++i)
        cout<<trans1[i]<<" "<<trans2[i]<<" "<<trans3[i]<<endl;



}

int NFA::Gettrans1_at_poz(int poz)
{

    return trans1[poz];
}
char NFA::Gettrans2_at_poz(int poz)
{

    return trans2[poz];

}
int NFA::Gettrans3_at_poz(int poz)
{
    return trans3[poz];
}

int LambdaNFA::Gettrans1_at_poz(int poz)
{

    return trans1[poz];
}
char LambdaNFA::Gettrans2_at_poz(int poz)
{

    return trans2[poz];

}
int LambdaNFA::Gettrans3_at_poz(int poz)
{
    return trans3[poz];
}
void LambdaNFA::Settrans1_at_poz(int poz,int nr)
{

    this->trans1[poz]=nr;
}
void LambdaNFA::Settrans2_at_poz(int poz,char nr)
{
    this->trans2[poz]=nr;

}
void LambdaNFA::Settrans3_at_poz(int poz,int nr)
{
    this->trans3[poz]=nr;


}


void NFA::Settrans1_at_poz(int poz,int nr)
{

    this->trans1[poz]=nr;

}
void NFA::Settrans2_at_poz(int poz,char nr)
{
    this->trans2[poz]=nr;

}
void NFA::Settrans3_at_poz(int poz,int nr)
{
    this->trans3[poz]=nr;


}


void NFA::Setstari_fin()
{

    stari_fin=new int[nr_stari_fin];


}
void NFA::Fillstari_fin_with_element_at_poz(int nr,int poz)
{

    stari_fin[poz]=nr;

}

int  LambdaNFA::Getstare_fin_at_poz(int nr)
{

    return stari_fin[nr];


}

NFA lnfa_to_nfa(LambdaNFA automat)
{

    int inchideri[automat.Getnr_stari()][automat.Getnr_stari()];


    for(int i=0; i<automat.Getnr_stari(); ++i)

    {
        int frecventa[automat.Getnr_stari()]= {0};
        int k=0;
        inchideri[i][k]=i;
        k++;
        for(int j=0; j<automat.Getnr_trans(); ++j)
        {
            if(automat.Gettrans1_at_poz(j)==i&&automat.Gettrans2_at_poz(j)=='$')
            {
                inchideri[i][k]=automat.Gettrans3_at_poz(j);
                frecventa[automat.Gettrans3_at_poz(j)]++;
                k++;

            }



        }

        for(int q=1 ; q<k; ++q)
        {
            for(int w=0; w<automat.Getnr_trans(); ++w)
            {
                if(automat.Gettrans1_at_poz(w)==inchideri[i][q]&&automat.Gettrans2_at_poz(w)=='$')
                    if(frecventa[automat.Gettrans3_at_poz(w)]==0)
                    {
                        inchideri[i][k]=automat.Gettrans3_at_poz(w);
                        frecventa[automat.Gettrans3_at_poz(w)]++;
                        k++;

                    }

            }


        }







        inchideri[i][k]=-1;
    }





//    for(int i=0; i<automat.Getnr_stari(); ++i)
//    {
//        for(int j=0; j<automat.Getnr_stari(); ++j)
//        {
//            if(inchideri[i][j]==-1)
//                break;
//
//            cout<<inchideri[i][j]<<" ";
//
//        }
//        cout<<endl;
//
//
//    }

    NFA automat2;

    automat2.Setstare_init(automat.Getstare_init());

    int indexfin=0;

    for(int i=0; i<automat.Getnr_stari(); ++i)
    {
        for(int j=0; j<automat.Getnr_stari(); ++j)
        {
            int flag=0;
            for(int q=0; q<automat.Getnr_stari_fin(); ++q)
            {
                if(inchideri[i][j]==automat.Getstare_fin_at_poz(q))
                {

                    indexfin++;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
    }

    automat2.Setnr_stari_fin(indexfin);
    automat2.Setstari_fin();
    indexfin=0;
    for(int i=0; i<automat.Getnr_stari(); ++i)
    {
        for(int j=0; j<automat.Getnr_stari(); ++j)
        {
            int flag=0;
            for(int q=0; q<automat.Getnr_stari_fin(); ++q)
            {
                if(inchideri[i][j]==automat.Getstare_fin_at_poz(q))
                {
                    automat2.Fillstari_fin_with_element_at_poz(i,indexfin);
                    indexfin++;
                    flag=1;
                    break;
                }


            }
            if(flag==1)
                break;
        }
    }
int inchiderialfa[automat.Getnr_drumuri()][automat.Getnr_stari()][automat.Getnr_stari()];
int nr=0;
for(int p=0;p<automat.Getnr_drumuri();++p)
{for(int i=0; i<automat.Getnr_stari(); ++i)

    {
        int frecventa[automat.Getnr_stari()]= {0};
        int k=0;


        for(int j=0; ; ++j)
        {   for(int z=0;z<automat.Getnr_trans();++z)
            {


            if(automat.Gettrans1_at_poz(z)==inchideri[i][j]&&automat.Gettrans2_at_poz(z)==automat.Getalfa_at_poz(p))
             if(frecventa[automat.Gettrans3_at_poz(z)]==0)
            {
                inchiderialfa[p][i][k]=automat.Gettrans3_at_poz(z);
                frecventa[automat.Gettrans3_at_poz(z)]++;
                k++;nr++;

            }
            }

if(inchideri[i][j]==-1)break;
        }

        for(int q=0 ; q<k; ++q)
        {
            for(int w=0; w<automat.Getnr_trans(); ++w)
            {
                if(automat.Gettrans1_at_poz(w)==inchiderialfa[p][i][q]&&automat.Gettrans2_at_poz(w)=='$')
                   {//cout<<"AICI "<<i<<" "<<inchiderialfa[p][i][q]<<endl;

                   if(frecventa[automat.Gettrans3_at_poz(w)]==0)
                    {
                        inchiderialfa[p][i][k]=automat.Gettrans3_at_poz(w);
                        frecventa[automat.Gettrans3_at_poz(w)]++;
                        k++;nr++;

                    }

                   }
            }


        }







        inchiderialfa[p][i][k]=-1;
    }






}




//for(int p=0;p<automat.Getnr_drumuri();++p)
//{cout<<automat.Getalfa_at_poz(p)<<endl;
//
//    for(int i=0; i<automat.Getnr_stari(); ++i)
//    {cout<<i<<":";
//        for(int j=0; j<automat.Getnr_stari(); ++j)
//        {
//            if(inchiderialfa[p][i][j]==-1)
//                break;
//
//            cout<<inchiderialfa[p][i][j]<<" ";
//
//        }
//        cout<<endl;
//
//
//    }
//    cout<<endl;
//
//}


automat2.Setnr_trans(nr);
automat2.Filltrans();
nr=0;
for(int p=0;p<automat.Getnr_drumuri();++p)
{
     for(int i=0; i<automat.Getnr_stari(); ++i)
     {
         for(int j=0; j<automat.Getnr_stari(); ++j)
         {if(inchiderialfa[p][i][j]==-1)
                break;
             automat2.Settrans1_at_poz(nr,i);
             automat2.Settrans2_at_poz(nr,automat.Getalfa_at_poz(p));
             automat2.Settrans3_at_poz(nr,inchiderialfa[p][i][j]);
             nr++;

         }
     }


}
automat2.Setnr_stari(automat.Getnr_stari());
automat2.Setnr_drumuri(automat.Getnr_drumuri());
automat2.Fillalfa(automat);
//automat2.afisare();


return automat2;






}

//void nfa_to_dfa(NFA automat){
//
//int matrice[automat.Getnr_stari()][automat.Getnr_drumuri()][automat.Getnr_stari()];
//for(i=0;i<automat.Getnr_stari();i++)
//    for(j=0;j<automat.Getnr_drumuri();j++)
//        for(k=0;k<automat.Getnr_stari();k++)
//        matrice[i][j][k]=-1;
//
//
//
//
//}

int main()
{
    int nr;
    in>>nr;
    LambdaNFA automat;
    automat.Setnr_stari(nr);
    in>>nr;
    automat.Setnr_drumuri(nr);
    automat.Fillalfa(nr);
    in>>nr;
    automat.Setstare_init(nr);
    in>>nr;
    automat.Setnr_stari_fin(nr);
    automat.Fillstari_fin(nr);
    in>>nr;
    automat.Setnr_trans(nr);
    automat.Filltrans(nr);
    cout<<"LambdaNFA:\n";
    automat.afisare();
NFA automat2=lnfa_to_nfa(automat);
cout<<"NFA:\n";
   automat2.afisare();
cout<<"programul sa terminat";
    return 0;
}
