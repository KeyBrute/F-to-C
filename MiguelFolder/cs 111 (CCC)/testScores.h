// function to calculate the average score
float avgScore(float array[], int size)
{
    float averageNum = 0;
    for (int i = 0; i < size; i++)
    {
        averageNum = averageNum + *(array + i);
    }
    averageNum = averageNum / size;

    return averageNum;
}

// function to sort an array
void srtAry(float array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                // This swaps the values
                int temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}