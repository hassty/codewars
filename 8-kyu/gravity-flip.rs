fn flip(dir: char, cubes: &[u32]) -> Vec<u32> {
    let mut sorted = cubes.to_vec();
    
    if dir == 'R' {
        sorted.sort();
    } else if dir == 'L' {
        sorted.sort_by(|a, b| b.cmp(a));
    }

    sorted
}