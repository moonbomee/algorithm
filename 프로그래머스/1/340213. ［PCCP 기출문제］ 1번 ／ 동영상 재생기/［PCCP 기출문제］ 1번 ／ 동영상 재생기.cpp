#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    for (string s:commands){
        if(op_start<=pos&&pos<op_end) pos=op_end;
       
        if(s=="next"){
            if(pos[3]>='5'){
                if(pos[1]>='9'){
                    pos[0]+=1;
                    pos[1]=pos[3]='0';
                }
                else {
                    pos[1]+=1;
                    pos[3]='0';
                }
            }
            else pos[3]=pos[3]+1;
        }
        else{
            if(pos[3]=='0') {
                if(pos[1]=='0'){
                   if(pos[0]=='0') pos="00:00";
                    else{
                       pos[0]-=1;
                       pos[1]='9';
                       pos[3]='5';
                    }
                }
                else {
                    pos[1] -=1;
                    pos[3] ='5';
                }

                
            }
            else pos[3]=pos[3]-1;
           
        }
        
         if(pos>video_len) pos=video_len;
    }
    if(pos>video_len) pos=video_len;
    if(op_start<=pos&&pos<=op_end) pos=op_end;
    
    return pos;
}