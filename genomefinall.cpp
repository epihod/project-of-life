#include <iostream>
#include <string>
using namespace std;

class genome{
    string _rna, RNA, _dna1, Rna, DNA1, DNA2, RNa, DNA11, DNA22 , _s1, _s2, _s3, _s4, _s5, _s6;
    int _n1, _n2, s, c;
    char _ch1, _ch2, _ch3, _ch4;
    public:
    void setmokamelRNA(string rna){
        _rna = rna;
    }
    string getRNA(){
        return _rna;
    }
    string MokamelRNA(){
            for(int q=0 ; q<_rna.length(); q++){
                if(_rna[q]>=65 && _rna[q]<=65){_rna[q]=_rna[q]+19;}
                else if(_rna[q]>=67 && _rna[q]<=67){_rna[q]=_rna[q]+4;}
                else if(_rna[q]>=84 && _rna[q]<=84){_rna[q]=_rna[q]-19;}
                else if(_rna[q]>=71 && _rna[q]<=71){_rna[q]=_rna[q]-4;}
            }
        return _rna;
    }
    void setjaheshKRNA(string rna ,char ch1 ,int n1 ,char ch2){
        RNA = rna , _ch1 = ch1 , _n1 = n1 , _ch2 = ch2 , s = 0;
    }
    string JaheshKRNA(){
        for(int i=0 ; i<RNA.length() ; i++){
                if(RNA[i]==_ch1 && s<_n1){
                    RNA[i]=_ch2;
                    s=s+1;
                }
                else{
                    RNA[i]=RNA[i];
                    s=s;
                }
        }
        return RNA;
    }
    void setJaheshKDNA1(string dna1, char ch3, int n2, char ch4){
        _dna1 = dna1 , _ch3 = ch3 , _n2 = n2 , _ch4 = ch4 , c=0;
    }
    string JaheshKDNA1(){
        for(int i=0 ; i<_dna1.length() ; i++){
                if(_dna1[i]==_ch3 && c<_n2){
                    _dna1[i]=_ch4;
                    c=c+1;
                }
                else{
                    _dna1[i]=_dna1[i];
                    c=c;
                }
        }
        return _dna1;
    }
    string JaheshKDNA2(){
        for(int q=0 ; q<_dna1.length(); q++){
                if(_dna1[q]>=65 && _dna1[q]<=65){_dna1[q]=_dna1[q]+19;}
                else if(_dna1[q]>=67 && _dna1[q]<=67){_dna1[q]=_dna1[q]+4;}
                else if(_dna1[q]>=84 && _dna1[q]<=84){_dna1[q]=_dna1[q]-19;}
                else if(_dna1[q]>=71 && _dna1[q]<=71){_dna1[q]=_dna1[q]-4;}
            }
            return _dna1;
    }
    void SetJaheshBRNA(string rna, string s1, string s2){
        Rna = rna , _s1 = s1 , _s2 = s2 ;
        size_t found = Rna.find(_s1);
        if(found != string :: npos ){
            for(int i = 0 ; i < found ; i++){
                cout << Rna[i];
            }
            cout<<_s2;
            for(int i = found+_s1.length() ; i < Rna.length() ; i++){
                cout << Rna[i];
            }
        }
        else{
            cout << "s1 not found.";
        }
    }
    void SetjaheshBDNA(string dna1, string dna2, string s3, string s4){
        DNA1 = dna1, DNA2 = dna2 , _s3 = s3 , _s4 = s4;
        size_t found1 = DNA1.find(_s3);
        if(found1 != string :: npos ){
            for(int i=0 ; i<found1 ; i++){
                cout << DNA1[i];
            }
            cout << _s4;
            for(int i = found1+_s3.length() ; i < DNA1.length() ; i++){
                cout << DNA1[i];
            }
            cout << endl;
            for(int i = 0 ; i  < found1 ; i++){
                cout << DNA2[i];
            }
            for(int q=0 ; q<_s4.length(); q++){
                if(_s4[q]>=65 && _s4[q]<=65){_s4[q]=_s4[q]+19;}
                else if(_s4[q]>=67 && _s4[q]<=67){_s4[q]=_s4[q]+4;}
                else if(_s4[q]>=84 && _s4[q]<=84){_s4[q]=_s4[q]-19;}
                else if(_s4[q]>=71 && _s4[q]<=71){_s4[q]=_s4[q]-4;}
                cout << _s4[q];
            }
            for(int i = found1+_s3.length() ; i< DNA1.length() ; i++){
                cout << DNA2[i];
            }
        }
        else{
            cout << "s1 not found.";
        }
    }
    void reverseRNA(string rna, string s5){
        RNa = rna , _s5 = s5 ;
        size_t found2 = RNa.find(_s5);
        if(found2 != string :: npos ){
            for(int i=0 ; i<_s5.length()/2 ; i++){
                swap(_s5[i] , _s5[_s5.length()-i-1]);
            }
            for(int i = 0 ; i < found2 ; i++){
                cout<<RNa[i];
            }
            cout << _s5;
            for(int i = found2+_s5.length() ; i < RNa.length() ; i++){
            cout << RNa[i];
            }  
        }
        else{
            cout << "s1 not found.";
        }
    }
    void setReversedna(string dna1, string s6, string dna2){
        DNA11 = dna1 , DNA22 = dna2 , _s6 = s6;
    }
    void reversedna(){
        size_t found3 = DNA11.find(_s6);
        if(found3 != string :: npos ){
            for(int i=0 ; i<_s5.length()/2 ; i++){
                swap(_s6[i] , _s6[_s6.length() -i -1]);
            }
            for(int i=0 ; i<found3 ; i++){
                cout << DNA11[i];
            }
            cout << _s6 ;
            for(int i = found3+_s6.length() ; i<DNA11.length() ; i++){
                cout << DNA11[i];
            }
            cout << endl ;
            for(int i=0 ; i < found3 ; i++){
                cout << DNA22[i];
            }
            for(int q=0 ; q<_s6.length() ; q++){
                if(_s6[q]>=65 && _s6[q]<=65){_s6[q]=_s6[q]+19;}
                else if(_s6[q]>=67 && _s6[q]<=67){_s6[q]=_s6[q]+4;}
                else if(_s6[q]>=84 && _s6[q]<=84){_s6[q]=_s6[q]-19;}
                else if(_s6[q]>=71 && _s6[q]<=71){_s6[q]=_s6[q]-4;}
                cout<<_s6[q];
            }
            for(int i = found3+_s6.length() ; i<DNA11.length() ; i++){
                cout << DNA22[i];
            }
        }
        else{
            cout << "s1 not found.";
        }
    }
};


int main(){
    genome g;
    cout << "enter RNA: ";
    string rna;
    cin >> rna;
    string dna1 , dna2;
    cout << "first strand of DNA: ";
    cin >> dna1;
    cout << "second strand of DNA: ";
    cin >> dna2;
    g.setmokamelRNA(rna);
    cout << "the DNA that is made from the strand of RNA: " << endl << g.getRNA() << endl << g.MokamelRNA();
    cout << endl << "for subtle mutation please enter ch1, n and ch2. " << endl << "RNA: ";
    int n1;
    char ch1, ch2;
    cin >> ch1 >> n1 >> ch2;
    g.setjaheshKRNA(rna, ch1, n1, ch2);
    cout << g.JaheshKRNA() << endl << "DNA: ";
    int n2;
    char ch3, ch4;
    cin >> ch3 >> n2 >> ch4;
    g.setJaheshKDNA1(dna1, ch3, n2, ch4);
    cout << g.JaheshKDNA1() << endl << g.JaheshKDNA2();
    cout << endl << "for big mutation please enter s1 and s2. " << endl << "RNA: ";
    string s1, s2;
    cin >> s1 >> s2;
    g.SetJaheshBRNA(rna, s1, s2);
    cout << endl << "DNA: ";
    string s3, s4;
    cin >> s3 >> s4;
    g.SetjaheshBDNA(dna1 , dna2, s3, s4);
    cout << endl << "for reverse mutation please enter s1. " << endl << "RNA: ";
    string s5;
    cin >> s5;
    g.reverseRNA(rna , s5);
    cout << endl << "DNA: ";
    string s6;
    cin >> s6;
    g.setReversedna(dna1, s6, dna2);
    g.reversedna();
    return 0;
}