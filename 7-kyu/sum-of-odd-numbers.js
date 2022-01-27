function rowSumOddNumbers(n) {

	let sum = 0;
	let a = 0;

	a = n*(n-1)+1

	sum = (2*a + 2*(n-1))/2*n

	return sum;
}