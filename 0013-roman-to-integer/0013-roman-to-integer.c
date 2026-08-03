#include <string.h>
int romanToInt(char* s) {
    int l = strlen(s);
    int x=0;
    for(int i=0; i<l;i++){
            if(s[i]== 'C' && s[i+1]== 'M'){
                x+= 900;
                i++;
                continue;
            }
            if(s[i]== 'M'){
                x+= 1000;
                continue;
            }
            if(s[i]== 'C' && s[i+1]== 'D'){
                x+= 400;
                i++;
                continue;
            }
            if(s[i]== 'D'){
                x+= 500;
                continue;
            }
            if(s[i]== 'X' && s[i+1]== 'C'){
                x+= 90;
                i++;
                continue;
            }
            if(s[i]== 'C'){
                x+= 100;
                continue;
            }
            if(s[i]== 'X' && s[i+1]== 'L'){
                x+= 40;
                i++;
                continue;
            }
            if(s[i]== 'L'){
                x+= 50;
                continue;
            }
            if(s[i]== 'X'){
                x+= 10;
                continue;
            }
            if(s[i]== 'I'&& s[i+1]== 'X'){
                x+= 9;
                i++;
                continue;
            }
            if(s[i]== 'V'){
                x+= 5;
                continue;
            }
            if(s[i]== 'I' && s[i+1]== 'V'){
                x+= 4;
                i++;
                continue;
            }
            if(s[i]== 'I'){
                x+= 1;
            }
    }
    return x;
}