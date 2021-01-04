# include <iostream>


int main()
{
    char op;
    float 1, 2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> 1 >> 2;

    switch(op)
    {
        case '+':
            cout << 1+2;
            break;

        case '-':
            cout << 1-2;
            break;

        case '*':
            cout << 1*2;
            break;

        case '/':
            cout << 1/2;
            break;

        default:
            
            cout << "Odpověd není správná";
            break;
    }

    return 0;
}