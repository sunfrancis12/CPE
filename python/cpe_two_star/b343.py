t = int(input())
for _ in range(t):
    n, m, l = map(int, input().split())
    dominos = [[] for _ in range(n+1)]
    queue = []
    fall = 0
    #紀錄x骨牌可以推倒y骨牌
    for _ in range(m):
        x, y = map(int, input().split())
        dominos[x].append(y)
    for _ in range(l):
        queue.append(int(input()))
    while queue != []:
        cur = queue[0]
        queue.pop(0)
        if dominos[cur] != 0:
            fall +=1
            queue += dominos[cur]
            dominos[cur] = 0
    print(fall)
        