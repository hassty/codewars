fn get_middle(s:&str) -> &str {
    let length = s.chars().count();

    if length <= 2 {
        return s;
    }

    &s[length / 2 - ((length & 1 == 0) as usize)..=length / 2]
}