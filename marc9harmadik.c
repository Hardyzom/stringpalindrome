#include <stdio.h>
#include "prog1.h"
#include <string.h>

int is_palindrome(string szoveg){
    int i = 0;
    int j = strlen(szoveg) - 1;
    while(i<j){
        if(szoveg[i] != szoveg[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;

}

int main(){
string szoveg="ANNA";
printf("A megadott szo palindrom: %s\n", is_palindrome(szoveg)? "igen" : "nem");

return 0;

}