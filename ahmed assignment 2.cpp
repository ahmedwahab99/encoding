#include <iostream>

using namespace std;

int main()
{
    int x = 0, starting;
    char newLetter ;
    string list1, result ="";

    cout<<"If you want to code your message press 1.\nIf you want to uncode a message press 2. \n";
    cin>> starting;

    if (starting ==1)
    {
        cout<<"enter your message\n";
        cin.ignore(100,'\n');
        getline(cin,list1);

        for (int i = 0 ; i < list1.length() ; ++i )
        {

            if ((int)list1[i]>=97 && (int)list1[i]<=122)
            {
                x = (int)list1[i] - 97 ;


                newLetter = char  ( 122 - x ) ;

                result += newLetter ;


            }

            else if ((int)list1[i]>=65 && (int)list1[i]<=90)
            {
                x = (int)list1[i] - 65 ;


                newLetter = char  ( 90 - x ) ;

                result += newLetter ;


            }

            else
            {
                result+=list1[i];
            }
        }


        cout << "your encrypted message: "<< result << endl ;

    }


        if (starting ==2)
    {
        cout<<"enter your message\n";
        cin.ignore(100,'\n');
        getline(cin,list1);

        for (int i = 0 ; i < list1.length() ; ++i )
        {

            if ((int)list1[i]>=97 && (int)list1[i]<=122)
            {
                x = (int)list1[i] - 97 ;


                newLetter = char  ( 122 - x ) ;

                result += newLetter ;


            }

            else if ((int)list1[i]>=65 && (int)list1[i]<=90)
            {
                x = (int)list1[i] - 65 ;


                newLetter = char  ( 90 - x ) ;

                result += newLetter ;


            }

            else
            {
                result+=list1[i];
            }
        }


        cout << "your encrypted message: "<< result << endl ;

    }









}
