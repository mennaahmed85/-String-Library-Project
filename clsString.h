#include <bits/stdc++.h>
#pragma once
using namespace std;
class clsString
{
   private :
       string _value;
   public :
    clsString ()
    {
        _value="";
    }
    clsString (string value)
    {
        _value=value;
    }
    string GetValue ()
    {
        return _value;
    }
    void SetValue (string value)
    {
        _value=value;
    }
    static int CountWord (string words)
    {
        int countt=0;
        words+=" ";
        for(int i=1;i<words.size();i++)
        {
            if((words[i]==' ')&&(words[i-1]!=' '))
                countt++;
        }
        return countt;
    }
    int CountWord ()
    {
        return CountWord(_value);
    }
    static int CountCapitalLetters (string s)
    {
        int countt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                countt++;
        }
        return countt;
    }
    int CountCapitalLetters ()
    {
        return CountCapitalLetters(_value);
    }
    static int CountSmallLetters (string s)
    {
        int countt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                countt++;
        }
        return countt;
    }
    int CountSmallLetters ()
    {
         return CountSmallLetters(_value);
    }
    static int CountLetters (string s)
    {
         int countt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                countt++;
        }
        return countt;
    }
    int CountLetters ()
    {
         return CountLetters(_value);
    }
    static int CountSpacificLetter (string s,char c , bool MatchCase = true)
    {
        int countt=0;
        for(int i=0;i<s.size();i++)
        {
            if(MatchCase) {
            if(s[i]==c)
                countt++;
            }
            else
            {
                if(tolower(s[i]==tolower(c)))
                    countt++;
            }
        }
        return countt;
    }
    int CountSpacificLetter (char c)
    {
         int countt=0;
        for(int i=0;i<_value.size();i++)
        {
            if(_value[i]==c)
                countt++;
        }
        return countt;
    }
    static int CountVowels (string s)
    {
        int countt=0;
        for(int i=0;i<s.size();i++)
        {
          // if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s [i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
          if(IsVowel(s[i]))
                countt++;
        }
        return countt;
    }
    int CountVowels ()
    {
        return CountVowels (_value);
    }
    static string InvertAllLettersCase (string s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=('a'-'A');
            else if (s[i]>='a'&&s[i]<='z')
                s[i]-=('a'-'A');
        }
        return s;
    }
    string InvertAllLettersCase ()
    {
        return InvertAllLettersCase(_value);
    }
     static char InvertLetterCase (char c)
    {
        if(c>='a'&&c<='z')
            return c-('a'-'A');
        else if (c>='A'&&c<='Z')
            return c+('a'-'A');
    }
    static bool IsVowel (char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        else
            return false;
    }
    static string GoinString (string * arr,int sz)
    {
        string result="";
        for(int i=0;i<sz;i++)
            result+=arr[i];
        return result;
    }
    static int length (string s)
    {
        return s.size();
    }
    int length ()
    {
        return length (_value);
    }
    static string LowerAllString (string s)
    {
        char c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                c=(char)((int)s[i]+(int)('a'-'A'));
                s[i]=c;
            }
        }
        return s;
    }
    void LowerAllString ()
    {
       _value = LowerAllString(_value);
    }
    static string UpperAllString (string s)
    {
        char c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                c=(char)((int)s[i]-(int)('a'-'A'));
                s[i]=c;
            }
        }
        return s;
    }
    void UpperAllString ()
    {
       _value = UpperAllString(_value);
    }
    static string LowerFirstLetterOfEachWord (string s)
    {
        if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
             s[0]=(int)s[0]+(int)('a'-'A');
        for(int i=0;i<s.size();i++)
        {
           if((s[i]==' ')&&(i+1<s.size())&&((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
           {
               if(s[i+1]>='A'&&s[i+1]<='Z')
                 s[i+1]=(int)s[i+1]+(int)('a'-'A');
           }
        }
        return s;
    }
    string LowerFirstLetterOfEachWord()
    {
         LowerFirstLetterOfEachWord(_value);
    }
    static string UpperFirstLetterOfEachWord (string s)
    {
        if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'))
             s[0]=(int)s[0]+(int)('a'-'A');
        for(int i=0;i<s.size();i++)
        {
           if((s[i]==' ')&&(i+1<s.size())&&((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
           {
               if(s[i+1]>='a'&&s[i+1]<='z')
                 s[i+1]=(int)s[i+1]-(int)('a'-'A');
           }
        }
        return s;
    }
    string UpperFirstLetterOfEachWord ()
    {
        UpperFirstLetterOfEachWord (_value);
    }
    static string ReverseWords (string s)
    {
        s=' '+s;
        string temp="",res="";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
                temp=s[i]+temp;
            else
            {
                res+=temp+' ';
                temp="";
            }
        }
        return res;
    }
    static string TrimLeft (string s1)
    {
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=' ')
                return s1.substr(i,s1.size()-1);
        }
    }
    void TrimLeft ()
    {
        _value= TrimLeft (_value);
    }
    static string TrimRight (string s1)
    {
        for(int i=s1.size()-1;i>=0;i--)
        {
            if(s1[i]!=' ')
                return s1.substr(0,i+1);
        }
    }
    void TrimRight ()
    {
        _value= TrimLeft (_value);
    }
    static string ReplaceWords (string s ,string word1,string word2)
    {
        s+=' ';
        string temp="",res="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(temp==word1)
                        res+=word2;
                else
                        res+=temp;
                temp="";
                if(i!=s.size()-1)
                       res+=' ';
            }
            else
                temp+=s[i];
        }
        return res;
    }
    void ReplaceWords (string ToReplace,string ReplaceTo)
    {
        _value = ReplaceWords (_value,ToReplace,ReplaceTo);
    }
    static string RemovePunctuations (string S1)
    {
        string s2="";
        for(int i=0;i<S1.size();i++)
        {
            if(S1[i]!=ispunct(S1[i]))
                s2+=S1[i];
        }
        return s2;
    }
    void RemovePunctuations()
    {
        _value= RemovePunctuations (_value);
    }
};
