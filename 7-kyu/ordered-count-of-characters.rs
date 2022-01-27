fn ordered_count(sip: &str) -> Vec<(char, i32)> {
    let mut letters: Vec<char> = Vec::new();
    let mut counters: Vec<i32> = Vec::new();

    for c in sip.chars() {
        if !letters.contains(&c) {
            letters.push(c);
            counters.push(1);
        } else {
            *counters
                .get_mut(letters.iter().position(|ch| ch == &c).unwrap())
                .unwrap() += 1;
        }
    }

    letters
        .into_iter()
        .zip(counters.into_iter())
        .collect::<Vec<(char, i32)>>()
}