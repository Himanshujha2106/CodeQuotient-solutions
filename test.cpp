#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> wordToDigit = {
    {"one", "1"},
    {"two", "2"},
    {"double", "2"},
    {"three", "3"},
    {"triple", "3"},
    {"four", "4"},
    {"five", "5"},
    {"six", "6"},
    {"seven", "7"},
    {"eight", "8"},
    {"nine", "9"},
    {"zero", "0"}
};

int main() {
    std::string phoneNumber;
    std::cout << "Enter the phone number in words (10 words): ";
    std::getline(std::cin, phoneNumber);

    std::string words[10];
    size_t pos = 0;
    for (int i = 0; i < 10; ++i) {
        size_t nextSpace = phoneNumber.find(' ', pos);
        words[i] = phoneNumber.substr(pos, nextSpace - pos);
        pos = nextSpace + 1;
    }

    std::string result;
    for (int i = 0; i < 10; ++i) {
        int count = 1;
        while (i < 9 && words[i] == words[i + 1]) {
            ++count;
            ++i;
        }
        if (count >= 4) {
            result += "double " + wordToDigit[words[i]];
        } else if (count == 3) {
            result += "triple " + wordToDigit[words[i]];
        } else if (count == 2) {
            result += "double " + wordToDigit[words[i]];
        } else {
            result += wordToDigit[words[i]];
        }
    }

    std::cout << "Phone number in digits: " << result << std::endl;

    return 0;
}
