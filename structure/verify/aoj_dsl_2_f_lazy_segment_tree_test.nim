# verify-helper: PROBLEM http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_F

include "template/template.nim"

include "structure/lazy_segment_tree.nim"

proc main() =
  let n, q = nextInt()
  let
    inf = (1 shl 31) - 1
    null = inf + 1
  var st = initLazySegmentTree[int,int](n, (a:int,b:int)=>min(a,b), (a:int, b:int) => (if b == null: a else: b), (a:int, b:int) => (if b == null: a else: b), inf, null)
#  st.build(newSeqWith(n,inf))
  for i in 0..<q:
    let p, s, t = nextInt()
    if p == 0:
      let x = nextInt()
      st.update(s..t, x)
    else:
      echo st[s..t]

main()
