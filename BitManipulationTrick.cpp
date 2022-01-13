#include <iostream>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;--i)
    cout<<((num>>i)&1);
    cout<<"\n";
}

int main() {
	// odd even check
	for(int i=0;i<8;++i)
	 if(i&1)
	 cout<<"odd\n";
	 else
	 cout<<"even\n";
	 
	int n=5;
	//divide by 2
	cout<<(n>>1)<<endl;
	//multiple by 2
	cout<<(n<<1)<<endl;

    //uppercase to lowercase 
    cout<<char('C' | ' ')<<endl;
    //lowercase to uppercase
    cout<<char('c' & '_')<<endl;
    
    //clear lsb
    int i=4,a=59,b;
    b = (a&(~((1<<(i+1))-1)));
    printBinary(b);
    //clear msb
    i=3;
    b= (a&((1<<(i+1))-1));
    printBinary(b);

    //power of 2 check
    n=16;
    if(n&(n-1)) cout<<"not power of 2";
    else cout<<"power of 2";
	return 0;
}
