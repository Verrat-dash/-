#include <stdio.h>
#include <iostream>
#include <string>

using std::wcin;
using std::wcout;
using std::wstring;

int main()
{
    wcout << L"VVedite slovo: ";
    wstring txt;
    getline(std::wcin,txt);
    for (size_t i = 0; i < txt.length(); ++i)
    {
        if (txt[i]==L'a')
            wcout << L"01";
        if (txt[i]==L'b')
            wcout << L"02";
        if (txt[i]==L'c')
            wcout << L"03";
        if (txt[i]==L'd')
            wcout << L"04";
        if (txt[i]==L'e')
            wcout << L"05";
        if (txt[i]==L'f')
            wcout << L"06";
        if (txt[i]==L'g')
            wcout << L"07";
        if (txt[i]==L'h')
            wcout << L"08";
        if (txt[i]==L'i')
            wcout << L"09";
        if (txt[i]==L'j')
            wcout << L"10";
        if (txt[i]==L'k')
            wcout << L"11";
        if (txt[i]==L'l')
            wcout << L"12";
        if (txt[i]==L'm')
            wcout << L"13";
        if (txt[i]==L'n')
            wcout << L"14";
        if (txt[i]==L'o')
            wcout << L"15";
        if (txt[i]==L'p')
            wcout << L"16";
        if (txt[i]==L'q')
            wcout << L"17";
        if (txt[i]==L'r')
            wcout << L"18";
        if (txt[i]==L's')
            wcout << L"19";
        if (txt[i]==L't')
            wcout << L"20";
        if (txt[i]==L'u')
            wcout << L"21";
        if (txt[i]==L'v')
            wcout << L"22";
        if (txt[i]==L'w')
            wcout << L"23";
        if (txt[i]==L'x')
            wcout << L"24";
        if (txt[i]==L'y')
            wcout << L"25";
        if (txt[i]==L'z')
            wcout << L"26";
        if (txt[i]==L' ')
            wcout << L"00";
    }
    system("pause");
    return 0;
}
