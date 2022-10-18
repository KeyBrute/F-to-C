void findArea(double a, double b, double c)
{
    bool check = false;
    if (a > 0 and b > 0 and c > 0)
        / CHECKING WHETHER ALL ARE POSITIVE SIDES ARE NOT
        {
            if (a + b > c or c + a > b or b + c > a)
            {
                check = true;
            }
        }
    if (check)
    {
        double s = (a + b + c) / 2;
        double d = s * (s - a) * (s - b) * (s - c); // FINDING THE AREA

        double out = sqrt(d);
        cout << "The Area is:" << out << endl;
    }
    else
    {
        cout << "Not a valid Triangle" << endl; // PRINITNG IT IS NOT VALID
    }
}
}
;
int main()
{
    // reading input
    double A, B, C;
    cout << "Enter A,B and C values";
    cin >> A >> B >> C;
    Triangle T; // object creation
    T.setA(A);
    T.setB(B); // CALLING FUNCTIONS
    T.setC(C);
    cout << "The A and B and C values are:" << T.getA() << " and " << T.getB() << " and " << T.getC() << endl;
    if (T.isRightAngled())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    T.findArea(A, B, C); // CALLING FINDAREA FUNCTION
}