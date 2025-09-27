#include <stdio.h>
#include <string.h>

const char* determine_color(const char* s) {
    // Write your logic here to determine the color based on the string s.
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,strIntPart;
    int numVal = s[1]-'0';
    char strVal = s[0];
    switch(strVal){
	case 'a':
		strIntPart = 1;
		break;
	case 'b':
		strIntPart = 2;
		break;
	case 'c':
                strIntPart = 3;
                break;
	case 'd':
                strIntPart = 4;
                break;
	case 'e':
                strIntPart = 5;
                break;
	case 'f':
                strIntPart = 6;
                break;	
	case 'g':
                strIntPart = 7;
                break;
	case 'h':
                strIntPart = 8;
                break;
	default:
		strIntPart = 0;
    }
    if((numVal+strIntPart) % 2 == 0){
	return "Black";
    }
    printf("%d , %c",numVal,strVal);
    // Return "Black" or "White" based on the problem statement.
    return "White";
}

int main() {
    char s[256];
    scanf("%s", s);
    const char* result = determine_color(s);
    printf("%s\n", result);
    return 0;
}
