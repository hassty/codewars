use std::collections::BTreeMap;

fn hist(s: &str) -> String {
    let mut errors = BTreeMap::new();

    s.chars().for_each(|c| {
        if c == 'u' || c == 'w' || c == 'x' || c == 'z' {
            *errors.entry(c).or_insert(0) += 1;
        }
    });

    errors
        .keys()
        .map(|key| {
            let count = errors.get(key).unwrap();
            format!("{:2} {:<6}{}", key, count, "*".repeat(*count as usize))
        })
        .collect::<Vec<_>>()
        .join("\r")
}