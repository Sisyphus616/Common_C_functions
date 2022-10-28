int MaxFactor( int a , int b )
{
    for( ; a!=0&&b!=0 ; ){
        if( a>b )
            a-=b;
        else
            b-=a;
    }
    return a^b;
}
//更相减损术+异或
