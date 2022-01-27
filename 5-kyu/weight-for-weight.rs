fn order_weight(s: &str) -> String {
    let mut weights = s.split_whitespace().collect::<Vec<_>>();

    weights.sort();
    weights.sort_by(|&a, &b| {
        a.chars()
            .map(|x| x.to_digit(10).unwrap())
            .sum::<u32>()
            .cmp(&b.chars().map(|y| y.to_digit(10).unwrap()).sum::<u32>())
    });

    weights.join(" ")
}