fn rot13(message: &str) -> String {
    message
        .chars()
        .map(|c| {
            if c.is_alphabetic() {
                let i = if c.is_lowercase() {
                    'a' as u32
                } else {
                    'A' as u32
                };
                char::from_u32(((c as u32 - i + 13) % 26) + i).unwrap()
            } else {
                c
            }
        })
        .collect()
}