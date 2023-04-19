#include <iostream>
#include <string>

using namespace std;

class genome {
    private:
        string RNA;
        string DNA1, DNA2;
        string a;
        int N1, s,c;
        string u,R;
        string m1,m2;
        string l1,l2;
        char _ck1 , _ck2;
    public:
        void seta (string rna){
            a = rna;
        }
        void setRNA(string rna) {
            RNA = rna;
        }
        void setDNA(string dna1, string dna2){
            DNA1 = dna1 , DNA2 = dna2;
        }
        string getRNA() {
            return RNA;
        }
        string mokamelRNA() {
            for(int q=0 ; q<a.length(); q++){
                if(a[q]>=65 && a[q]<=65)
                {a[q]=a[q]+19;}
                 else if(a[q]>=67 && a[q]<=67)
                {a[q]=a[q]+4;}
                else if(a[q]>=84 && a[q]<=84)
                {a[q]=a[q]-19;}
                else if(a[q]>=71 && a[q]<=71)
                {a[q]=a[q]-4;}
            }
            return a;
        }
        void setJaheshK(int n1 , string rna, char ck1 , char ck2 ){
            N1 = n1 , u = rna , s = 0 , _ck1 = ck1 , _ck2 = ck2;

        }
        string jaheshKRNA(){
            for(int i=0 ; i<u.length() ; i++){
                if(u[i]==_ck1 && s<N1){
                    u[i]=_ck2;
                    s=s+1;
                }
                else{
                    u[i]=u[i];
                    s=s;
                }
            }
            return u;
        }
        void setJaheshkDNA(int n1, string dna1, char ck1, char ck2){
            N1 = n1, l1 = dna1 , c =0 , _ck1 = ck1 , _ck2 = ck2;
        }
        string jaheshKDNA1(){
            for(int i=0 ; i<l1.length() ; i++){
                if(l1[i]==_ck1 && c<N1 ){
                    l1[i]=_ck2;
                    c=c+1;
                }
                else{
                    l1[i]=l1[i];
                    c=c;
                }
            }
            return l1;
        }
        string jaheshKDNA2(){
            for(int q=0 ; q<l1.length(); q++){
                if(l1[q]>=65 && l1[q]<=65)
                {l1[q]=l1[q]+19;}
                 else if(l1[q]>=67 && l1[q]<=67)
                {l1[q]=l1[q]+4;}
                else if(l1[q]>=84 && l1[q]<=84)
                {l1[q]=l1[q]-19;}
                else if(l1[q]>=71 && l1[q]<=71)
                {l1[q]=l1[q]-4;}
            }
            return l1;
        }
        void setmakoosRNA(string rna){
            R = rna;
        }
        void setmakoosDNA( string dna1 , string dna2 ){
            m1 = dna1 , m2 = dna2;
        }
        string reverseDNA1(){
            for(int i=0 ; i<m1.length()/2 ; i++){
                swap(m1[i] , m1[m1.length()-i-1]);
            }
            return m1;
        }
        string reverseDNA2(){
            for(int i=0 ; i<m2.length()/2 ; i++){
                swap(m2[i] , m2[m2.length()-i-1]);
            }
            return m2;
        }
        string rverseRNA(){
            for(int i=0 ; i<R.length()/2 ; i++){
                swap(R[i] , R[R.length()-i-1]);
            }
            return R;
        }
};

int main() {
    genome g;
    string rna;
    cout << "RNA ra vared konid: ";
    cin >> rna;
    g.seta(rna);
    g.setRNA(rna);
    string dna1,dna2;
    cout << "reshte aval DNA: "<<endl;
    cin >> dna1;
    cout << "reshte dovom DNA: "<<endl;
    cin >> dna2;
    g.setDNA(dna1 , dna2);
    cout<<"DNA sakhte shode az ruye RNA dade shode: "<<endl<<g.getRNA()<<endl<<g.mokamelRNA();
    cout << endl << "be tartib tedad, harfi ke mikaid taqir bedid, harfi ke mikhaid jaygozin she ra vared konid: ";
    int n1;
    cin>>n1;
    char ck1,ck2;
    cin>>ck1 >> ck2;
    g.setJaheshK( n1 , rna , ck1 , ck2);
    cout <<"RNA:"<<endl<<g.jaheshKRNA()<<endl;
    g.setmakoosRNA(rna);
    g.setJaheshkDNA(n1, dna1, ck1, ck2);
    cout << "DNA: " << endl << g.jaheshKDNA1()<< endl<< g.jaheshKDNA2()<< endl;
    cout<<"makoos RNA:"<<endl<<g.rverseRNA()<<endl;
    g.setmakoosDNA(dna1, dna2);
    cout<<"makoos DNA:"<< endl << g.reverseDNA1()<< endl << g.reverseDNA2();
    return 0;
}