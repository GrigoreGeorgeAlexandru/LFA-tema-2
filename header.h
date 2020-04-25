#include <iostream>
#include <fstream>
using namespace std;

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class LambdaNFA
{
 private:
int nr_stari;
int nr_drumuri;
char* alfa;
 int stare_init;
 int nr_stari_fin;
    int* stari_fin;
    int nr_trans;
    int* trans1;
    char* trans2;
    int* trans3;
 public:
   int Getnr_stari();
   void Setnr_stari(int nr);
    int Getnr_drumuri();
   void Setnr_drumuri(int nr);
    void Fillalfa(int nr);
    char Getalfa_at_poz(int poz);
    int Getstare_init();
   void Setstare_init(int nr);
   int Getnr_stari_fin();
   void Setnr_stari_fin(int nr);
   void Fillstari_fin(int nr);
   int Getstare_fin_at_poz(int nr);
   int Getnr_trans();
   void Setnr_trans(int nr);
   void Filltrans(int nr_trans);
   void afisarealfa();
   void afisarestari_fin();
   void afisaretrans();
   void afisare();
~LambdaNFA();
int Gettrans1_at_poz(int poz);
    char Gettrans2_at_poz(int poz);
     int Gettrans3_at_poz(int poz);
      void Settrans1_at_poz(int poz,int nr);
       void Settrans2_at_poz(int poz,char nr);
        void Settrans3_at_poz(int poz,int nr);


};
class NFA
{
 private:
int nr_stari;
int nr_drumuri;
char* alfa;
 int stare_init;
 int nr_stari_fin;
    int* stari_fin;
    int nr_trans;
    int* trans1;
    char* trans2;
    int* trans3;

 public:
   int Getnr_stari();
   void Setnr_stari(int nr);
    int Getnr_drumuri();
   void Setnr_drumuri(int nr);
    void Fillalfa(LambdaNFA automat);
    char Getalfa_at_poz(int poz);
    int Getstare_init();
   void Setstare_init(int nr);
   int Getnr_stari_fin();
   void Setnr_stari_fin(int nr);
   void Fillstari_fin(int nr);
   int Getnr_trans();
   void Setnr_trans(int nr);
   void Filltrans();
   void Setstari_fin();
   void Fillstari_fin_with_element_at_poz(int nr,int poz);
   void afisarealfa();
   void afisarestari_fin();
   void afisaretrans();
   void afisare();
   int Gettrans1_at_poz(int poz);
    char Gettrans2_at_poz(int poz);
     int Gettrans3_at_poz(int poz);
      void Settrans1_at_poz(int poz,int nr);
       void Settrans2_at_poz(int poz,char nr);
        void Settrans3_at_poz(int poz,int nr);
~NFA();

struct DFA

{int nr_stari;
int nr_drumuri;
char* alfa;
 int stare_init;
 int nr_stari_fin;
    int* stari_fin;
    int nr_trans;
    int* trans1;
    char* trans2;
    int* trans3;


};

};
NFA lnfa_to_nfa(LambdaNFA automat);

#endif // HEADER_H_INCLUDED
