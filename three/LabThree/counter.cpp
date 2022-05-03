#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <sstream>        // istringstream
#include <iterator>

using namespace std;
//-------------------------------------------------------------------
double string_2_double(const string& str)
{
    double x = 0.0;
    istringstream(str) >> x;
    return x;
}
//-------------------------------------------------------------------
// !!ѕроверки правильности не провод€тс€!!
//-------------------------------------------------------------------
double arithmetic_operations(const double& op1,
    const double& op2,
    const char& operation)
{
    double result = 0.0;
    switch (operation)
    {
    case ('+'):  result = op1 + op2;
        break;
    case ('-'):  result = op1 - op2;
        break;
    case ('*'):  result = op1 * op2;
        break;
    case ('/'):  if (op2 != 0) result = op1 / op2;
              else result = -1;
        break;
    }
    return result;
}
//-------------------------------------------------------------------
// ћассив строк expr (выражение в польской нотации) читаетс€ построчно.
// ≈сли считанна€ строка представл€ет число, то это число кладетс€ в
// стек. ≈сли считанна€ строка представл€ет символ арифм. операции, то
// из стека извлекаютс€ два числа, над ними производитс€ данна€
// операци€, а еЄ результат кладетс€ в стек. ¬ конце-концов в стеке
// останетс€ одно единственное число -- результат вычислени€ выражени€.
//-------------------------------------------------------------------
double evaluate_polish_expr(const vector<string>& expr)
{
    const set<string> operators = { "+", "-", "*", "/" };
    stack<double>* operands = new stack<double>();
    for (const auto& e : expr)
    {
        if (operators.find(e) != operators.end())
        {
            double  x2 = operands->top();
            operands->pop();
            double  x1 = operands->top();
            operands->pop();
            operands->push(arithmetic_operations(x1, x2, e[0]));
        }
        else
            operands->push(string_2_double(e));
    }

    return operands->top();
}
//-------------------------------------------------------------------
int retrez(std::string s)
{
    //std::string s = "3 4 +";
    std::stringstream ss(s);
    std::istream_iterator<std::string> begin(ss);
    std::istream_iterator<std::string> end;
    std::vector<std::string> polish_expr(begin, end);
    //for (const auto& s : polish_expr)
    //    cout << s << " ";
    //cout << endl;
    //cout << evaluate_polish_expr(polish_expr);
    return  evaluate_polish_expr(polish_expr);
}