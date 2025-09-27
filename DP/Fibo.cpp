#include <iostream>
#include <vector>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    std::vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int fibo(int n)
{
    int a = 0;
    int b = 1;
    while (n > 1)
    {
        int t = a;
        a = b;
        b = b + t;
        n--;
    }
    return b;
}

int main()
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
    std::cout << "Fibo(" << n << ") = " << fibo(n) << std::endl;
    return 0;
}