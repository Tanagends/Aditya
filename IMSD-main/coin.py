

T = {
        
}

def coin(coins, amount):
    if amount <= 0:
        return amount
    if not coins:
        return -1

    if T.get((coins, amount), -1) == -1:
        if coins[0] > amount:
            coin(coins[1:], amount)

    T[(coins, amount)] = min(T[(coins[1:], amount)], T[(coins[1:], amount-coins[0])])
        
