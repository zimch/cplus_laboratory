#include <stack>
#include <cctype>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

std::string RPN(std::string str)
{
    std::string srpn;

    std::string::size_type ind;
    while ((ind = str.find(' ')) != std::string::npos) // удаление пробелов из входной строки
    {
        str.erase(ind, 1);
    }

    for (int i = 0; i < str.size(); ++i) // учёт отрицательных чисел
    {
        if ((str[i] == '+' || str[i] == '-') && (0 == i || (!isalnum(str[i - 1]) && str[i - 1] != '.' && str[i - 1] != ')')))
        {
            auto it = std::find_if(str.begin() + i + 1, str.end(), [](char const c) {return !isalnum(c); });
            str.insert(it, ')');
            str.insert(i, "(0");
            int nnn = 0;
        }
    }

    //std::cout << str << std::endl;

    std::map<char, size_t> map; // карта весов символов
    map.insert({ '*', 3 });
    map.insert({ '/', 3 });
    map.insert({ '+', 2 });
    map.insert({ '-', 2 });
    map.insert({ '(', 1 });
    std::stack<char> stack;
    for (auto c : str) // формировка результирующей строки в ОПЗ
    {
        if (!isalnum(c) && ('.' != c))
        {
            srpn += ' ';
            if (')' == c)
            {
                while (stack.top() != '(')
                {
                    srpn += stack.top();
                    stack.pop();
                    srpn += ' ';
                }
                stack.pop();
            }
            else if ('(' == c)
            {
                stack.push(c);
            }
            else if (stack.empty() || (map[stack.top()] < map[c]))
            {
                stack.push(c);
            }
            else
            {
                do
                {
                    srpn += stack.top();
                    srpn += ' ';
                    stack.pop();
                } while (!(stack.empty() || (map[stack.top()] < map[c])));
                stack.push(c);
            }
        }
        else
        {
            srpn += c;
        }
    }
    while (!stack.empty())// остаток из стека добавляется в результ. строку
    {
        srpn += ' ';
        srpn += stack.top();
        srpn += ' ';
        stack.pop();
    }
    //std::cout << srpn << std::endl; // результирующая строка в ОПЗ

    return srpn;
}   