#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_E"

include "../../template/template.nim"

include "../dual_segment_tree.nim"

proc main() =
  let n, q = nextInt()
  var st = newDualSegmentTree[int](n, (a:int,b:int)=>a+b, 0)
  for i in 0..<q:
    let p = nextInt()
    if p == 0:
      let s, t, x = nextInt()
      st.update(s, t + 1, x)
    else:
      let i = nextInt()
      echo st[i]

main()