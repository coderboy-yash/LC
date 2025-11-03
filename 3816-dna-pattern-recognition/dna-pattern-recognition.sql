SELECT 
  sample_id,
  dna_sequence,
  species,
  dna_sequence LIKE 'ATG%' AS has_start,   -- starts with ATG
  (dna_sequence LIKE '%TAA' 
   OR dna_sequence LIKE '%TAG' 
   OR dna_sequence LIKE '%TGA') AS has_stop,   -- ends with stop codon
  dna_sequence LIKE '%ATAT%' AS has_atat,  -- contains ATAT
  dna_sequence LIKE '%GGG%' AS has_ggg     -- contains GGG
FROM samples
ORDER BY sample_id;
