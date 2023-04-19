#include <iostream>
#include <string>

using namespace std;

class genome {
    private:
        string RNA;
        string DNA1, DNA2;
        string a;
        int N1, s;
        string u,R;

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
        string getDNA1(){
            return DNA1;
        }
        string getDNA2(){
            return DNA2;
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

        void setmakoosRNA(string rna){
            R = rna;
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
    cout << "reshte mokamel DNA: "<<endl;
    cin >> dna2;

    cout << "RNA: " << endl << g.getRNA() << endl;
    g.setDNA(dna1 , dna2);
    cout << "DNA: " << endl << g.getDNA1()<< endl << g.getDNA2() << endl ;
    cout<<"DNA sakhte shode az ruye RNA dade shode: "<<endl<<g.getRNA()<<endl<<g.mokamelRNA();
    cout << endl << "be tartib tedad, harfi ke mikaid taqir bedid, harfi ke mikhaid jaygozin she ra vared konid: ";
    int n1;
    cin>>n1;
    char ck1,ck2;
    cin>>ck1 >> ck2;
    g.setJaheshK( n1 , rna , ck1 , ck2);
    cout <<"RNA:"<<endl<<g.jaheshKRNA()<<endl;
    g.setmakoosRNA(rna);
    cout<<"makoos RNA:"<<endl<<g.rverseRNA();


    return 0;
}