package kata

import "sort"

type sortRunes []rune

func (s sortRunes) Less(i, j int) bool {
	return s[i] < s[j]
}

func (s sortRunes) Swap(i, j int) {
	s[i], s[j] = s[j], s[i]
}

func (s sortRunes) Len() int {
	return len(s)
}

func TwoToOne(s1 string, s2 string) string {
	s := s1 + s2
	r := []rune{}
	found := map[rune]bool{}

	for _, c := range s {
		if found[c] {
			continue
		}

		found[c] = true
		r = append(r, c)
	}

	sort.Sort(sortRunes(r))

	return string(r)
}