// Cynthia Simon
// csimon2@leomail.tamuc.edu
// Assignment #1
// Word Counter Program
#include "Header.h"

class WordCounter1
{
    public :
    WordCounter1()
    {
        siz=0;
    }
    
    void addWord(string wo)    //adds word entered by user into vector
    {
        Words.push_back(wo);
        siz=Words.size();
    }
    
    int size()         //calculates and returns the size of the word
    {
        return siz;
    }
    
    string lastWord()          //calculates and returns the last word of the vector
    {
        if(siz==0)
            return " ";
        return Words[siz-1];
    }
    
    int totalCharacters()      //calculates and returns the total number of characters
    {
        int total_char=0;
        for(int i=0;i<siz;i++)
        {
            total_char+=Words[i].length();
        }
        return total_char;
    }
    
    int averageCharacters()    //calculates and returns the average number of characters
    {
        int avg_char=0;
        if(siz>0)
            avg_char=(totalCharacters()/siz);
        return avg_char;
    }
    
    string smallestWord()    // calculates and returns the smalles word in the vector
    {
        int sma,len;
        if(siz==0)
            return " Word list is empty";
        else
        {
            for(int i=0;i<siz;i++)
            {
                len=Words[i].length();
                if(i==0)
                    sma=i;
                else
                {
                    if(Words[sma].length()>len)
                        sma=i;
                }
            }
            return Words[sma];
        }
    }
    
    string largestWord()      //returns largest word in the vector
    {
        int lar,len;
        if(siz==0)
            return " Word list is empty";
        else
        {
            for(int i=0;i<siz;i++)
            {
                len=Words[i].length();
                if(i==0)
                    lar=i;
                else
                {
                    if(Words[lar].length()<len)
                        lar=i;
                }
            }
            return Words[lar];
        }
    }
};

int main()
{
    int ch=1;
    WordCounter1 wc;
    string str;
    
    cout << "******************WordCounter1********************" << endl;
    
    while(ch!=8)   //while the character entered is less than 8 the following will occur
    {
        cout << "**********Menu**********" << endl;
        cout << "1. Add Word" << endl;
        cout << "2. Total number of words" << endl;
        cout << "3. Last Word" << endl;
        cout << "4. Total number of characters" << endl;
        cout << "5. Average number of characters" << endl;
        cout << "6. Smallest Word" << endl;
        cout << "7. Largest Word" << endl;
        cout << "8. Quit" << endl;
        cout << "************************" << endl;
        cout << "Enter your choice:" << endl;
        cin >> ch;
        switch(ch)    //depending on which number is entered by the user the respective operation will occur and return answer
        {   case 1 :
                cout << "Enter a word to add : " << endl;
                cin >> str;
                wc.addWord(str);
                break;
            case 2 :
                cout << "Total number of words : " << wc.size() << endl;
                break;
            case 3 :
                cout << "Last Word : " << wc.lastWord() << endl;
                break;
            case 4 :
                cout << "Total number of characters : " << wc.totalCharacters() << endl;
                break;
            case 5 :
                cout << "Average number of characters : " << wc.averageCharacters() << endl;
                break;
            case 6 :
                cout << "Smallest Word : " << wc.smallestWord() << endl;
                break;
            case 7 :
                cout << "Largest Word : " << wc.largestWord() << endl;
                break;
        }
    }
    return 0;
}

