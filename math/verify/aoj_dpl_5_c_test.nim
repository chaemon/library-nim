# verify-helper: PROBLEM http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_C

include "template/template.nim"

const MOD = 1000000007
include "math/mod_int.nim"
include "math/combination.nim"

proc main() =
  let n, k = nextInt()
  var
    s = initMint(0)
  for i in 1..k:
    if (k - i) mod 2 == 0: s += Mint.C(k,i) * (initMint(i)^n)
    else: s -= Mint.C(k,i) * (initMint(i)^n)
  echo s

main()
