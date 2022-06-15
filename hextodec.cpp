#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
void printbin(string bin)
{
   cout<<"Bin: ";
        for(int i=0;i<32;i++)
        {
            cout<<bin[i];
            if(i==10)
                cout<<".";
        }
        cout<<endl;
}
void add1(string bin, int index)
{

    if(bin[index]=='0')
    {
        bin[index]='b';
        cout<<"0->1,"<<index<<endl;
        return;
    }
    else if(bin[index]=='1')
    {
        bin[index]='a';
        cout<<"1->0,"<<index<<endl;
        index--;
        add1(bin,index);
    }
}
int main()
{
    string hex="";
    string bin="";
    double dec;
    int i;
    int mult;
    int uslov;
    while(1)
    {
        dec=0;
        i=0;
        uslov=0;
        hex.clear();
        bin.clear();
        //while(hex.length()!=9)
        //{
            cout<<"Unesi hex:"<<endl;
            for(int k=0;k<8;k++)
            {
                cin>>hex[k];
            }


        //}

        cout<<"Hex:";
        for(int k=0;k<8;k++)
        {
            cout<<hex[k];
        }
        cout<<endl;
        while(i<8)
        {

            switch(hex[i])
            {
            case '0':
                bin+="0000";
                break;
            case '1':
                bin+="0001";
                break;
            case '2':
                bin+="0010";
                break;
            case '3':
                bin+="0011";
                break;
            case '4':
                bin+="0100";
                break;
            case '5':
                bin+="0101";
                break;
            case '6':
                bin+="0110";
                break;
            case '7':
                bin+="0111";
                break;
            case '8':
                bin+="1000";
                break;
            case '9':
                bin+="1001";
                break;
            case 'a':
                bin+="1010";
                break;
            case 'b':
                bin+="1011";
                break;
            case 'c':
                bin+="1100";
                break;
            case 'd':
                bin+="1101";
                break;
            case 'e':
                bin+="1110";
                break;
            case 'f':
                bin+="1111";
            default:
                break;
            }
            i++;
        }
      printbin(bin);
    if(bin[0]=='1')
    {
        cout<<"negativ"<<endl;
        for(i=0;i<32;i++)
        {
            if(bin[i]=='0')
            {
                bin[i]='1';
            }
            else if(bin[i]=='1')
            {
                bin[i]='0';
            }
        }
        int index=31;
        //printbin(bin);
        //add1(bin,index);
		 while(1){
            if(bin[index]=='0')
            {
            bin[index]='1';
            //cout<<"0->1,"<<index<<endl;
            break;
            }
            else if(bin[index]=='1')
            {
            bin[index]='0';
            //cout<<"1->0,"<<index<<endl;
            index--;
            //add1(bin,index);
            }
        }
        printbin(bin);
        //dec+=pow(2.0,-21);
        uslov=1;

    }
    //cout<<"Ovde"<<endl;
     for(int j=31;j>=0;j--)
    {
            if(bin[31-j]=='0')
            {
                mult=0;

            }
            else if(bin[31-j]=='1')
            {
                mult=1;

            }
            dec+=mult*pow(2.0,j-21);
    }

        if(uslov==1)
            dec=dec*(-1.0);
        cout<<"Dec: "<<setprecision(17)<<dec<<endl;
    }

    return 0;
}
