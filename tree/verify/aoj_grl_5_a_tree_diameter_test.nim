# verify-helper: PROBLEM http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_5_A

include "template/template.nim"
include "graph/template.nim"

include "tree/tree_diameter.nim"

proc main() =
  let N = nextInt()
  var g = initGraph[int](N)
  for i in 1..<N:
    let x, y, z = nextInt()
    g.addBiEdge(x,y,z)
  echo g.treeDiameter()[0]

main()
