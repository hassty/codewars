fn persistence(num: u64) -> u64 {
    let mut num = num;
    let mut counter = 0;

    loop {
        let digits = num
            .to_string()
            .chars()
            .map(|d| d.to_digit(10).unwrap() as u64)
            .collect::<Vec<u64>>();

        num = digits.iter().fold(1, |acc, x| acc * x);
        if digits.len() <= 1 {
            break counter;
        } else {
            counter += 1;
        }
    }
}