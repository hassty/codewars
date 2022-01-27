fn high_and_low(numbers: &str) -> String {
    String::from(
        numbers
            .split_whitespace()
            .map(|s| s.parse::<i32>().unwrap())
            .max()
            .unwrap()
            .to_string()
            + " "
            + numbers
                .split_whitespace()
                .map(|s| s.parse::<i32>().unwrap())
                .min()
                .unwrap()
                .to_string()
                .as_str(),
    )
}