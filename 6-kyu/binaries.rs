fn code(s: &str) -> String {
    s.chars()
        .map(|x| {
            let digit = x.to_digit(10).unwrap();
            let binary = format!("{:b}", digit);

            format!(
                "{zeros}1{bin}",
                zeros = "0".repeat(binary.len() - 1),
                bin = binary
            )
        })
        .collect()
}
fn decode(s: &str) -> String {
    let mut digits = s.to_owned();
    let mut r = Vec::<i32>::new();

    loop {
        let range_end = 2 * (digits.chars().take_while(|&x| x != '1').count() + 1);
        if (range_end > digits.len()) {
            break;
        }

        let binary = digits
            .drain(..range_end)
            .skip(range_end / 2)
            .collect::<String>();
        r.push(i32::from_str_radix(binary.as_str(), 2).unwrap());
    }

    r.iter().map(|x| x.to_string()).collect()
}