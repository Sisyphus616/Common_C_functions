void QuickSort( int a[] , int low , int high ){
    if( low>=high )
        return;
    int i=low;
    int j=high;
    int key=a[low];
    while( i<j ){
        while( a[j]>=key&&i<j ) j--;
        a[i]=a[j];
        while( a[i]<=key&&i<j ) i++;
        a[j]=a[i];
    }
    a[i]=key;
    QuickSort(a,low,i-1);	
    QuickSort(a,i+1,high);
}
//目前时间最优排序
