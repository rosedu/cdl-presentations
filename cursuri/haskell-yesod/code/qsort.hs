qsort []     = []
qsort (x:xs) = lesser ++ (x : greater)
  where
    lesser = qsort [y | y <- xs, y < x]
    greater = qsort [y | y <- xs, y >= x]
