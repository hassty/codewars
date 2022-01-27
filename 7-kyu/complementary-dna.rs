fn dna_strand(dna: &str) -> String {
    dna.chars()
        .map(|x| {
            match x {
                'A' => 'T',
                'T' => 'A',
                'G' => 'C',
                'C' => 'G',
                _ => ' ',
            }
            .to_string()
        })
        .collect()
}