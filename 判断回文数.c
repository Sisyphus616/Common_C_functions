int ispalindrome( int a ){
    int sum=0,a2=a;
    while(a2>0){
        sum=sum*10+a2%10;
        a2/=10;
    }
    if( sum==a )
        return 1;
    return 0;
}

//刷题可用
