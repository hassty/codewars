fn stock_list(list_art: Vec<&str>, list_cat: Vec<&str>) -> String {
    if list_art.is_empty() || list_cat.is_empty() {
        return String::new();
    }

    let parsed_books = list_art
        .iter()
        .map(|x| {
            let (code, quantity) = x.split_at(x.find(' ').unwrap());

            let code = code.get(..1).unwrap();
            let quantity = quantity.trim().parse::<u32>().unwrap();

            (code, quantity)
        })
        .collect::<Vec<_>>();

    list_cat
        .iter()
        .map(|&category| {
            let total_quantity = parsed_books
                .iter()
                .filter(|book| book.0 == category)
                .map(|book| book.1)
                .sum::<u32>();

            format!("({} : {})", category, total_quantity)
        })
        .collect::<Vec<_>>()
        .join(" - ")
}