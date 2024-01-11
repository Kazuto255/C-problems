#define    N   100
#define    A   3
main()
{
    int a;
    a = A;
    while ( a < N)
    {
        printf("%d\n",a);
        a *= a;
    }
}