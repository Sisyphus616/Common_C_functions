void exchange_ab()
{
    int c;
    c=a;
    a=b;
    b=c;
}
//交换的变量应为全局变量，否则根据函数特性只是发生值的传递而无法交换
