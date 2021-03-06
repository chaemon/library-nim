#{{{ Graph
import sequtils

type
  Edge[T] = object
    src,dst:int
    weight:T
    rev,id:int
  Edges[T] = seq[Edge[T]]
  Graph[T] = seq[seq[Edge[T]]]

proc initEdge[T](src,dst:int,weight:T,rev = -1, id = -1):Edge[T] =
  var e:Edge[T]
  e.src = src
  e.dst = dst
  e.weight = weight
  e.rev = rev
  e.id = id
  return e

proc initGraph[T](n:int):Graph[T] =
  return newSeqWith(n,newSeq[Edge[T]]())

proc addBiEdge[T](g:var Graph[T],src,dst:int,weight = T(1),id = -1):void =
  g[src].add(initEdge(src,dst,weight,g[dst].len, id))
  g[dst].add(initEdge(dst,src,weight,g[src].len-1, id))

proc addEdge[T](g:var Graph[T],src,dst:int,weight:T=1):void =
  g[src].add(initEdge(src,dst,weight,-1))

proc `<`[T](l,r:Edge[T]):bool = l.weight < r.weight
#}}}
