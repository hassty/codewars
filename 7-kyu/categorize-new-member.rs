fn open_or_senior(data: Vec<(i32, i32)>) -> Vec<String> {
    let mut output: Vec<String> = Vec::new();
    
    for (age, handicap) in data {
        if age >= 55 && handicap > 7 {
            output.push(String::from("Senior"));
        } else {
            output.push(String::from("Open"));
        }
    }

    output
}