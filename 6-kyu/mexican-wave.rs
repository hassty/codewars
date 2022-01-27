fn wave(s: &str) -> Vec<String> {
    let mut r = Vec::new();

    for (i, c) in s.chars().enumerate() {
        if c.is_whitespace() {
            continue;
        }

        let mut s = s.to_owned();
        s.get_mut(i..i + 1).unwrap().make_ascii_uppercase();
        r.push(s);
    }

    r
}