path = []
graph = [[1, 2],[0],[0]]
visited = [False, False, False]

def dfs(node, element):
    visited[node] =  True
    path.append(node)

    for i in range(len(graph[node])):
        if(graph[node][i] == element):
            return graph[node][i]
        elif(visited[graph[node][i]] == False):
            return dfs(graph[node][i], element)
        elif(visited[graph[node][i]] == True and i == len(graph[node])-1):
            path.remove(path[len(path)-1])
            return dfs(path[len(path)-1], element)
        else:
            continue
print("element.:\t",end='')
print(dfs(0,2))
for i in path:
    print(i,end=' ')

print(dfs(0,2))
