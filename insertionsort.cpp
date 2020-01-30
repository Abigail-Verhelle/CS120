
for( int i = 1; i < size; i++ )
{
    int pos = i;
    int value = A[pos];
    while( pos > 0 && value < A[pos-1] )
    {
        A[pos] = A[pos-1];
        pos--;
    }
    A[pos] = value;
    
