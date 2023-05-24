#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

string timeInWords(int h, int m) {
    string a, b, b1, b2;
    
    // b1 b2 b a
    

    if (m == 1){
        b2 = "minute";
    }else{
        b2 = "minutes";
    }
    if (m == 0){
        b = "o' clock" ;
    }else if (m >= 1 && m <= 30){
        b = "past";
        // 
        
        // 
        if (m == 1){
            b1 = "one";
        }else if (m == 2){
            b1 = "two";
        }else if (m == 3){
            b1 = "three";
        }else if (m == 4){
            b1 = "four";
        }else if (m == 5){
            b1 = "five";
        }else if (m == 6){
            b1 = "six";
        }else if (m == 7){
            b1 = "seven";
        }else if (m == 8){
            b1 = "eight";
        }else if (m == 9){
            b1 = "nine";
        }else if (m == 10){
            b1 = "ten";
        }else if (m == 11){
            b1 = "eleven";
        }else if (m == 12){
            b1 = "twelve";
        }else if (m == 13){
            b1 = "thirteen";
        }else if (m == 14){
            b1 = "fourteen";
        }else if (m == 15){
            b1 = "quarter";
        }else if (m == 16){
            b1 = "sixteen";
        }else if (m == 17){
            b1 = "seventeen";
        }else if (m == 18){
            b1 = "eighteen";
        }else if (m == 19){
            b1 = "nineteen";
        }else if (m == 20){
            b1 = "twenty";
        }else if (m == 21){
            b1 = "twenty one";
        }else if (m == 22){
            b1 = "twenty two";
        }else if (m == 23){
            b1 = "twenty three";
        }else if (m == 24){
            b1 = "twenty four";
        }else if (m == 25){
            b1 = "twenty five";
        }else if (m == 26){
            b1 = "twenty six";
        }else if (m == 27){
            b1 = "twenty seven";
        }else if (m == 28){
            b1 = "twenty eight";
        }else if (m == 29){
            b1 = "twenty nine";
        }else if (m == 30){
            b1 = "half";
        }
        
        
    }else if (m > 30 && m < 60){
        b = "to";
        h = h+1;
        
        if (m == 59){
            b1 = "one";
        }else if (m == 58){
            b1 = "two";
        }else if (m == 57){
            b1 = "three";
        }else if (m == 56){
            b1 = "four";
        }else if (m == 55){
            b1 = "five";
        }else if (m == 54){
            b1 = "six";
        }else if (m == 53){
            b1 = "seven";
        }else if (m == 52){
            b1 = "eight";
        }else if (m == 51){
            b1 = "nine";
        }else if (m == 50){
            b1 = "ten";
        }else if (m == 49){
            b1 = "eleven";
        }else if (m == 48){
            b1 = "twelve";
        }else if (m == 47){
            b1 = "thirteen";
        }else if (m == 46){
            b1 = "fourteen";
        }else if (m == 45){
            b1 = "quarter";
        }else if (m == 44){
            b1 = "sixteen";
        }else if (m == 43){
            b1 = "seventeen";
        }else if (m == 42){
            b1 = "eighteen";
        }else if (m == 41){
            b1 = "nineteen";
        }else if (m == 40){
            b1 = "twenty";
        }else if (m == 39){
            b1 = "twenty one";
        }else if (m == 38){
            b1 = "twenty two";
        }else if (m == 37){
            b1 = "twenty three";
        }else if (m == 36){
            b1 = "twenty four";
        }else if (m == 35){
            b1 = "twenty five";
        }else if (m == 34){
            b1 = "twenty six";
        }else if (m == 33){
            b1 = "twenty seven";
        }else if (m == 32){
            b1 = "twenty eight";
        }else if (m == 31){
            b1 = "twenty nine";
        }
    }
    if (h == 1){
        a = "one";
    }else if( h == 2){
        a = "two";
    }else if( h == 3){
        a = "three";
    }else if( h == 4){
        a = "four";
    }else if( h == 5){
        a = "five";
    }else if( h == 6){
        a = "six";
    }else if( h == 7){
        a = "seven";
    }else if( h == 8){
        a = "eight";
    }else if( h == 9){
        a = "nine";
    }else if( h == 10){
        a = "ten";
    }else if( h == 11){
        a = "eleven";
    }else if( h == 12){
        a = "twelve";
    }
    
    if (m == 0){
        return a + " " + b ;
    }else if (m == 15 || m == 30 || m == 45){
        return b1 + " " + b + " " + a;
    }else{
        return b1 + " " + b2 + " " + b + " " + a;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    int h = stoi(ltrim(rtrim(h_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
