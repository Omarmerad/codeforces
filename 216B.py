from collections import defaultdict, deque



def our_function(graph, n):
    color = {}  
    count = 0
    total = 0
    
    for node in range(1,n+1):
        if node not in color:
            if node not in graph:
                total += 1
                color[node] = 0
                continue
            queue = deque([node])
            color[node] = 0
            component_size = 1
            is_bipartite = True
            count_0 = 1
            count_1 = 0
            while queue:
                current = queue.popleft()
                for neighbor in graph[current]:
                    if neighbor not in color:
                        color[neighbor] = 1 - color[current]
                        component_size += 1
                        if color[neighbor] == 0:
                            count_0 += 1
                        else:
                            count_1 += 1
                        queue.append(neighbor)
                    elif color[neighbor] == color[current]:
                        is_bipartite = False
            if not is_bipartite:
                count += 1
                total += (component_size -1)
            else:
                total += component_size
    if total % 2 == 1:
        return count + 1
    else:
        return count


n, m = map(int, input().split())

graph = defaultdict(list)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)



print(our_function(graph,n))
