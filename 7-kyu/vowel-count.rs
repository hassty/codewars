fn get_count(string: &str) -> usize {
  let mut vowels_count: usize = 0;

  // Do your magic here
  
  for ch in string.chars() {
      if let 'a' | 'e' | 'i' | 'o' | 'u' = ch {vowels_count += 1}}
  vowels_count
}