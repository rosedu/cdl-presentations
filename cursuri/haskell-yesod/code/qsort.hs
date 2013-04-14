qsort []     = []
qsort (x:xs) = lesser ++ greater
  where
    lesser = qsort [y | y <- xs, y < x]
    greater = qsort [y | y <- xs, y >= x]
