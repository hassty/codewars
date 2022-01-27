fn disemvowel(s: &str) -> String {
  s.chars().filter(|&c| {
    let c = c.to_ascii_lowercase();
    c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'
  }).collect()
}