import deques

type HopcroftKarp = object
  graph: seq[seq[int]]
  dist, match: seq[int]
  used, vv: seq[bool]

proc initHopcroftKarp(n,m:int):HopcroftKarp = HopcroftKarp(graph:newSeqWith(n, newSeq[int]()), match:newSeqWith(m, -1), used:newSeq[bool](n))

proc addEdge(self:var HopcroftKarp, u,v:int) = self.graph[u].add(v)

proc bipartiteMatching(self:var HopcroftKarp):seq[(int,int)] =
  # bfs and dfs {{{
  proc bfs(self:var HopcroftKarp) =
    self.dist = newSeqWith(self.graph.len, -1)
    var que = initDeque[int]()
    for i in 0..<self.graph.len:
      if not self.used[i]:
        que.addLast(i)
        self.dist[i] = 0
  
    while que.len > 0:
      let a = que.popFirst()
      for b in self.graph[a]:
        let c = self.match[b]
        if c >= 0 and self.dist[c] == -1:
          self.dist[c] = self.dist[a] + 1
          que.addLast(c)
  proc dfs(self:var HopcroftKarp, a:int):bool =
    self.vv[a] = true
    for b in self.graph[a]:
      let c = self.match[b]
      if c < 0 or (not self.vv[c] and self.dist[c] == self.dist[a] + 1 and self.dfs(c)):
        self.match[b] = a
        self.used[a] = true
        return true
    return false
  # }}}

  var ret = 0
  while true:
    self.bfs()
    self.vv = newSeqWith(self.graph.len, false)
    var flow = 0
    for i in 0..<self.graph.len:
      if not self.used[i] and self.dfs(i): flow += 1
    if flow == 0:
      result = newSeq[(int,int)]()
      for i,m in self.match:
        if m != -1:
          result.add((m, i))
      return
    ret += flow

proc output(self:HopcroftKarp) =
  for i in 0..<self.match.len:
    if self.match[i] != -1:
      echo self.match[i], "-", i
