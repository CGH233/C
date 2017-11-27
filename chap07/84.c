/* 7-6 */
#include <stdio.h>
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
    return count_bits(~0U);
}
void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    i = (n < 1) ? n - 1 : i - 1;
    for (; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}
int main ()
{   
    unsigned x, n;
    printf("非负整数1：");
    scanf("%u", &x);
    printf("非负整数2：");
    scanf("%u", &n);
    if (x + n > 65535)
        puts("发生数据溢出，请输入更小的数");
    else
        printf("%u + %u = %u",x,n, x + n);
    putchar('\n');
    print_nbits(x + n, 16);
    puts("");
    return 0;
}
