fn nb_year(p0: i32, percent: f64, aug: i32, p: i32) -> i32 {
    let mut n = 0;
    let mut population = p0;

    while population < p {
        population = population + (((population as f64) * percent / 100.0) as i32) + aug;
        n += 1;
    }

    n
}