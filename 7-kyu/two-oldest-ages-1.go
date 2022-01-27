package kata

import "sort"

func TwoOldestAges(ages []int) (r [2]int) {
	sort.Ints(ages)
	copy(r[:], ages[len(ages)-2:])
	return r
}