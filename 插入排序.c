void InsertionSort( int a[] , int size )
{
    for( int i=1 ; i<size ; i++ )
    {
        int min;
        for( int j=0 ; j<i ; j++ )
        {
            if( a[i]<a[j] )
            {
                min=a[i];
                for( int k=i ; k>j ; k-- )
                {
                    a[k]=a[k-1];
                }
                a[j]=min;
                break;
            }
        }
    }
}
