int house_numbers_sum(const int *arr, int count)
{
  int sum = 0, i = 0;
	
	while (*(arr + i))
		sum += *(arr + i++);

	return sum;
}