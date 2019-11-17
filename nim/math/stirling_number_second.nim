proc stirlingNumberSecond[T](n,k:int):T =
  var table = newCombination[T](k)
  result = T()
  for i in 0..k:
    let a = T().convert(i).pow(n) * table.C(k, i)
    if((k - i) and 1)>0: result -= a
    else: result += a
  result *= table.rfact(k)
