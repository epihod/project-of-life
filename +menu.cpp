#include <iostream>
#include <string>
#include <vector>
using namespace std;

class genome{
    public:
    string _rna, RNA, _dna1, Rna, DNA1, DNA2, RNa, DNA11 , _s1, _s2, _s3, _s4, _s5, _s6;
    int _n1, _n2, s, c;
    char _ch1, _ch2, _ch3, _ch4;
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
    void setReversedna(string dna1, string s6){
        DNA11 = dna1 , _s6 = s6 ; 
    }
    string reversedna(){
        int found3 = DNA11.find(_s6);
        if(found3 != string :: npos ){
            for(int i=0 ; i<_s6.length()/2 ; i++){
                swap(_s6[i] , _s6[_s6.length() -i -1]);
            }
            for(int i=found3 ; i<found3 +_s6.length() ; i++){

                DNA11[i] = _s6[i-found3];
            }
            return DNA11;
        }
        else{
            return "s1 not found.";
        }
    }
    string reversedna2(){
        for(int q=0 ; q<DNA11.length() ; q++){
            if(DNA11[q]>=65 && DNA11[q]<=65){DNA11[q]=DNA11[q]+19;}
            else if(DNA11[q]>=67 && DNA11[q]<=67){DNA11[q]=DNA11[q]+4;}
            else if(DNA11[q]>=84 && DNA11[q]<=84){DNA11[q]=DNA11[q]-19;}
            else if(DNA11[q]>=71 && DNA11[q]<=71){DNA11[q]=DNA11[q]-4;}
        }
        return DNA11;
    }
};
class cell : public genome{
    string _str1, _str2, _S1, _S2, cho1, cho2, mcho1, mcho2, _Str1;
    int h, l, f, _N1, _N2, _N3, _N4, d;
    char _CH1, _CH2;
    public:
    void margselooli(string str1,string str2){
        _str1 = str1 , _str2 = str2 , h=0 , l=0 , f=0;
        for(int i=0 ; i<_str1.length() ; i++){
            if(_str1[i]=='A' && _str2[i]=='T'){h=h;}
            else if(_str1[i]=='T' && _str2[i]=='A'){h=h;}
            else if(_str1[i]=='C' && _str2[i]=='G'){h=h;}
            else if(_str1[i]=='G' && _str2[i]=='C'){h=h;}
            else{h=h+1;}
        }
        for(int i=0 ; i<_str1.length() ; i++){
            if(_str1[i]=='A'){l=l+1;}
            else if(_str1[i]=='C'){f=f+1;}
            else{
                l=l;
                f=f;
            }
        }
        if(h>=5){cout<<"chromosome invalid.";}
        else if(l>(3*f)){cout<<"chromosome invalid.";}
        else{cout<<"chromosome accepted.";}
    }
    string setinfo(){
        if(h>=5){return "chromosome invalid.";}
        else if(l>(3*f)){return "chromosome invalid.";}
        else{return "chromosome accepted.";}
    }
    void JaheshBDNA(int N1, int N2, vector<string> &v1, vector<string> &v2, string S1 , string S2){
        _N1 = N1 , _N2 = N2 , cho1 = v1[N1-1] , cho2 = v1[N2-1], _S1 = S1 , _S2 = S2 , mcho1 = v2[N1-1] , mcho2 = v2[N2-1];
        size_t found4 = cho1.find(_S1);
        size_t found5 = cho2.find(_S2);
        if(found4 != string::npos && found5 != string::npos){
            for(int i = 0 ; i < found4 ; i++){
                cout << cho1[i];
            }
            cout << _S2;
            for(int i = found4+_S1.length() ; i<  cho1.length() ; i++){
                cout << cho1[i];
            }
            cout << endl;
            for(int i = 0 ; i < found4 ; i++){
                cout << mcho1[i];
            }
            for(int i = found5 ; i < found5+_S2.length() ; i++){
                cout << mcho2[i];
            }
            for(int i = found4+_S1.length(); i < cho1.length() ; i++){
                cout << mcho1[i];
            }
            cout << endl;
            for(int i = 0 ; i < found5 ; i++){
                cout << cho2[i];
            }
            cout << _S1;
            for(int i = found5+_S2.length() ; i < cho2.length() ; i++){
                cout << cho2[i];
            }
            cout << endl;
            for(int i = 0 ; i < found5 ; i++){
                cout << mcho2[i];
            }
            for(int i = found4 ; i < found4+_S1.length() ; i++){
                cout << mcho1[i];
            }
            for(int i = found5+_S2.length() ; i < cho2.length() ; i++){
                cout << mcho2[i];
            }
        }
    }
    void setjaheshkk(vector<string> &v1, int N3, int N4, int CH1, int CH2){
        _dna1 = v1[N3-1] , _ch3 = CH1 , _n2 = N4 , _ch4 = CH2 , c = 0 ;
    }
    void setreversee(int N5, vector<string> &v1, string S3){
        DNA11 = v1[N5-1] , _s6 = S3 ;
    }
};

int main(){
    cout << "Enter your choice:  " << endl << "1.cell/genome. " << endl << "2.cell/cell. " << endl ;
    int choice;
    cin >> choice;
    switch(choice){
    case 1:{
        cout << "               genome class" << endl;
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
    g.setReversedna(dna1, s6);
    cout << g.reversedna() << endl << g.reversedna2() ;
    break;
    }
    //////////////////////
    case 2:{
        cout << "               cell class." << endl ;
    cell c;
    vector<string> v1, v2;
    cout << endl << "enter the number of the Chromosomes: ";
    int N;
    cin >> N;
    string str1, str2, k;
    for(int i = 0 ; i < N ; i++){
        cout << i+1 << " :"<< "first strand of the chromosome: " << endl;
        cin >> str1;
        cout << "second strand of chromosome: " << endl;
        cin >> str2;
        c.margselooli(str1, str2);
        cout << endl;
        k = c.setinfo();
        if(k == "chromosome accepted."){
            v1.push_back(str1);
            v2.push_back(str2);
        }
    }
    cout << "all the accepted chromosomes: "<< endl;
    for(int i = 0 ; i < v1.size() ; i++){

        cout << i+1 << ":" << endl << v1[i] << endl <<v2[i] <<  endl;
    }
    cout << "for big mutation pleae enter s1, n, s2, m: ";
    string S1, S2;
    int N1, N2;
    cin >> S1 >> N1 >> S2 >> N2 ;
    c.JaheshBDNA(N1, N2, v1, v2, S1, S2);
    cout << endl << "enter m, n, ch1, ch2 for the subtle mutation: ";
    int N3, N4;
    char CH1, CH2;
    cin >> N3 >> N4 >> CH1 >> CH2;
    c.setjaheshkk(v1, N3, N4, CH1, CH2);
    cout << c.JaheshKDNA1() << endl << c.JaheshKDNA2() << endl << "enter s1 and n for the reverse mutation: ";
    int N5;
    string S3;
    cin >> N5 >> S3;
    c.setreversee(N5, v1, S3);
    cout << c.reversedna() << endl << c.reversedna2();
    break;
    }
    }
    return 0;
}