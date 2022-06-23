#include <iostream>

#define S 50

using namespace std;
int main()
{
    int n, i;
    float x[S], y[S], sum_x = 0, sum_x_square = 0, sum_y = 0, sum_xy = 0, intercept, slope;

    /* Input */
    cout << "How many data points? ";
    cin >> n;

    cout << "Enter data:" << endl;

    for (i = 1; i <= n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
    }

    /* Calculating Required Sum */
    for (i = 1; i <= n; i++)
    {
        sum_x = sum_x + x[i];
        sum_x_square = sum_x_square + x[i] * x[i];
        sum_y = sum_y + y[i];
        sum_xy = sum_xy + x[i] * y[i];
    }
    /* Calculating intercept and slope */
    slope = (n * sum_xy - sum_x * sum_y) / (n * sum_x_square - sum_x * sum_x);
    intercept = (sum_y - slope * sum_x) / n;

    /* Displaying value of intercept and slope */
    cout << "Calculated value of intercept is " << intercept << " and slope is " << slope << endl;
    cout << "Equation of best fit is: y = " << intercept << " + " << slope << "x";

    return (0);
}