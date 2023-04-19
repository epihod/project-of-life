#include <iostream>
#include <string>

using namespace std;

class genome {
    private:
        string RNA , DNA1, DNA2;
        string a;
        int N1, N2, s, c, f, h, p, m;
        string u,R;
        string m1,m2;
        string l1,l2;
        char _ck1 , _ck2, _ck3, _ck4;
        string s1, S2, _s1, _S2, _x1, _x2, _x3 , _x4, JBR, JBD;
    public:
        void setmokamelRNA (string rna){
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
                if(a[q]>=65 && a[q]<=65){a[q]=a[q]+19;}
                else if(a[q]>=67 && a[q]<=67){a[q]=a[q]+4;}
                else if(a[q]>=84 && a[q]<=84){a[q]=a[q]-19;}
                else if(a[q]>=71 && a[q]<=71){a[q]=a[q]-4;}
            }
            return a;
        }
        void setJaheshK(int n1 , string rna, char ck1 , char ck2 ){
            N1 = n1 , u = rna , s = 0 , _ck1 = ck1 , _ck2 = ck2;
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
            cout<<u;
        }
        void setJaheshkDNA(int n2, string dna1, char ck3, char ck4){
            N2 = n2, l1 = dna1 , c =0 , _ck3 = ck3 , _ck4 = ck4;
            for(int i=0 ; i<l1.length() ; i++){
                if(l1[i]==_ck3 && c<N2 ){
                    l1[i]=_ck4;
                    c=c+1;
                }
                else{
                    l1[i]=l1[i];
                    c=c;
                }
            }
            cout<<l1;
        }
        string jaheshKDNA2(){
            for(int q=0 ; q<l1.length(); q++){
                if(l1[q]>=65 && l1[q]<=65){l1[q]=l1[q]+19;}
                else if(l1[q]>=67 && l1[q]<=67){l1[q]=l1[q]+4;}
                else if(l1[q]>=84 && l1[q]<=84){l1[q]=l1[q]-19;}
                else if(l1[q]>=71 && l1[q]<=71){l1[q]=l1[q]-4;}
            }
            return l1;
        }
        void jaheshbozorgRNA(string rna ,string x1, string x2){
            JBR = rna , _x1 = x1 , _x2 = x2 , p=0;
            for(int i=0 ; i<JBR.length() ; i++){
                if(JBR.substr(i , _x1.length())==_x1){
                    p=i;
                }
            }
                for(int i=0 ; i<p ; i++){
                    cout<<JBR[i];
                }
                cout<<_x2;
                for(int i=p+_x1.length() ; i<JBR.length() ; i++){
                    cout<<JBR[i];
                }
        }
        void jaheshbozorgDNA(string dna1 , string x3 , string x4){
            JBD = dna1 , _x3 = x3 , _x4 = x4, m=0;
            for(int i=0 ; i<JBD.length() ; i++){
                if(JBD.substr(i , _x3.length())==_x3){
                    m=i;
                }
            }
            for(int i=0 ; i<m ; i++){
                cout<<JBD[i];
            }
            cout<<_x4;
            for(int i=m+_x3.length() ; i<JBD.length() ; i++){
                cout<<JBD[i];
            }
            cout<<endl;
            for(int q=0 ; q<m ; q++){
                if(JBD[q]>=65 && JBD[q]<=65){JBD[q]=JBD[q]+19;}
                else if(JBD[q]>=67 && JBD[q]<=67){JBD[q]=JBD[q]+4;}
                else if(JBD[q]>=84 && JBD[q]<=84){JBD[q]=JBD[q]-19;}
                else if(JBD[q]>=71 && JBD[q]<=71){JBD[q]=JBD[q]-4;}
                cout<<JBD[q];
            }
            for(int q=0 ; q<_x4.length(); q++){
                if(_x4[q]>=65 && _x4[q]<=65){_x4[q]=_x4[q]+19;}
                else if(_x4[q]>=67 && _x4[q]<=67){_x4[q]=_x4[q]+4;}
                else if(_x4[q]>=84 && _x4[q]<=84){_x4[q]=_x4[q]-19;}
                else if(_x4[q]>=71 && _x4[q]<=71){_x4[q]=_x4[q]-4;}
                cout<<_x4[q];
            }
            for(int q=m+_x3.length() ; q<JBD.length() ; q++){
                if(JBD[q]>=65 && JBD[q]<=65){JBD[q]=JBD[q]+19;}
                else if(JBD[q]>=67 && JBD[q]<=67){JBD[q]=JBD[q]+4;}
                else if(JBD[q]>=84 && JBD[q]<=84){JBD[q]=JBD[q]-19;}
                else if(JBD[q]>=71 && JBD[q]<=71){JBD[q]=JBD[q]-4;}
                cout<<JBD[q];
            }
        }
        void setreverserna(string rna, string s2){
            s1 = rna , S2 = s2 , f=0;
            for(int i=0 ; i<s1.length() ; i++){
                if(s1.substr(i , S2.length())==S2){
                    for(int j=0 ; j<S2.length()/2 ; j++){
                        swap(S2[j] , S2[S2.length()-j-1]);
                    }
                f=i;
                }
            }
            for(int i=0 ; i<f ; i++){
                cout<<s1[i];
            }
            cout<<S2;
            for(int i=f+S2.length() ; i<s1.length() ; i++){
                cout<<s1[i];
            }
        }
        void setreversedna(string dna1, string _s2 ){
            _s1 = dna1 , _S2 = _s2 , h=0 ;
            for(int i=0 ; i<_s1.length() ; i++){
                if(_s1.substr(i , _S2.length())==_S2){
                    for(int j=0 ; j<_S2.length()/2 ; j++){
                        swap(_S2[j] , _S2[_S2.length()-j-1]);
                    }
                h=i;
                }
                
            }
            for(int i=0 ; i<h ; i++){
                cout<<_s1[i];
            }
            cout<<_S2;
            for(int i=h+_S2.length() ; i<_s1.length() ; i++){
                cout<<_s1[i];
            }
            cout<<endl;
            for(int q=0 ; q<h; q++){
                if(_s1[q]>=65 && _s1[q]<=65){_s1[q]=_s1[q]+19;}
                else if(_s1[q]>=67 && _s1[q]<=67){_s1[q]=_s1[q]+4;}
                else if(_s1[q]>=84 && _s1[q]<=84){_s1[q]=_s1[q]-19;}
                else if(_s1[q]>=71 && _s1[q]<=71){_s1[q]=_s1[q]-4;}
                cout<<_s1[q];
            }
            for(int q=0 ; q<_S2.length(); q++){
                if(_S2[q]>=65 && _S2[q]<=65){_S2[q]=_S2[q]+19;}
                else if(_S2[q]>=67 && _S2[q]<=67){_S2[q]=_S2[q]+4;}
                else if(_S2[q]>=84 && _S2[q]<=84){_S2[q]=_S2[q]-19;}
                else if(_S2[q]>=71 && _S2[q]<=71){_S2[q]=_S2[q]-4;}
                cout<<_S2[q];
            }
            for(int q=h+_S2.length() ; q<_s1.length() ; q++){
                if(_s1[q]>=65 && _s1[q]<=65){_s1[q]=_s1[q]+19;}
                else if(_s1[q]>=67 && _s1[q]<=67){_s1[q]=_s1[q]+4;}
                else if(_s1[q]>=84 && _s1[q]<=84){_s1[q]=_s1[q]-19;}
                else if(_s1[q]>=71 && _s1[q]<=71){_s1[q]=_s1[q]-4;}
                cout<<_s1[q];
            }
        }
};
int main() {
    genome g;
    string rna;
    cout << "RNA ra vared konid: ";
    cin >> rna;
    g.setmokamelRNA(rna);
    g.setRNA(rna);
    string dna1,dna2;
    cout << "reshte aval DNA: "<<endl;
    cin >> dna1;
    cout << "reshte dovom DNA: "<<endl;
    cin >> dna2;
    g.setDNA(dna1 , dna2);
    cout<<"DNA sakhte shode az ruye RNA dade shode: "<<endl<<g.getRNA()<<endl<<g.mokamelRNA();
    cout << endl <<"Baraye jahesh koochak 'RNA' be tartib n, s1 va s2 ra vared konid: ";
    int n1;
    cin>>n1;
    char ck1,ck2;
    cin>>ck1 >> ck2;
    g.setJaheshK( n1 , rna , ck1 , ck2);
    cout <<endl;
    int n2;
    char ck3,ck4;
    cout<<"Baraye jahesh koochak 'DNA' be tartib, n, s1 va s2 ra vared konid: ";
    cin >> n2 >> ck3 >> ck4;
    g.setJaheshkDNA(n2, dna1, ck3, ck4);
    cout<< endl<< g.jaheshKDNA2()<< endl;
    string x1,x2;
    cout<<"baraaye jahesh bozorg 'RNA' s1 va s2 ra vared konid: ";
    cin >>x1 >> x2;
    g.jaheshbozorgRNA(rna, x1, x2);
    string x3 , x4;
    cout << endl << "baraye jahesh bozorg DNA s1 va s2 ra vared konid: ";
    cin >> x3 >> x4 ;
    g.jaheshbozorgDNA(dna1, x3, x4);
    string s2;
    cout << endl <<"Baraye jahesh makoos 'RNA' s1 ra vared konid: ";
    cin>>s2;
    g.setreverserna(rna,s2);
    string _s2;
    cout<<endl<<"Baraye jahesh makoos 'DNA' s1 ra ared konid: ";
    cin >> _s2;
    g.setreversedna(dna1, _s2);
    return 0;
}