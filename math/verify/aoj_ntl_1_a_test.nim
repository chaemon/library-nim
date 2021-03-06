# verify-helper: PROBLEM http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A

include "template/template.nim"

include "math/prime_factor.nim"

proc main() =
  let N = nextInt()
  stdout.write N, ":"
  let pf = primeFactor(N)
  for k,v in pf:
    for i in 0..<v: stdout.write " ",k
  echo ""

main()
