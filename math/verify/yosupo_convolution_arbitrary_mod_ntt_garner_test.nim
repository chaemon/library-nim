# verify-helper: PROBLEM https://judge.yosupo.jp/problem/convolution_mod_1000000007

const Mod = 1000000007
include "template/template.nim"
include "math/mod_int.nim"
include "math/number_theoretic_transform.nim"
include "math/garner.nim"
include "math/arbitrary_mod_ntt.nim"

block main:
  let N, M = nextInt()
  var
    a = newSeqWith(N, Mint(nextInt()))
    b = newSeqWith(M, Mint(nextInt()))
  var s = ArbitraryModNTT[Mint].init()
  echo s.multiply(a, b).mapIt($it).join(" ")
