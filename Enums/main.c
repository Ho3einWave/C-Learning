/*
Author : Hosein Baseri
Description : Enum Practice
*/
#include <stdio.h>

int main() {
    enum Company {GOOGLE = 0,FACEBOOK,XEROX = 2,YAHOO,EBAY = 4,MICROSOFT};


    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company xerox = XEROX;
    enum Company yahoo = YAHOO;
    enum Company ebay = EBAY;
    enum Company micro = MICROSOFT;

    printf("| GOOGLE    ENUM VALUE : %d |\n",google);
    printf("| FACEBOOK  ENUM VALUE : %d |\n",facebook);
    printf("| XEROX     ENUM VALUE : %d |\n",xerox);
    printf("| YAHOO     ENUM VALUE : %d |\n",yahoo);
    printf("| EBAY      ENUM VALUE : %d |\n",ebay);
    printf("| MICROSOFT ENUM VALUE : %d |\n",micro);


    return 0;
}
