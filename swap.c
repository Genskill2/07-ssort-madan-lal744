void swap_max(int arr[], int l, int n)
{
    int t = 0;
    int s = n;
    int max = arr[n];
    for (int i = n + 1; i < l; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            s = i;
        }
    }
    t = arr[s];
    arr[s] = arr[n];
    arr[n] = t;
}
void ssort(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        swap_max(arr, l, i);
    }
}
