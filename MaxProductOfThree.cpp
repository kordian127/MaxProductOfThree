#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> a={-3,1,2,-2,5,6};
int maximum=a[0]*a[1]*a[2],multi;
for(int p=0;p<a.size()-2;p++){
    for(int q=p+1;q<a.size()-1;q++){
        for(int r=q+1;r<a.size();r++){
            cout<<"("<<p<<","<<q<<","<<r<<")"<<endl;
            multi=a[p]*a[q]*a[r];
        }
        if(multi>maximum)
        {
            maximum=multi;
        }
    }
}
cout<<"Maximum product of any triple is: "<<maximum;
return 0;
}
