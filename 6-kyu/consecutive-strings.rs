fn longest_consec(strarr: Vec<&str>, k: usize) -> String {
    if strarr.is_empty() || k <= 0 {
        return "".to_owned();
    }
    let mut strings: Vec<String> = Vec::new();

    for chunk in strarr.windows(k) {
        strings.push(chunk.iter().flat_map(|s| s.chars()).collect::<String>());
    }

    match strings.iter().rev().max_by_key(|s| s.chars().count()) {
        Some(x) => x,
        None => return "".to_owned(),
    }
    .to_owned()
}