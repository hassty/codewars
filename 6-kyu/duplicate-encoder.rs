fn duplicate_encode(word:&str)->String {
    word.to_lowercase()
        .chars()
        .map(|x| {
            if word.to_lowercase().matches(|c| c == x).count() > 1 {
                ')'
            } else {
                '('
            }
        })
        .collect()
}