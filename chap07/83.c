/* 7-2 */
#include <stdio.h>
int mi(const unsigned x,unsigned n)
{
    unsigned i, a;
    a = x;
    for (i = 0; i < n; i++)
        a *= 2;
    return a;
}
int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U) 
            bits++;
        x >>= 1;
    }
    return bits;
}
int int_bits()
{
    return count_bits(-0U);
}
void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x>> i) & 1U) ? '1' : '0');
}

int main ()
{   
    unsigned x, n;
    printf("非负整数：");
    scanf("%u", &x);
    printf("位移位数：");
    scanf("%u", &n);
    printf("无符号整数位左移的值");
    print_bits(x << n);
    putchar('\n');
    printf("无符号整数乘以2的指数幂的值");
    print_bits(mi(x,n));
    putchar('\n');
    return 0;
}
