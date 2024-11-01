// Counting frequencies of array elements[numbers]

void frequencyCount(vector<int> &arr, int N, int P)
{
    int temp[1000001] = {0};
    for (int i = 0; i < N; i++)
    {
        if (arr[i] <= P)
        {
            temp[arr[i] - 1] += 1;
        }
    }

    arr.clear();

    for (int i = 0; i < N; i++)
    {
        arr.push_back(temp[i]);
    }
}
