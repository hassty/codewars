fn positive_sum(slice: &[i32]) -> i32 {
    slice.into_iter().filter(|&&x| x > 0).sum()
}