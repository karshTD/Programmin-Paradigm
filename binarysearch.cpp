#include<iostream>
using namespace std;

int decimaltobinary(int decimal){
    int binary=0,rem=0,base=1;
    while(decimal>0){
        rem=decimal%2;
        binary=binary+rem*base;
        decimal=decimal/2;
        base=base*10;
    }
    return binary;
}
int decimaltooctal(int decimal){
    int octal=0,rem=0,base=1;
    while(decimal>0){
        rem=decimal%8;
        octal=octal+rem*base;
        decimal=decimal/8;
        base=base*10;
    }
    return octal;
}
int decimaltohexadecimal(int decimal){
    int hexNum = 0, base = 1, rem;
    char hex[100];
    int i = 0;
    int temp = decimal;
    while (temp > 0) {
        rem = temp % 16;
        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';
        temp /= 16;
        i++;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
    while (decimal > 0) {
        rem = decimal % 16;
        hexNum = hexNum + rem * base;
        decimal /= 16;
        base *= 100;
    }
    return hexNum;
}

int binarytodecimal(long long binary){
    int decimal=0,rem=0,base=1;
    while (binary > 0){
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    return decimal;
}
int octaltodecimal(int octal){
    int decimal=0,rem=0,base=1;
    while (octal > 0){
        rem=octal%10;
        decimal=decimal+rem*base;
        octal=octal/8;
        base=base*8;
    }
    return decimal;
}
int hexadecimaltodecimal(char hex[]) {
    int decimal = 0, base = 1;
    int i = 0;
    while (hex[i] != '\0') {
        i++;
    }
    i--;
    for (; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') { 
            decimal += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }
    return decimal;
}

int main(){
    int choice,cont,decimal,octal,answer;
    char hexadecimal[10];
    long long binary;
    do{
        cout << "****MENU****" << endl;
        cout << "1. Decimal to Binary" << endl;
        cout << "2. Decimal to Octal" << endl;
        cout << "3. Decimal to Hexadecimal" << endl;
        cout << "4. Binary to Decimal" << endl;
        cout << "5. Octal to Decimal" << endl;
        cout << "6. Hexadecimal to Decimal" << endl;
        cout << "Enter the choice ";
        cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Enter the number ";
            cin >> decimal;
            answer = decimaltobinary(decimal);
            cout << answer << endl;
            break;
        case 2:
            cout << "Enter the number ";
            cin >> decimal;
            answer = decimaltooctal(decimal);
            cout << answer << endl;
            break;
        case 3:
            cout << "Enter the number ";
            cin >> decimal;
            answer = decimaltohexadecimal(decimal);
            cout << answer << endl;
            break;
        case 4:
            cout << "Enter the number ";
            cin >> binary;
            answer = binarytodecimal(binary);
            cout << answer << endl;
            break;
        case 5:
            cout << "Enter the number ";
            cin >> octal;
            answer = octaltodecimal(octal);
            cout << answer << endl;
            break;
        case 6:
            cout << "Enter the number ";
            cin >> hexadecimal;
            answer = hexadecimaltodecimal(hexadecimal);
            cout << answer << endl;
            break;
        default:
            cout << "invalid option" << endl;
            break;
    }

    cout << "Do u want to continue(yes-1/no-2)" << endl;
    cin >> cont;
    }while (cont==1);

    return 0;

}
