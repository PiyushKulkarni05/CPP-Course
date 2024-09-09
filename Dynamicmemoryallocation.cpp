#include<iostream>
using namespace std;
int main(){
    int row=3;
    int col=3;
    double **pvalue = new double *[row];
    for(int i = 0 ; i<row;i++){
        pvalue[i]=new double[col];

    }
    cout<<endl<<"Now initializing location  ..."<<endl;
    for(int j=0;j<row;j++){
        for(int k = 0;k<col;k++){
            cout<<"Enter row="<<j<<" and for Column+"<<k<<"->";
            cin>>pvalue[j][k];

        }
    }
    cout<<endl<<"Now displaying output "<<endl;
    for(int j = 0;j<row;j++){
        
        for(int k = 0;k<col;k++){
            cout<<pvalue[j][k]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}