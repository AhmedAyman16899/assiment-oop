#include <iostream>
#include <fstream>
using namespace std;
int main (){
    ifstream theFile("ahmed.txt");
    string word ;
    int x ;
    while (theFile >> word){
            x=word.length();
        if ((word[x-4] == 'd') && (word[x-3] == 'o') &&  (word[x-2] == 'u') && (word[x-1] == 's')){
            cout << word << endl ;
        }
    }

}
