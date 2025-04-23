from collections import defaultdict


class Graph:
    def __init__(self, edges: list[list[int]]):
        map = defaultdict(list)
        for i in range(len(edges)):
            map[i] = edges[i]

        self.verts = map
    
    def __str__(self):
        res = [];
        for key, value in self.verts.items():
            res.append(f"{key}: {value}")
        return "\n".join(res)