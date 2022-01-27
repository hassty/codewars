fn descending_order(x: u64) -> u64 {
    let mut v = x.to_string().chars().collect::<Vec<char>>();

    v.sort();
    v.reverse();

    v.iter().collect::<String>().parse::<u64>().unwrap()
}