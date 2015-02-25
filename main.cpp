#include <iostream>

using namespace std;

int XORCipher(const string source, const string key, string * destanation);

int main(int argc, char* argv[])
{
    string plaint,key;
    if (argc==2)
        key = argv[1];
    cin >>plaint;
    string ciphert (plaint.length(),0);
    if (XORCipher(plaint, key, & ciphert)==0){
        cout <<"Message is successfully encrypted "<< endl;
        cout <<"plaint: "<<plaint << endl;
        cout <<"ciphert: "<<ciphert << endl;
    }
    else
        cout <<"Error: key is not defined" << endl;

    return 0;
}
int XORCipher(const string source, const string key, string * destanation){
    const int length_k=key.length();
    const int length_s=source.length();
    int j=0;
    if(length_k==0)
        return -1;
    for(int i=0;i<length_s;i++)
    {
        if(j>length_k)
            j=0;
        else
            j++;
        (*destanation)[i]=source[i]^key[j];
    }
    return 0;
}
