void fibonacci (int fibo)
{
    int a=0, b=1, fib;
        cout << "Fibonacci sequence up to " << fibo << ":" << endl;
        while (a < fibo)
        {
            if (a < fibo)
            {
                cout << a << endl;
            } 
            fib=a+b;
            a=b;
            b=fib;
        }
    return;
}

/*
fibonacci(10000):

0
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
*/
