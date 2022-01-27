package kata 

func Solve(arr []int) (r []int) {
	for i, x := range arr {
		add := true
		for j := i + 1; j < len(arr); j++ {
			if arr[j] == x {
				add = false
			}
		}
		if add {
			r = append(r, x)
		}
	}
	return r
}