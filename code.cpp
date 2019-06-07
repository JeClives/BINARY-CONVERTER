//Created by JeClives
//Enter the base you're converting from, the base you're converting to, then the integer to be converted.  All seperated.
#include <iostream>
#include <cmath>
using namespace std;
int baseConverter(int b1, int b2, int n){int n1=n; int a=0; int a1=0; int b=0; int c=1; int d=c; int arr[c]={0};
if ((b1>10&&b1!=16)||b1<2||(b2>10&&b2!=16)||b2<2){cout<<"Can only work within bases 1 to 10 (inclusive) and with base 16";}


else if (b1==10&&b2!=10){
cout<<"In Base "<<b1<<": "<<n<<endl<<"In Base "<<b2<<": ";
    do{a=n%b2; n=n/b2; arr[b]=a; b=b+1; d=c; c=c+1;}
    while (n!=0);
    do{cout<<arr[d-1]; d--;}
    while(d>0);
}


else if (b1!=10&&b2==10){
cout<<"In Base "<<b1<<": "<<n<<endl<<"In Base "<<b2<<": ";
  if(b1!=16){
    do{a1=n1%b2; n1=n1/b2;}
    while(n1!=0&&a<b1);
if(a1>=b1){cout<<"Number to be converted is not in base "<<b1;}
else{
    do{a=a+((n%b2)*pow(b1,b)); n=n/b2; b++;}
    while(n!=0);
    cout<<a;}
}
}



else if (b1!=10&&b2!=10){
cout<<"In Base "<<b1<<": "<<n<<endl<<"In Base "<<b2<<": ";
    do{a1=n1%10; n1=n1/10;}
    while(n1!=0&&a<b1);
if(a1>=b1){cout<<"Number to be converted is not in base "<<b1;}
else{
    do{a=a+((n%10)*pow(b1,b)); n=n/10; b++;}
    while(n!=0);
n=a; a=0; b1=10; b=0;
do{a=n%b2; n=n/b2; arr[b]=a; b=b+1; d=c; c=c+1;}
    while (n!=0);
    do{cout<<arr[d-1]; d--;}
    while(d>0);
}
}cout<<endl<<endl<<endl;
cout << "Like and share if you like the code";
}
int main() {
int B1=8; int B2=2; int N=77;
cin>>B1; cin>>B2; cin>>N;
baseConverter (B1, B2, N);
    return 0;
}
