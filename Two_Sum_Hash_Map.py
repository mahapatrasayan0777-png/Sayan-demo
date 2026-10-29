
def two_sum(prices, target):
    seen = {}

    for i, price in enumerate(prices):
        complement = target - price

        if complement in seen:
            return [seen[complement], i]

        seen[price] = i


prices = [2, 7, 11, 15]
target = 9

print("Indices:", two_sum(prices, target))
