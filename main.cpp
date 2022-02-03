#include <iostream>

bool check_palindrome(int i, std::string &str){
    int len = str.length();
    if(i >= len/2) return false;

    if(str[i] == str[len-i-1]){
        check_palindrome(i + 1,str);
    } else {
        return false;
    }
    return true;
}

int main(){
    std::string str;
    std::cout << "Введите слово: ";
    std::cin >> str;
    if(check_palindrome(0,str)){
        std::cout << "Слово является палиндромом";
    }
    else{
        std::cout << "Слово не является палиндромом";
    }
    return 0;
}
