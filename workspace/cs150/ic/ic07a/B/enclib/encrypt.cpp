// implement your code here
#include <string>
using std::string;
string STUDENT = "nnojiri";  // Add your Canvas login name

#include <iostream>
#include <cctype>
using namespace std;
namespace enc {
    /**
     * Implements the Caesar cipher.
     * @param in the stream containing the plaintext.
     * @param out the stream containing the ciphertext.
     * @param key the key used to shift the characters (rightward).
     */
    void cipher(std::istream& in, std::ostream& out, unsigned key){

        char ch;
        while(in.get(ch)){
            if(isupper(ch)){
                int pos = ch - 'A';
                pos= (pos+key)% 26;
                ch ='A'+ pos;
        }
            else if(islower(ch)){
                 int pos=ch -'a';
                 pos=  (pos + key)% 26;
                 ch ='a'+ pos;
            }
            out.put(ch);
        }
    }

    /**
     * Implements the Caesar cipher.
     * @param in the stream containing the ciphertext.
     * @param out the stream containing the plaintext.
     * @param key the key used to shift the characters (leftward).
     */
    void plaintext(std::istream& in, std::ostream& out, unsigned key){
         char ch;

        while(in.get(ch)){
            if(isupper(ch)){
                int pos = ch - 'A';
                pos= (26+pos-key)% 26;
                ch ='A'+ pos;
        }
            else if(islower(ch)){
                 int pos=ch -'a';
                 pos=  (26 + pos-key)% 26;
                 ch ='a'+ pos;
            }
            out.put(ch);
        }
    }
}