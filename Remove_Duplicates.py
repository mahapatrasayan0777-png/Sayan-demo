
def remove_duplicates(nums):
    seen = set()
    result = []

    for num in nums:
        if num not in seen:
            seen.add(num)
            result.append(num)

    return result


nums = [10, 20, 10, 30, 20, 40]
print("After removing duplicates:", remove_duplicates(nums))
